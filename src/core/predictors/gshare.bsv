/* 
Copyright (c) 2018, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.  
* Redistributions in binary form must reproduce the above copyright notice, this list of 
  conditions and the following disclaimer in the documentation and / or other materials provided 
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

Author : Neel Gala
Email id : neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
package gshare;
	/*===== Pacakge imports ===== */
	import FIFO::*;
	import FIFOF::*;
	import SpecialFIFOs::*;
	import ConfigReg::*;
	import Connectable::*;
	import GetPut::*;
  import Assert::*;
  
  /*==== Project imports ======= */
  import mem_config::*; // for bram 1rw instances.
  import globals::*;
  `include "Logger.bsv"
`ifdef ras
  import stack::*;
`endif

  `ifdef compressed
    `define ignore 1
  `else
    `define ignore 2
  `endif

  // struct stored in the tag array for pc cmoparison
  typedef struct {
    Bit#(`vaddr)  target;
    Bit#(TSub#(TSub#(`vaddr, TLog#(`btbsize)), `ignore )) tag;
    Bit#(1) valid;
  } BTBEntry deriving (Bits, Eq, FShow);

  typedef struct {
    Bit#(`vaddr)  target;
    Bit#(TSub#(TSub#(`vaddr, TLog#(`btbsize)), `ignore )) tag;
    Bit#(1) valid;
  `ifdef compressed
    Bool    edgecase;
  `endif
  } BTBEntryC deriving (Bits, Eq, FShow);

  // struct stored in the tag array for pc cmoparison
  typedef struct {
    Bit#(TSub#(TSub#(`vaddr, TLog#(`rassets)), `ignore )) tag;
    Bit#(1) valid;
  } RASEntry deriving (Bits, Eq, FShow);

  typedef struct {
    Bit#(TSub#(TSub#(`vaddr, TLog#(`rassets)), `ignore )) tag;
    Bit#(1) valid;
  `ifdef compressed
    Bool    edgecase;
  `endif
  } RASEntryC deriving (Bits, Eq, FShow);

	interface Ifc_bpu;
    // method to receive the new pc for which prediction is to be looked up.
		method Action prediction_req(PredictionRequest req);

    // method to respond to stage0 with prediction state and new target address on hit
		interface Get#(PredictionResponse) prediction_response; 

    // method to training the BTB and BHT tables
		method Action train_bpu (Training_data td);

    method PredictionToStage0 predicted_pc;
  `ifdef ras
    method Action train_ras(RASTraining td);
    method Action ras_push(Bit#(`vaddr) pc);
  `endif
	endinterface

	(*synthesize*)
	module mkbpu(Ifc_bpu);
    String gshare="";
 		Reg#(Bit#(TAdd#(5,TLog#(`btbsize)))) rg_ghistory[2] <- mkCReg(2,0);
 		Reg#(Bit#(3)) rg_inflight_cntr[2] <- mkCReg(2,0);

    // ram to hold the tag of the address being predicted. The 2 bits are deducted since we are
    // supporting only non - compressed ISA. When compressed is supported, 1 will be dedudcted.
    Ifc_mem_config1r1w#(TDiv#(`btbsize,  2) , SizeOf#(BTBEntry), 1) mem_btb0 
                                                              <- mkmem_config1r1w(False,"double");
    Ifc_mem_config1r1w#(TDiv#(`btbsize,  2) , SizeOf#(BTBEntryC), 1) mem_btb1 
                                                              <- mkmem_config1r1w(False,"double");
    Reg#(Bit#(2)) arr_state0 [`btbsize/2 ];
    Reg#(Bit#(2)) arr_state1 [`btbsize/2 ];
    for(Integer i=0; i<`btbsize/2 ; i=i+1)begin
      arr_state0[i] <- mkConfigReg(1);
      arr_state1[i] <- mkConfigReg(1);
    end

  `ifdef ras 
    // ram to hold the tag bits for return instructions
    Ifc_mem_config1r1w#(TDiv#(`rassets, 2), SizeOf#(RASEntry), 1) mem_ras_tag0
                                                                <- mkmem_config1r1w(False,"double");
    Ifc_mem_config1r1w#(TDiv#(`rassets, 2), SizeOf#(RASEntryC), 1) mem_ras_tag1
                                                                <- mkmem_config1r1w(False,"double");

    // stack structure to hold the return addresses
    Ifc_stack#(`vaddr, `rassize) ras_stack <- mkstack;
  `endif

    // boolean register and counter used to initialize the ram structure on reset.
    Reg#(Bool) rg_init <- mkReg(True);
    Reg#(Bit#(TAdd#(0, TLog#(TMax#(TDiv#(`btbsize, 2), TDiv#(`rassets, 2)))))) rg_init_count <- mkReg(0);

    FIFOF#(PredictionRequest)  ff_pred_request      <- mkSizedFIFOF(2);
    FIFOF#(PredictionResponse) ff_prediction_resp   <- mkBypassFIFOF();
    Reg#(PredictionToStage0)   rg_prediction_pc[2]  <- mkCReg(2, PredictionToStage0{prediction : 0,
                            target_pc : ?,  epochs: 0 `ifdef compressed ,edgecase: False `endif });
    
    // RuleName : initialize
    // Explicit Conditions : rg_init == True
    // Implicit Conditions : None
    // on system reset first initialize the ram structure with valid = 0.
    rule initialize(rg_init);
      mem_btb0.write(1, truncate(rg_init_count), pack(BTBEntry{target : ?, tag : ?, valid : 0}));
      mem_btb1.write(1, truncate(rg_init_count), pack(BTBEntryC{target : ?, tag : ?, valid : 0
                                           `ifdef compressed ,edgecase : False `endif }));
    `ifdef ras
      mem_ras_tag0.write(1, truncate(rg_init_count), pack(RASEntry{tag : ?, valid : 0}));
      mem_ras_tag1.write(1, truncate(rg_init_count), pack(RASEntryC{tag : ?, valid : 0
                                           `ifdef compressed ,edgecase : False `endif }));
    `endif
      if(rg_init_count == fromInteger(max((`btbsize / 2),(`rassets / 2))-1)) begin
				rg_init <= False;
			end
      `logLevel( gshare, 0, $format("GSHARE : Init stage. Count:%d",rg_init_count))
      rg_init_count <= rg_init_count + 1;
      rg_ghistory[1]<=0;
      rg_inflight_cntr[1]<=0;
		endrule

    // RuleName : perform_prediction
    // Explicit Conditions : None
    // Implicit Conditions : None
    // Description : This rule will the prediction response from the BTB and RAS and send the result
    // to stage1. A hit can occur either in the BTB or the RAS and never both
    rule perform_prediction;
      Bit#(4) hit = 0;
      let request = ff_pred_request.first();
      ff_pred_request.deq();
    `ifdef compressed
      Bool edgecase = False;
      Bit#(2) prediction0 = 1;
      Bit#(2) prediction1 = 1;
      Bit#(2) prediction = 1;
    `else
      Bit#(2) prediction = 1;
    `endif
  
      // extract tag from the request PC for comparison
      Bit#(TSub#(TSub#(`vaddr, TLog#(`btbsize)),`ignore)) btb_tag_cmp = truncateLSB(request.pc);

      // extract the target - address, tags, counter - value and prediction state from bank0
      BTBEntry btbentry0 = unpack(mem_btb0.read_response);
      let gshare_target_addr0 = btbentry0.target;


      // extract the target - address, tags, counter - value and prediction state from bank1
      BTBEntryC btbentry1 = unpack(mem_btb1.read_response);
      let gshare_target_addr1 = btbentry1.target;

    `ifdef ras
      // extract tag from the request PC for comparison
      Bit#(TSub#(TSub#(`vaddr, TLog#(`rassets)),`ignore)) ras_tag_cmp = truncateLSB(request.pc);

      // extract the target - address, tags, counter - value and prediction state from bank0
      RASEntry rasentry0 = unpack(mem_ras_tag0.read_response);

      // extract the target - address, tags, counter - value and prediction state from bank1
      RASEntryC rasentry1 = unpack(mem_ras_tag1.read_response);
      let ras_target_address = ras_stack.top;
    `endif

      Bit#(`vaddr) target_address = gshare_target_addr0;
      Bit#(TLog#(`btbsize)) state_full_index = truncate(request.pc>>`ignore) ^
                                               truncate(rg_ghistory[0]);
      Bit#(TLog#(TDiv#(`btbsize, 2))) state_bank_index = truncateLSB(state_full_index); 

      `logLevel( gshare, 0, $format("GSHARE: Prediction StateFull:%d StateBank:%d GBuf:%h", 
                                              state_full_index, state_bank_index, rg_ghistory[0]))
      Bit#(2) state0 = arr_state0[state_bank_index];
      Bit#(2) state1 = arr_state1[state_bank_index];

      // ------------------------------ gshare look-up start ----------------------------------- //
      // When compressed is disabled we need to check which bank should the prediction be taken
      // from. This is done by checking the LSB bit of the full - index (a.k.a the va[ignore]). This
      // is required because 2 PCs which have the same bank_index (but point to different banks) 
      // and have the same tags as well (i.e. they vary only in the ignore bit of the va. Eg 0x0 and
      // 0x4) can both be valid entries in the respective banks. This will lead to bank1 overwriting
      // the prediction output of bank0 which is wrong.
      if (btb_tag_cmp == btbentry0.tag && btbentry0.valid == 1 &&
               `ifdef  compressed !request.discard `else request.pc[`ignore] == 0 `endif ) begin

      `ifdef compressed
        prediction0 = state0;
        prediction = state0;
      `else
        prediction = state0;
      `endif
        `logLevel( gshare, 1, $format("GSHARE : btb_tag_cmp:%h, tag0:%h, state:%d",
                                        btb_tag_cmp, btbentry0.tag, state0))
        `logLevel( gshare, 1, $format("GSHARE : BTB0 hit"))
        hit[0] = 1;
      end
      if (btb_tag_cmp == btbentry1.tag && btbentry1.valid == 1
               `ifndef compressed && request.pc[`ignore] == 1 `endif ) begin
      `ifdef compressed
        prediction1 = state1;
        if(hit[0] == 0)begin
          target_address = gshare_target_addr1;
          prediction = state1;
          edgecase=btbentry1.edgecase;
        end
        hit[0] = 1;
      `else
        prediction = state1;
        target_address = gshare_target_addr1;
        hit[1] = 1;
      `endif
        `logLevel( gshare, 1, $format("GSHARE : btb_tag_cmp:%h, tag0:%h, state:%d",
                                        btb_tag_cmp, btbentry1.tag, state1))
        `logLevel( gshare, 1, $format("GSHARE : BTB1 hit"))
      end
      `logLevel( gshare, 0, $format("GSHARE: Prediction HistBuff:%h inflight:%d ", rg_ghistory[0],
                                                                    rg_inflight_cntr[0] ))
      if(|hit == 1)begin
        rg_ghistory[0] <= {truncate(rg_ghistory[0]),prediction[1]};
        rg_inflight_cntr[0] <= rg_inflight_cntr[0] + 1;
        `logLevel( gshare, 0, $format("GSHARE: Hit in BTB"))
      end

      // ----------------------------------- gshare look up end --------------------------------- //

      // ------------------------------------ RAS look-up start -------------------------------- //
    `ifdef ras
      if( ras_tag_cmp == rasentry0.tag && rasentry0.valid == 1 && !ras_stack.empty && 
                    `ifdef compressed !request.discard `else request.pc[`ignore] == 0 `endif )begin
      `ifdef compressed
        prediction0 = 3;
        prediction = 3;
      `else
        prediction = 3;
      `endif
        target_address = ras_target_address;
        ras_stack.pop;
        `logLevel( gshare, 1, $format("GSHARE : RAS0 hit. Target:%h", target_address))
        hit[2] = 1;
      end
      else if( ras_tag_cmp == rasentry1.tag && rasentry1.valid == 1 && !ras_stack.empty
                `ifndef compressed && request.pc[`ignore]==1 `endif )begin
      `ifdef compressed
        prediction1 = 3;
        if(hit[2] == 0) begin
          prediction = 3;
          target_address = ras_target_address;
          edgecase=rasentry1.edgecase;
        end
        hit[2] = 1;
      `else
        prediction = 3;
        target_address = ras_stack.top;
        hit[2] = 1;
      `endif
        `logLevel( gshare, 1, $format("GSHARE : RAS1 hit Target:%h", target_address))
        ras_stack.pop;
      end
    `endif
  `ifndef compressed
    `ifdef ASSERT
      dynamicAssert(countOnes(hit) <= 1, "Multiple hits in BPU");
    `endif
  `endif
      let resp = PredictionResponse{ va       : request.pc
                                  `ifdef compressed
                                     ,discard     : request.discard
                                     ,prediction0 : prediction0
                                     ,prediction1 : prediction1
                                  `else
                                     ,prediction : prediction
                                  `endif } ;
      `logLevel( gshare, 0, $format("GSHARE : enquing Response:",fshow(resp)))
      rg_prediction_pc[0] <= PredictionToStage0{  prediction : prediction,
                                                  target_pc  : target_address,
                                                  epochs     : request.epochs
                                              `ifdef compressed
                                                  ,edgecase   :  edgecase
                                              `endif };
      ff_prediction_resp.enq(resp);
    endrule

    // MethodName : prediction_req
    // Explicit Conditions : rg_init == False
    // Implicit Conditions : None
    // Description : This rule will latch the index of the PC to be predicted.
    // We first derive the full_index : the index assuming a non - banked array of `btbsize.
    // from the full index we then derive the index for each bank (bank_index) by ignoring the 
    // LSB of the full_index. 
		method Action prediction_req(PredictionRequest req)if(!rg_init);

      // first find the full index.
      Bit#(TLog#(`btbsize)) btb_full_index = truncate(req.pc>>`ignore);
      Bit#(TLog#(`rassets)) ras_full_index = truncate(req.pc>>`ignore);

      // find the bank_index.
      Bit#(TLog#(TDiv#(`btbsize, 2))) btb_bank_index = truncateLSB(btb_full_index); 
      Bit#(TLog#(TDiv#(`rassets, 2))) ras_bank_index = truncateLSB(ras_full_index); 

      mem_btb0.read(btb_bank_index);
      mem_btb1.read(btb_bank_index);
    `ifdef ras
      mem_ras_tag0.read(ras_bank_index);
      mem_ras_tag1.read(ras_bank_index);
    `endif
      if(req.fence) begin
        rg_init <= True;
        `logLevel( gshare, 0, $format("GSHARE : Fence Recieved"))
      end
      else begin
        ff_pred_request.enq(req);
        `logLevel( gshare, 0, $format("GSHARE : Prediction request for PC:%h btb_bank_index:%d",
                                        req.pc, btb_bank_index 
                           `ifdef ras  ," ras_bank_index:%d", ras_bank_index `endif ))
      end
		endmethod

    // MethodName : prediction_resp
    // Explicit Conditions : None
    // Implicit Conditions : None
    // Description : This rule read the response from the rams, check if the next PC is either PC + 4
    // or redirected to a new target address. The redirect address is directly taken from the ram.
    // If there is not hit in the BTB the prediction value of 0 is sent indicating that the next PC
    // is PC + 4 which needs to happen outside this module
		interface prediction_response = toGet(ff_prediction_resp);

    // MethodName : training
    // Explicit Conditions : rg_init == False
    // Implicit Conditions : None 
    // Description : This method will update the BTB and BHT with the new training packet from the
    // execute stage. 
    // We first derive the full_index : the index assuming a non - banked array of `btbsize.
    // from the full index we then derive the index for each bank (bank_index) by ignoring the 
    // LSB of the full_index. The LSB bit is used to identify which bank will be used for training.
		method Action train_bpu (Training_data td)if(!rg_init);

      // first find the full index.
      Bit#(TLog#(`btbsize)) full_index = truncate(td.pc>>`ignore);
      Bit#(TLog#(`btbsize)) state_full_index = truncate(td.pc>>`ignore) ^
                                               truncate(rg_ghistory[1]>>rg_inflight_cntr[1]);
      Bit#(TLog#(TDiv#(`btbsize, 2))) state_bank_index = truncateLSB(state_full_index); 

      `logLevel( gshare, 0, $format("GSHARE: Fullindex:%d StateFull:%d StateBank:%d GBuf:%h Inflt:%d",
                                    full_index, state_full_index, state_bank_index,
                                    rg_ghistory[1] >> rg_inflight_cntr[1], rg_inflight_cntr[1]))
      // find the bank_index.
      Bit#(TLog#(TDiv#(`btbsize, 2))) bank_index = truncateLSB(full_index); 
      
      // find the tag to be stored.=vaddr - Log(btbsize) - ignorebits
      Bit#(TSub#(TSub#(`vaddr, TLog#(`btbsize)),`ignore)) tag = truncateLSB(td.pc);
      let update = BTBEntry{ target : td.target, tag : tag, valid : 1};
      let updatec = BTBEntryC{ target : td.target, tag : tag, valid : 1 
                              `ifdef compressed ,edgecase : td.edgecase `endif };

      if (truncate(full_index) == 1'b0)begin
        mem_btb0.write(1, bank_index, pack(update));
        arr_state0[state_bank_index] <= td.state;
        `logLevel( gshare, 0, $format("GSHARE : Training BTB0: ",fshow(td)))
        `logLevel( gshare, 0, $format("GSHARE : Training BTB0 : bank_index:%d tag:%h state:%b",
                                        bank_index, tag, td.state))
      end
      else begin
        mem_btb1.write(1, bank_index, pack(updatec));
        arr_state1[state_bank_index] <= td.state;
        `logLevel( gshare, 0, $format("GSHARE : Training BTB1: ",fshow(td)))
        `logLevel( gshare, 0, $format("GSHARE : Training BTB1 : bank_index:%d tag:%h state:%b", 
                                       bank_index, tag, td.state))
      end
      if(td.mispredict && rg_inflight_cntr[1] != 0)begin
        rg_inflight_cntr[1] <= 0;
        rg_ghistory[1] <= rg_ghistory[1] >> rg_inflight_cntr[1];
      end
      else if(rg_inflight_cntr[1] != 0)
        rg_inflight_cntr[1] <= rg_inflight_cntr[1] - 1;
		endmethod

    // MethodName : prediction_pc
    // Explicit Conditions : None
    // Implicit Conditions : None 
    // Description : This method sends the latest prediction to stage0 for generating next pc
    method predicted_pc = rg_prediction_pc[1];

  `ifdef ras
    // MethodName : train_ras
    // Explicit Conditions : rg_init == False
    // Implicit Conditions : None 
    // Description : This method will update the RAS tag and state entries to indicate a pop
    method Action train_ras(RASTraining td)if(!rg_init);
      $display("Training RAS");
      // first find the full index.
      Bit#(TLog#(`rassets)) full_index = truncate(td.pc>>`ignore);

      // find the bank_index.
      Bit#(TLog#(TDiv#(`rassets, 2))) bank_index = truncateLSB(full_index); 
      
      // find the tag to be stored.=vaddr - Log(rassets) - ignorebits
      Bit#(TSub#(TSub#(`vaddr, TLog#(`rassets)), `ignore)) tag = truncateLSB(td.pc);

      let update = RASEntry{valid: 1, tag: tag};
      let updatec = RASEntryC{valid: 1, tag: tag `ifdef compressed ,edgecase: td.edgecase `endif };

      if(truncate(full_index)==1'b0)begin
        mem_ras_tag0.write(1, bank_index, pack(update));
        `logLevel( gshare, 0, $format("GSHARE : Training RAS0 for ",fshow(td)))
        `logLevel( gshare, 0, $format("GSHARE : Training RAS0 : bank_index:%d tag:%h", 
                                        bank_index, tag))
      end
      else begin
        mem_ras_tag1.write(1, bank_index, pack(updatec));
        `logLevel( gshare, 0, $format("GSHARE : Training RAS1 for ",fshow(td)))
        `logLevel( gshare, 0, $format("GSHARE : Training RAS1 : bank_index:%d tag:%h", 
                                        bank_index, tag))
      end
    endmethod

    // MethodName : ras_push
    // Explicit Conditions : None
    // Implicit Conditions : None 
    // Description : This method will push a return address on the RAS stack
    method Action ras_push(Bit#(`vaddr) pc);
      `logLevel( gshare, 0, $format("GSHARE : Pushing to RAS:%h ",pc))
      ras_stack.push(pc);
    endmethod
  `endif
	endmodule
endpackage
