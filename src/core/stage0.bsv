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
  import Assert::*;

  // Project imports
  import mem_config::*; // for bram 1rw instances.
  import TxRx::*; // for interstage pipeline FIFOs.
  import common_types::*;
`ifdef ras
  import ras::*;
`endif
`ifdef bpu
  import bimodal::*; // the bimodal branch predictor
`endif
  `include "common_params.bsv"
  `include "Logger.bsv"

  typedef struct{
    Bit#(`vaddr ) pc;
    Bit#(2) prediction;
    Bit#(2) epoch;
  } PIPE0 deriving(Bits,Eq,FShow);

  // interface definition of the stage
  interface Ifc_stage0;

    // interface to send request to the i-cache or fabric
 	  interface Get#(ICore_request#( `vaddr, `iesize)) request_to_imem;

    // interface to next stage holding pc and prediction info.
    interface TXe#(PIPE0) tx_to_stage1;

    // method to receive flush form stage3
    method Action update_eEpoch;

    // method to receive flush form stage5
    method Action update_wEpoch;

    // method to receive new pc value on any flush
    method Action flush(Bit#(`vaddr) newpc, Bool fence 
              `ifdef supervisor , Bool sfence `endif );

    // method to update training bits of the predictor
		method Action training (Training_data#(`vaddr) td);

     
  endinterface

  (*synthesize*)
  (*preempts="flush,prediction_response"*)
  (*preempts="flush,prediction_request"*)
  module mkstage0(Ifc_stage0);
    // register to maintaing the request pc to the imem/fabric
    Reg#(Bit#(`vaddr )) rg_pc[2] <- mkCReg(2, `resetpc );
    
    // register to maintain stage3 epoch
    Reg#(Bit#(1)) rg_eEpoch <- mkReg(0);
    
    // register to maintain stage5 epoch
    Reg#(Bit#(1)) rg_wEpoch <- mkReg(0);

    // FIFO to interface with the next stage
		TX#(PIPE0) tx_stage1<-mkTX;

  `ifdef bpu
    // instantiate the bimodal branch predictor
    Ifc_bimodal bpu <- mkbimodal();
  `endif

  `ifdef ras
    Ifc_ras ras <- mkras();
  `endif

    // boolean register and counter used to initialize the ram structure on reset.
    Reg#(Bool) rg_init <- mkReg(True);
		
    // internal fifo to store the address for which prediction was requested in the ram structure in
    // the previous cycle.
    FIFOF#(Tuple2#(Bit#(2),Bit#(`vaddr))) ff_prediction_request <-mkLFIFOF();

    // fifo to hold the request to the imem/ external fabric.
    FIFOF#(ICore_request#(`vaddr , `iesize)) ff_imem_req <- mkSizedFIFOF(2);

    // local variable to hold the next+4 pc value. Ensure only a single adder is used.
    let pc4 = rg_pc[0]+4;

    // RuleName: initialize
    // Explicit Conditions: rg_init==True
    // Implicit Conditions: ff_prediction_request.notFull, ff_imem_req.notFull, tx_stage1.notFull
    // on system reset first initialize the ram structure with valid=0.
    // Then simply send the reset pc value to the next stage predicted as not-taken (value of 0 in
    // case of bimodal). 
    // Simultaneously, initiate a prediction request for Reset_pc+4 and switch-off init mode.
    rule initialize(rg_init);
      // reset the states for BTB and RAS
    `ifdef bpu
      bpu.prediction_req(pc4);
    `endif
    `ifdef ras
      ras.prediction_req(pc4);
    `endif
      rg_init<=False;
      rg_pc[0]<=pc4;
      tx_stage1.u.enq(PIPE0{pc:rg_pc[0], 
                            prediction:0, 
                            epoch:{rg_eEpoch, rg_wEpoch}});
      ff_prediction_request.enq(tuple2({rg_eEpoch,rg_wEpoch},pc4));
      `ifdef icache
        `ifdef supervisor
          ff_imem_req.enq(tuple4(rg_pc[0],False, False, {rg_eEpoch,rg_wEpoch}));
        `else
          ff_imem_req.enq(tuple3(rg_pc[0], False,{rg_eEpoch,rg_wEpoch}));
        `endif
      `else
        ff_imem_req.enq(tuple2(rg_pc[0],{rg_eEpoch,rg_wEpoch}));
      `endif
    endrule

    // RuleName: prediction_request
    // Explicit Conditions: rg_init==False
    // Implicit Conditions: ff_prediction_request.notFull
    // Description: This rule will latch the index of the PC to be predicted.
    rule prediction_request(!rg_init);
    `ifdef bpu
      bpu.prediction_req(rg_pc[1]);
    `endif
    `ifdef ras
      ras.prediction_req(rg_pc[1]);
    `endif
      ff_prediction_request.enq(tuple2({rg_eEpoch,rg_wEpoch},rg_pc[1]));
      `logLevel( 1, $format("STAGE0: Sending Request for PC:%h", rg_pc[1]))
    endrule

    // RuleName: prediction_response
    // Explicit Conditions: rg_init==False
    // Implicit Conditions: ff_prediction_request.notEmpty, ff_imem_req.notFull, tx_stage1.notFull
    // Description: This rule read the response from the rams, check if the next PC is either PC+4
    // or redirected to a new target address. The redirect address is directly taken from the ram.
    rule prediction_response(!rg_init);

      let {epoch, va} = ff_prediction_request.first();
    `ifdef bpu
      let {btb_state,btb_target} <- bpu.prediction_resp;
    `endif
      ff_prediction_request.deq();
      Bit#(`vaddr) next_pc;
      Bool drop = epoch!={rg_eEpoch,rg_wEpoch};
      Bit#(2) prediction=0;
    `ifdef ras
      let {ras_state,ras_target} <- ras.prediction_resp;
    `endif
      // Hit in BTB
    `ifdef bpu
      if(btb_state>1)begin
        next_pc=btb_target;
        prediction=btb_state;
      end
      else
    `endif
    `ifdef ras
      // Is this PC a return instruction. If so then pop from the Stack
      if(ras_state==3) begin 
        next_pc=ras_target;
        prediction=ras_state;
      end
      else 
    `endif
        next_pc=pc4;
      if(!drop)begin
        rg_pc[0]<=next_pc;
      `ifdef icache
        `ifdef supervisor
          ff_imem_req.enq(tuple4(va,False, False, epoch));
        `else
          ff_imem_req.enq(tuple3(va, False,epoch));
        `endif
      `else
        ff_imem_req.enq(tuple2(va,epoch));
      `endif
        tx_stage1.u.enq(PIPE0{pc:va, 
                            prediction:prediction, 
                            epoch:epoch});
        `logLevel( 1, $format("STAGE0: Prediction Received for PC:%h State:%b NPC:%h", va,prediction,next_pc))
      end
      else
        `logLevel( 1, $format("STAGE0: Dropping Request since Epochs do not match. VA:%h", va))
    endrule

    // MethodName: update_eEpoch
    // Explicit Conditions: None
    // Implicit Conditions: None 
    method Action update_eEpoch;
      rg_eEpoch<=~rg_eEpoch;
    endmethod

    // MethodName: update_wEpoch
    // Explicit Conditions: None
    // Implicit Conditions: None 
    method Action update_wEpoch;
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
    `ifdef ras
      if(!td.ras)begin // update the BHT 
    `endif
    `ifdef bpu
        bpu.training(td);
    `endif
    `ifdef ras
      end
      else begin // update the RAS table
        ras.training(td);
      end
    `endif
    endmethod
    
    // InterfaceName: request_to_imem
    // Explicit Conditions: None
    // Implicit Conditions: ff_imem_req.notEmpty
    interface request_to_imem=toGet(ff_imem_req);

      method Action flush(Bit#(`vaddr) newpc, Bool fence 
              `ifdef supervisor , Bool sfence `endif )if(!rg_init);

      `logLevel( 1, $format("STAGE0: Received Flush. NewPC:%h",newpc))
      rg_pc[1]<=newpc;
      `ifdef icache
        if (fence `ifdef supervisor || sfence `endif )
        `ifdef supervisor
          ff_imem_req.enq(tuple4(?, fence, sfence, ?));
        `else
          ff_imem_req.enq(tuple3(?, fence, ?));
        `endif
      `endif
    endmethod
  endmodule

  (*synthesize*)
  module mkTb(Empty);
    Ifc_stage0 stage0 <- mkstage0;
    Reg#(Bit#(32)) rg_counter <- mkReg(0);
    FIFOF#(PIPE0) ff <- mkSizedFIFOF(2);
    RX#(PIPE0) rx <-mkRX;
    mkConnection(ff,stage0.tx_to_stage1);
    mkConnection(ff,rx.e);
    rule newline;
      $display("");
    endrule
    rule dummy_imem;
      let x<- stage0.request_to_imem.get;
      `logLevel( 0,$format("TB: Imem request: ",fshow(x)))
    endrule
    rule dummy_stage1;
      let x=rx.u.first;
      rx.u.deq;
      `logLevel( 0,$format("TB: Stage1 Input: ",fshow(x)))
    endrule
    rule train(rg_counter==258);
      let training=Training_data{pc:64'h1010,branch_address:64'h2000,state:3 
          `ifdef ras ,ras:False `endif } ;
      stage0.training(training);
      `logLevel( 0,$format("TB: Training: ",fshow(training)))
    endrule
    rule train2(rg_counter==259);
      let training=Training_data{pc:64'h2010,branch_address:64'h1000,state:2
        `ifdef ras ,ras:True `endif };
      stage0.training(training);
      `logLevel( 0,$format("TB: Training: ",fshow(training)))
    endrule
    rule flush_btb(rg_counter==278);
      stage0.flush('hff0, False, True);
    endrule

    rule update_epoch(rg_counter==278);
      stage0.update_eEpoch();
    endrule
    rule end_sim;
      if(rg_counter==300)
        $finish(0);
      else
        rg_counter<=rg_counter+1;
    endrule

  endmodule
endpackage

