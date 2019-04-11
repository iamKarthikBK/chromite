/* 
Copyright (c) 2018, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.  
* Redistributions in binary form must reproduce the above copyright notice, this list of 
  conditions and the following disclaimer in the documentation and/or other materials provided 
 with the distribution.  
* Neither the name of IIT Madras  nor the names of its contributors may be used to endorse or 
  promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT 
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------------------------

Author: Neel Gala
Email id: neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
package gshare_nc;
  import Vector::*;
  import FIFOF::*;
  import DReg::*;
  import SpecialFIFOs::*;
  import BRAMCore::*;
  import FIFO::*;
  import RegFile::*;
  import GetPut::*;


  import globals :: *;
  import stack :: *;
  `include "Logger.bsv"
  import mem_config::*; // for bram 1rw instances.

  interface Ifc_bpu;
    // method to receive the new pc for which prediction is to be looked up.
		method Action prediction_req(PredictionRequest req);

    // method to respond to stage0 with prediction state and new target address on hit
		interface Get#(PredictionResponse) prediction_response; 

    // method to training the BTB and BHT tables
		method Action train_bpu (Training_data td);

    // method to send the next-pc to stage0
    method PredictionToStage0 predicted_pc;

    // method to push the return address on a Call instruction
    method Action ras_push(Bit#(`vaddr) pc);

    // method to enable/disable bpu at run-time
    method Action bpu_enable(Bool e);
  endinterface

  `define countlen    2   // the size of the 2-bit counter
  `define ignore      2
  
  typedef struct{
    Bit#(`vaddr)  target;
    Bit#(TSub#(TSub#(`vaddr, TLog#(`btbdepth)), `ignore)) tag;
    Bool valid;
    ControlInsn   ci;
  } BTBEntry deriving(Bits, Eq, FShow);

  typedef struct {
    Bit#(TSub#(TSub#(`vaddr, TLog#(`rastagdepth)), `ignore)) tag;
    Bool valid;
  } RASEntry deriving(Bits, Eq, FShow);

  // function to calculate the hash address to access the branch-history-table.
  function Bit#(TLog#(`bhtdepth)) hash (Bit#(TAdd#(`extrahist, `histlen)) history, Bit#(`vaddr) pc);
    return truncate(pc >> `ignore) ^ truncate(history);
  endfunction

  (*synthesize*)
  (*conflict_free="train_bpu, ras_push"*)
  module mkbpu(Ifc_bpu);

    String bpu="";     // for Logger

    // holds the pc-tag, target, valid bit and instruction type
    Ifc_mem_config1r1w#(`btbdepth, SizeOf#(BTBEntry), 1) btb <- mkmem_config1r1w(False,"double");

    // holds the 2-bit state counter bits
    RegFile#(Bit#(TLog#(`bhtdepth)), Bit#(`countlen)) bht     <- mkRegFileFull();

    // holds the tags and valid bits of the pc of the ret instructions
    Ifc_mem_config1r1w#(`rastagdepth, SizeOf#(RASEntry), 1) ras <- mkmem_config1r1w(False,"double");

    // the stack to hold the return addresses
    Ifc_stack#(`vaddr, `rasdepth) ras_stack <- mkstack;

    // the branch history register
    Reg#(Bit#(TAdd#(`extrahist, `histlen))) rg_ghr[2] <- mkCReg(2, 0);

    // indicates the total number of speculated branch predictions in the pipe
    Reg#(Bit#(TLog#(`extrahist))) rg_inflight[2] <- mkCReg(2, 0);

    // wire indicating if the bpu is enabled/disabled
    Wire#(Bool) wr_bpu_enable <- mkWire();

    // register to indicate if the bpu needs to be flushed/initialized to reset state.
    Reg#(Bool) rg_init <- mkReg(True);
    Reg#(Bit#(TLog#(TMax#(`bhtdepth,TMax#(`btbdepth, `rastagdepth))))) rg_init_count <- mkReg(0);
    
    // fifo to hold the incoming request from stage0
    FIFOF#(PredictionRequest)  ff_pred_request      <- mkSizedFIFOF(2);

    // fifo holding the response to be sent to stage1
    FIFOF#(PredictionResponse) ff_prediction_resp   <- mkBypassFIFOF();

    // register indicating the next pc to the stage0
    Reg#(PredictionToStage0)   rg_prediction_pc[2]  <- mkCReg(2, PredictionToStage0{prediction : 0,
                            target_pc : ?,  epochs: 0 });


    // RuleName: initialize
    // Implicit Conditions: None
    // Explicit Conditions: rg_init == True;
    // Descriptions: This rule will fire on reset and whenever a fence.i instruction is execute by
    // the core. This rule simply invalidates all the entries in the btb, bht and empties the
    // ras-stack.
    rule initialize(rg_init);
      btb.write(1, truncate(rg_init_count), pack(BTBEntry{valid: False, ci: Branch, 
                                                          target: ?, tag: ?}));
      ras.write(1, truncate(rg_init_count), pack(RASEntry{valid: False, tag: ?}));
      bht.upd(truncate(rg_init_count), 1);
      if(rg_init_count == fromInteger(max(`bhtdepth, max(`btbdepth, `rastagdepth))-1)) begin
        ras_stack.clear;
        rg_init <= False;
        rg_ghr[1] <= 0;
      end
      rg_init_count <= rg_init_count + 1;
      `logLevel( bpu, 0, $format("GSHARE : Init stage. Count:%d",rg_init_count))
    endrule

    // RuleName: perform_prediction
    // Implicit Conditions: ff_pred_request.notEmpty && ff_prediction_resp.notFull
    // Explicit Conditions: rg_init == false;
    // Description: This rule looks up the BTB for the pc that has been presented by
    // stage0. The BTB is simply accessed using the lower-order bits of the pc. A hit in the btb
    // only occurs if the btb entry is valid and the tags match with that of the requested pc. RAS
    // table is also looked up in the similar fashion to identify if a requested PC is a RET
    // instruction. Both the BTB and RAS cannot be a hit, since they are trained
    // mutually-exclusively. If the BTB is a hit and the CI type == Branch then the bht is accessed
    // to fetch the 2-bit state of the counter. The bht is accessed by hashing the lower order bits
    // of the pc with the global history register. The 2-bit counter indicates if the branch is
    // predicted taken or not-taken.
    // If the BTB is a hit and CI == JAL or CI == Call, then the prediction is forced taken.
    // If prediction result from BTB or RAS is taken then the target address is either available
    // from the respective BTB entry of the RAS stack.
    // The GHR is updated speculatively with the prediction and is left-shifted. The ghr holds a few
    // extra history bits which hold the history of the speculated branch-instructions inserted 
    // into the pipe.
    rule perform_prediction(!rg_init);
      let request = ff_pred_request.first();
      ff_pred_request.deq;

      Bit#(TLog#(`btbdepth)) btb_index = truncate(request.pc >> `ignore);
      Bit#(TLog#(`rastagdepth)) ras_index = truncate(request.pc >> `ignore);

      BTBEntry btb_info = unpack(btb.read_response);
      RASEntry ras_info = unpack(ras.read_response);
      let bht_index = hash(rg_ghr[0], request.pc);
      Bit#(`countlen) bht_state = bht.sub(bht_index);
      Bit#(TSub#(TSub#(`vaddr, TLog#(`btbdepth)), `ignore)) btb_tag = truncateLSB(request.pc);
      Bit#(TSub#(TSub#(`vaddr, TLog#(`rastagdepth)), `ignore)) ras_tag = truncateLSB(request.pc);

      Bit#(`countlen) prediction = 1;
      Bool btbhit = False;
      Bit#(`vaddr) target = btb_info.target;

      `logLevel( bpu, 2, $format("GSHARE: btb_info:", fshow(btb_info), 
                                    " btb_index:%d bht_state:%d bht_index:%d", 
                                    btb_index, bht_state, bht_index))
      `logLevel( bpu, 3, $format("GSHARE: GHR:%b Inflt:%d", rg_ghr[0], rg_inflight[0]))

      if(btb_info.valid && btb_info.tag == btb_tag && wr_bpu_enable)begin
        `logLevel( bpu, 0, $format("GSHARE: Hit in BTB. Tag:%h Index:%d State:%d Target:%h CI:", 
                                        btb_tag, btb_index, bht_state, target, fshow(btb_info.ci)))
        if(btb_info.ci == Call || btb_info.ci == JAL)
          prediction = 3;
        if(btb_info.ci == Branch) begin
          btbhit = True;
          prediction = bht_state;
          rg_ghr[0] <= {truncate(rg_ghr[0]), bht_state[1]};
          rg_inflight[0] <= rg_inflight[0] + 1;
        end
      end
      if(ras_info.valid && ras_info.tag == ras_tag && wr_bpu_enable) begin
        target = ras_stack.top;
        prediction = 3;
        `logLevel( bpu, 0, $format("GSHARE: Tag hit in RAS. Tag:%h, Index:%d. Target:%h", 
                                                        ras_tag, ras_index, target))
      end
      
      rg_prediction_pc[0] <= PredictionToStage0{  prediction : prediction,
                                                  target_pc  : target,
                                                  epochs     : request.epochs
                                               };
      
      let resp = PredictionResponse{ va       : request.pc,
                                     prediction : prediction,
                                     hit : btbhit} ;
      `logLevel( bpu, 1, $format("GSHARE: Response to Stage0:",fshow(resp)))
      ff_prediction_resp.enq(resp);
    endrule

    // MethodName: prediction_req
    // Implicit Conditions: ff_pred_request.notFull
    // Explicit Conditions: rg_init == False;
    // Description: This method captures the request from stage0 and latches the address into the
    // BTB and ras table.
		method Action prediction_req(PredictionRequest req)if(!rg_init);
      `logLevel( bpu, 1, $format("GSHARE: Prediction request:", fshow(req)))
      Bit#(TLog#(`btbdepth)) btb_index = truncate(req.pc >> `ignore);
      Bit#(TLog#(`rastagdepth)) ras_index = truncate(req.pc >> `ignore);
      btb.read(btb_index);
      ras.read(ras_index);
      if(req.fence && wr_bpu_enable)
        rg_init <= True;
      else
        ff_pred_request.enq(req);
    endmethod

    // MethodName: train_bpu
    // Implicit Conditions: None.
    // Explicit Conditions: rg_init == False
    // Description: This method is fired when a control instruction is resolved in the execute
    // stage. This method will updated the ghr in case of a branch instruction being resolved.
    // Incase of JAL, Call, only the btb is updated.
    // Incase of Ret instructions, the ras-table is updated and the ras-stack is poped.
    // -- If a branch-misprediction occurred, the history in the ghr is corrected by flipping the
    // respective bits and rg_inflight is reset to 0. 
    // -- If the branch prediction was correct then the rg_inflight counter is simply decremented
    // by 1
    // -- If a miprediction occurred because of a non-branch instruction then the ghr is not touched
    // but the rg_inflight counter is reset to 0.
    method Action train_bpu(Training_data td)if(!rg_init);
      Bit#(TLog#(`btbdepth)) btb_index = truncate(td.pc >> `ignore);
      Bit#(TLog#(`rastagdepth)) ras_index = truncate(td.pc >> `ignore);
      Bit#(TSub#(TSub#(`vaddr, TLog#(`btbdepth)), `ignore)) btb_tag = truncateLSB(td.pc);
      Bit#(TSub#(TSub#(`vaddr, TLog#(`rastagdepth)), `ignore)) ras_tag = truncateLSB(td.pc);
      if(wr_bpu_enable) begin
        `logLevel( bpu, 0, $format("GSHARE: Training:",fshow(td)))
        if(td.ci == Ret) begin
          `logLevel( bpu, 0, $format("GSHARE: Training RAS. Index:%d Tag:%h", ras_index, ras_tag))
          ras.write(1, ras_index, pack(RASEntry{valid: True, tag: ras_tag}));
          ras_stack.pop;
        end
        else begin
          `logLevel( bpu, 2, $format("GSHARE: Training BTB. Index:%d Tag:%h", btb_index, btb_tag))
          btb.write(1, btb_index, pack(BTBEntry{valid: True, tag: btb_tag, 
                                                target: td.target, ci: td.ci}));
          let bht_index = hash(rg_ghr[1] >> rg_inflight[1], td.pc);
          if(td.ci == Branch && td.btbhit)begin 
            `logLevel( bpu, 3, $format("GSHARE: Updating GHR:%b Inflt:%d Hash:%d", rg_ghr[1],
                                        rg_inflight[1], bht_index))
            bht.upd(bht_index, td.state);
            if(!td.mispredict)
              rg_inflight[1] <= rg_inflight[1] - 1;
            else begin
              rg_inflight[1] <= 0;
              let x = rg_ghr[1] >> (rg_inflight[1]-1);
              x[0] = ~x[0];
              rg_ghr[1] <= x;
            end
          end
          else if(td.mispredict) begin
            rg_inflight[1] <= 0;
            rg_ghr[1] <= rg_ghr[1] >> rg_inflight[1];
          end
        end
      end
    endmethod

		interface prediction_response = toGet(ff_prediction_resp);

    method predicted_pc = rg_prediction_pc[1];

    method Action ras_push(Bit#(`vaddr) pc)if(!rg_init);
      `logLevel( bpu, 2, $format("GSHARE : Pushing to RAS:%h ",pc))
      ras_stack.push(pc);
    endmethod

    method Action bpu_enable(Bool e);
      wr_bpu_enable <= e;
    endmethod
  endmodule
endpackage

