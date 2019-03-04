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
package stage0;
  // BSV library imports
  import FIFOF::*;
  import SpecialFIFOs::*;
  import FIFO::*;
  import GetPut::*;
  import Connectable::*;

  // Project imports
  import mem_config::*; // for bram 1rw instances.
  import TxRx::*; // for interstage pipeline FIFOs.
  import common_types::*;
  import stack ::*; // for maintaining the RAS stack
  `include "common_params.bsv"
  `include "Logger.bsv"

  typedef struct{
    Bit#(`vaddr ) pc;
    Bit#(2) prediction;
    Bit#(3) epoch;
  } PIPE0 deriving(Bits,Eq,FShow);

  // interface definition of the stage
  interface Ifc_stage0;

    // interface to send request to the i-cache or fabric
 	  interface Get#(ICore_request#( `vaddr, 3)) request_to_imem;

    // interface to next stage holding pc and prediction info.
    interface TXe#(PIPE0) tx_to_stage1;

    // method to receive flush from stage1
    method Action update_iEpoch;

    // method to receive flush form stage3
    method Action udpate_eEpoch;

    // method to receive flush form stage5
    method Action udpate_wEpoch;

    // method to receive new pc value on any flush
    method Action flush (Bit#(`vaddr ) newpc);

    // method to update training bits of the predictor
		method Action training (Training_data#(`vaddr) td);

     
  endinterface

  (*synthesize*)
  module mkstage0(Ifc_stage0);
    // register to maintaing the request pc to the imem/fabric
    Reg#(Bit#(`vaddr )) rg_pc <- mkReg(`resetpc );

    // register to maintain stage0 epoch
    Reg#(Bit#(1)) rg_iEpoch <- mkReg(0);
    
    // register to maintain stage3 epoch
    Reg#(Bit#(1)) rg_eEpoch <- mkReg(0);
    
    // register to maintain stage5 epoch
    Reg#(Bit#(1)) rg_wEpoch <- mkReg(0);

    // FIFO to interface with the next stage
		TX#(PIPE0) tx_stage1<-mkTX;

    // ram to hold the target address. // TODO need to store only offset?
    Ifc_mem_config1r1w#(`btbsize , `vaddr, 1) mem_btb <- mkmem_config1r1w(False,"double");

    // ram to hold the tag of the address being predicted. The 2 bits are deducted since we are
    // supporting only non-compressed ISA. When compressed is supported, 1 will be dedudcted.
    Ifc_mem_config1r1w#(`btbsize , TSub#(TSub#(`vaddr, TLog#(`btbsize)),2), 1) mem_btb_tag 
                                                              <- mkmem_config1r1w(False,"double");

    // ram to hold the state of the history table.
    Ifc_mem_config1r1w#(`btbsize, 3, 1) mem_bht_state <- mkmem_config1r1w(False,"double");
  `ifdef bpu_ras
    // ram to hold the tag bits for return instructions
    Ifc_mem_config1r1w#(`rassets, TSub#(TSub#(`vaddr, TLog#(`rassets )), 2),1) mem_ras_tag
                                                              <- mkmem_config1r1w(False,"double");
    // ram to hold the state of the ras entries.
    Ifc_mem_config1r1w#(`rassets, 2, 1) mem_ras_state <- mkmem_config1r1w(False,"double");

    // stack structure to hold the return addresses
    Ifc_stack#(`vaddr, `rassize) ras_stack <- mkstack;
  `endif

    // boolean register and counter used to initialize the ram structure on reset.
    Reg#(Bool) rg_init <- mkReg(True);
    Reg#(Bit#(TAdd#(1,TLog#(`btbsize)))) rg_init_count <- mkReg(0);
		
    // internal fifo to store the address for which prediction was requested in the ram structure in
    // the previous cycle.
    FIFOF#(Tuple2#(Bit#(3),Bit#(`vaddr))) ff_prediction_request <-mkLFIFOF();

    // fifo to hold the request to the imem/ external fabric.
    FIFOF#(ICore_request#(`vaddr , 3)) ff_imem_req <- mkSizedFIFOF(2);

    // local variable to hold the next+4 pc value. Ensure only a single adder is used.
    let pc4 = rg_pc+4;

    // RuleName: 
    // Explicit Conditions: rg_init==True
    // Implicit Conditions: ff_prediction_request.notFull, ff_imem_req.notFull, tx_stage1.notFull
    // on system reset first initialize the ram structure with valid=0.
    // Then simply send the reset pc value to the next stage predicted as not-taken (value of 0 in
    // case of bimodal). 
    // Simultaneously, initiate a prediction request for Reset_pc+4 and switch-off init mode.
    rule initialize(rg_init);
      mem_bht_state.write(1, truncate(rg_init_count),0);

      if(rg_init_count==fromInteger(`btbsize)) begin

        Bit#(TLog#(`btbsize )) index = truncate(pc4>>2);
        rg_init<=False;
        mem_btb.read(index);
        mem_btb_tag.read(index);
        mem_bht_state.read(index);
        rg_pc<=pc4;
        tx_stage1.u.enq(PIPE0{pc:rg_pc, prediction:0, epoch:{rg_iEpoch,rg_eEpoch, rg_wEpoch}});
        ff_prediction_request.enq(tuple2({rg_iEpoch,rg_eEpoch,rg_wEpoch},pc4));
      `ifdef icache
        `ifdef supervisor
          ff_imem_req.enq(tuple4(rg_pc,False, False, {rg_iEpoch,rg_eEpoch,rg_wEpoch}));
        `else
          ff_imem_req.enq(tuple3(rg_pc, False,{rg_iEpoch,rg_eEpoch,rg_wEpoch}));
        `endif
      `else
        ff_imem_req.enq(tuple2(rg_pc,{rg_iEpoch,rg_eEpoch,rg_wEpoch}));
      `endif
      `logLevel( 1, $format("STAGE0: Init stage. Reset PC:%h NPC:%h", rg_pc,pc4))
      end
      else
      `logLevel( 1, $format("STAGE0: Initializing Index: %d.", rg_init_count))
      rg_init_count<=rg_init_count+1;
    endrule

    // RuleName: prediction_request
    // Explicit Conditions: rg_init==False
    // Implicit Conditions: ff_prediction_request.notFull
    // Description: This rule will latch the index of the PC to be predicted.
    rule prediction_request(!rg_init);
      Bit#(TLog#(`btbsize)) index = truncate(rg_pc>>2);
      mem_btb.read(index);
      mem_btb_tag.read(index);
      mem_bht_state.read(index);
      ff_prediction_request.enq(tuple2({rg_iEpoch,rg_eEpoch,rg_wEpoch},rg_pc));
      `logLevel( 1, $format("STAGE0: Sending Prediction Req for PC:%h index:%d", rg_pc, index))
    endrule

    // RuleName: prediction_response
    // Explicit Conditions: rg_init==False
    // Implicit Conditions: ff_prediction_request.notEmpty, ff_imem_req.notFull, tx_stage1.notFull
    // Description: This rule read the response from the rams, check if the next PC is either PC+4
    // or redirected to a new target address. The redirect address is directly taken from the ram.
    // TODO: if we store only the offset then we need to increment the pc by the value stored in
    // mem_btb
    rule prediction_response(!rg_init);
      let target_addr = mem_btb.read_response;
      let bht_tag = mem_btb_tag.read_response;
      let state = mem_bht_state.read_response;
      let {epoch, va} = ff_prediction_request.first();
      Bit#(TSub#(TSub#(`vaddr , TLog#(`btbsize)),2)) tag = truncateLSB(va);
      ff_prediction_request.deq();
      Bit#(`vaddr) next_pc;
      Bit#(2) prediction;
      // tags match and btb entry is valid
      if (tag == bht_tag && state[2]==1) begin
        prediction=state[1:0];
        if(state[1:0]>1)
          next_pc=target_addr;
        else
          next_pc=pc4;
      end
      else begin
        next_pc=pc4;
        prediction=0;
      end
      rg_pc<=next_pc;
    `ifdef icache
      `ifdef supervisor
        ff_imem_req.enq(tuple4(va,False, False, epoch));
      `else
        ff_imem_req.enq(tuple3(va, False,epoch));
      `endif
    `else
      ff_imem_req.enq(tuple2(va,epoch));
    `endif
      tx_stage1.u.enq(PIPE0{pc:va, prediction:prediction, epoch:epoch});
      `logLevel( 1, $format("STAGE0: Prediction bhttag:%h tag:%h state:%b",bht_tag, tag, state))
      `logLevel( 1, $format("STAGE0: Prediction for PC:%h State:%b NPC:%h", va,prediction,next_pc))
    endrule

    // MethodName: update_iEpoch
    // Explicit Conditions: None
    // Implicit Conditions: None 
    method Action update_iEpoch;
      rg_iEpoch<=~rg_iEpoch;
    endmethod

    // MethodName: update_eEpoch
    // Explicit Conditions: None
    // Implicit Conditions: None 
    method Action udpate_eEpoch;
      rg_eEpoch<=~rg_eEpoch;
    endmethod

    // MethodName: update_wEpoch
    // Explicit Conditions: None
    // Implicit Conditions: None 
    method Action udpate_wEpoch;
      rg_wEpoch<=~rg_wEpoch;
    endmethod

    // InterfaceName: tx_to_stage1
    // Explicit Conditions: None
    // Implicit Conditions: tx_stage1.notEmpty 
    interface tx_to_stage1 = tx_stage1.e;
    
    // MethodName: training
    // Explicit Conditions: rg_init==False
    // Implicit Conditions: None 
    // Description: 
		method Action training (Training_data#(`vaddr) td)if(!rg_init);
    `ifdef bpu_ras
      if(!td.ras)begin // update the BHT 
    `endif
        Bit#(TLog#(`btbsize )) index = truncate(td.pc>>2);
        Bit#(TSub#(TSub#(`vaddr , TLog#(`btbsize)),2)) tag = truncateLSB(td.pc);
        mem_btb.write(1, index,td.branch_address);
        mem_btb_tag.write(1, index, tag);
        mem_bht_state.write(1, index, {1'b1,td.state});
        `logLevel( 1, $format("STAGE0: Training: index:%d tag:%h state:%b", index,tag,td.state))
    `ifdef bpu_ras
      end
      else begin // update the RAS table
        Bit#(TLog#(`rassets )) index = truncate(td.pc>>2);
        Bit#(TSub#(TSub#(`vaddr , TLog#(`rassets)),2)) tag = truncateLSB(td.pc);
        mem_ras_tag.write(1,index,tag);
        mem_ras_state.write(1,index,2'b11);
        ras_stack.push(td.branch_address);
      end
    `endif
    endmethod
    
    // InterfaceName: request_to_imem
    // Explicit Conditions: None
    // Implicit Conditions: ff_imem_req.notEmpty
    interface request_to_imem=toGet(ff_imem_req);
  endmodule

  (*synthesize*)
  module mkTb(Empty);
    Ifc_stage0 stage0 <- mkstage0;
    Reg#(Bit#(32)) rg_counter <- mkReg(0);
    FIFOF#(PIPE0) ff <- mkFIFOF();
    RX#(PIPE0) rx <-mkRX;
    mkConnection(ff,stage0.tx_to_stage1);
    mkConnection(ff,rx.e);
    rule dummy_imem;
      let x<- stage0.request_to_imem.get;
      `logLevel( 0,$format("TB: Imem request: ",fshow(x)))
    endrule
    rule dummy_stage1;
      let x=rx.u.first;
      rx.u.deq;
      `logLevel( 0,$format("TB: Stage1 Input: ",fshow(x)))
    endrule
    rule end_sim;
      if(rg_counter==270)
        $finish(0);
      else
        rg_counter<=rg_counter+1;
    endrule

    rule train(rg_counter==257);
      let training=Training_data{pc:64'h1010,branch_address:64'h2000,state:3,ras:False};
      stage0.training(training);
      `logLevel( 0,$format("TB: Training: ",fshow(training)))
    endrule
  endmodule
endpackage

