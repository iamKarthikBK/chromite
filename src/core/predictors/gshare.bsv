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
package gshare;
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

  interface Ifc_bpu;
    // method to receive the new pc for which prediction is to be looked up.
		method Action prediction_req(PredictionRequest req);

    // method to respond to stage0 with prediction state and new target address on hit
		interface Get#(PredictionResponse) prediction_response; 

    // method to training the BTB and BHT tables
		method Action train_bpu (Training_data td);

    method PredictionToStage0 predicted_pc;
  `ifdef ras
    method Action ras_push(Bit#(`vaddr) pc);
  `endif
  endinterface

  `define btbdepth    256
  `define bhtdepth    512
  `define histlen     8
  `define extrahist   3
  `define countlen    2
  `define rasdepth    8
  `define rastagdepth 64
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

  function Bit#(TLog#(`bhtdepth)) hash (Bit#(TAdd#(`extrahist, `histlen)) history, Bit#(`vaddr) pc);
    return truncate(pc >> `ignore) ^ truncate(pc >> (`ignore + 9)) ^ truncateLSB(history);
  endfunction

  (*synthesize*)
  (*conflict_free="train_bpu, ras_push"*)
  module mkbpu(Ifc_bpu);

    String gshare="";
    RegFile#(Bit#(TLog#(`btbdepth)), BTBEntry)        btb     <- mkRegFileFull();
    RegFile#(Bit#(TLog#(`bhtdepth)), Bit#(`countlen)) bht     <- mkRegFileFull();
    RegFile#(Bit#(TLog#(`rastagdepth)), RASEntry)     ras <- mkRegFileFull();
    Reg#(Bit#(TAdd#(`extrahist, `histlen))) rg_ghr[2] <- mkCReg(2, 0);
    Reg#(Bit#(TLog#(`extrahist))) rg_inflight[2] <- mkCReg(2, 0);
    Ifc_stack#(`vaddr, `rasdepth) ras_stack <- mkstack;

    Reg#(Bool) rg_init <- mkReg(True);
    Reg#(Bit#(TLog#(TMax#(`bhtdepth,TMax#(`btbdepth, `rasdepth))))) rg_init_count <- mkReg(0);
    
    FIFOF#(PredictionRequest)  ff_pred_request      <- mkSizedFIFOF(2);
    FIFOF#(PredictionResponse) ff_prediction_resp   <- mkBypassFIFOF();
    Reg#(PredictionToStage0)   rg_prediction_pc[2]  <- mkCReg(2, PredictionToStage0{prediction : 0,
                            target_pc : ?,  epochs: 0 `ifdef compressed ,edgecase: False `endif });


    rule initialize(rg_init);
      btb.upd(truncate(rg_init_count), BTBEntry{valid: False, ci: Branch, target: ?, tag: ?});
      bht.upd(truncate(rg_init_count), 1);
      ras.upd(truncate(rg_init_count), RASEntry{valid: False, tag: ?});
      if(rg_init_count == fromInteger(max(`bhtdepth, max(`btbdepth, `rastagdepth))-1)) begin
        ras_stack.clear;
        rg_init <= False;
        rg_ghr[1] <= 0;
      end
      rg_init_count <= rg_init_count + 1;
      `logLevel( gshare, 0, $format("GSHARE : Init stage. Count:%d",rg_init_count))
    endrule

    rule perform_prediction(!rg_init);
      let request = ff_pred_request.first();
      ff_pred_request.deq;

      Bit#(TLog#(`btbdepth)) btb_index = truncate(request.pc >> `ignore);
      Bit#(TLog#(`rastagdepth)) ras_index = truncate(request.pc >> `ignore);

      let btb_info = btb.sub(btb_index);
      let ras_info = ras.sub(ras_index);
      Bit#(`countlen) bht_state = bht.sub(hash(rg_ghr[0], request.pc));
      Bit#(TSub#(TSub#(`vaddr, TLog#(`btbdepth)), `ignore)) btb_tag = truncateLSB(request.pc);
      Bit#(TSub#(TSub#(`vaddr, TLog#(`rastagdepth)), `ignore)) ras_tag = truncateLSB(request.pc);

      Bit#(`countlen) prediction = 1;
      Bit#(`vaddr) target = btb_info.target;

      `logLevel( gshare, 0, $format("GSHARE: btb_info:", fshow(btb_info), 
                                    " btb_index:%d bht_state:%d bht_index:%d", 
                                    btb_index, bht_state, hash(rg_ghr[0], request.pc)))
      `logLevel( gshare, 0, $format("GSHARE: GHR:%b Inflt:%d Hash:%d", 
                                         rg_ghr[0], rg_inflight[0], hash(rg_ghr[0], request.pc)))

      if(btb_info.valid && btb_info.tag == btb_tag)begin
        `logLevel( gshare, 0, $format("GSHARE: Hit in BTB. Tag:%h Index:%d State:%d Target:%h CI:", 
                                        btb_tag, btb_index, bht_state, target, fshow(btb_info.ci)))
        if(btb_info.ci == Call || btb_info.ci == JAL)
          prediction = 3;
        if(btb_info.ci == Branch) begin
          prediction = bht_state;
          rg_ghr[0] <= {bht_state[1], truncateLSB(rg_ghr[0])};
          rg_inflight[0] <= rg_inflight[0] + 1;
        end
      end
      if(ras_info.valid && ras_info.tag == ras_tag) begin
        target = ras_stack.top;
        prediction = 3;
        `logLevel( gshare, 0, $format("GSHARE: Tag hit in RAS. Tag:%h, Index:%d. Target:%h", 
                                                        ras_tag, ras_index, target))
      end
      
      rg_prediction_pc[0] <= PredictionToStage0{  prediction : prediction,
                                                  target_pc  : target,
                                                  epochs     : request.epochs
                                               };
      
      let resp = PredictionResponse{ va       : request.pc,
                                     prediction : prediction} ;
      `logLevel( gshare, 0, $format("GSHARE: Response to Stage0:",fshow(resp)))
      ff_prediction_resp.enq(resp);
    endrule

		method Action prediction_req(PredictionRequest req)if(!rg_init);
      `logLevel( gshare, 0, $format("GSHARE: Prediction request:", fshow(req)))
      if(req.fence)
        rg_init <= True;
      else
        ff_pred_request.enq(req);
    endmethod

    method Action train_bpu(Training_data td)if(!rg_init);
      Bit#(TLog#(`btbdepth)) btb_index = truncate(td.pc >> `ignore);
      Bit#(TLog#(`rastagdepth)) ras_index = truncate(td.pc >> `ignore);
      Bit#(TSub#(TSub#(`vaddr, TLog#(`btbdepth)), `ignore)) btb_tag = truncateLSB(td.pc);
      Bit#(TSub#(TSub#(`vaddr, TLog#(`rastagdepth)), `ignore)) ras_tag = truncateLSB(td.pc);

      `logLevel( gshare, 0, $format("GSHARE: Training:",fshow(td)))
      if(td.ci == Ret) begin
        `logLevel( gshare, 0, $format("GSHARE: Training RAS. Index:%d Tag:%h", ras_index, ras_tag))
        ras.upd(ras_index, RASEntry{valid: True, tag: ras_tag});
        ras_stack.pop;
      end
      else begin
        `logLevel( gshare, 0, $format("GSHARE: Training BTB. Index:%d Tag:%h", btb_index, btb_tag))
        btb.upd(btb_index, BTBEntry{valid: True, tag: btb_tag, target: td.target, ci: td.ci});
        if(td.mispredict && rg_inflight[1]!=0)begin
          rg_inflight[1] <= 0;
          let x = rg_ghr[1] << (rg_inflight[1]-1);
          x[`extrahist + `histlen -1] = ~x[`extrahist + `histlen -1];
          rg_ghr[1] <= x;
//          rg_ghr[1] <= rg_ghr[1] << rg_inflight[1];
        end
        if(td.ci == Branch && rg_inflight[1] != 0)begin 
          `logLevel( gshare, 0, $format("GSHARE: Updating GHR:%b Inflt:%d Hash:%d", rg_ghr[1],
                                      rg_inflight[1], hash(rg_ghr[1] << rg_inflight[1], td.pc)))
          bht.upd(hash(rg_ghr[1] << rg_inflight[1], td.pc), td.state);
          if(!td.mispredict)
            rg_inflight[1] <= rg_inflight[1] - 1;
        end
      end
    endmethod

		interface prediction_response = toGet(ff_prediction_resp);
    method predicted_pc = rg_prediction_pc[1];
    method Action ras_push(Bit#(`vaddr) pc)if(!rg_init);
      `logLevel( gshare, 0, $format("GSHARE : Pushing to RAS:%h ",pc))
      ras_stack.push(pc);
    endmethod

  endmodule
  
//  (*synthesize*)
//  module mkbpu_inst(Ifc_bpu); 
//    let ifc();
//    mkbpu _temp(ifc);
//    return (ifc);
//  endmodule
endpackage

