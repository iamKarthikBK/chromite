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
  // -- package imports --//
  import FIFOF::*;
  import SpecialFIFOs::*;
  import FIFO::*;
  import GetPut::*;
  import Connectable::*;
  import Assert::*;

  // -- local imports --//
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

  // interface definition of the stage
  interface Ifc_stage0;

    // interface to send request to the i-cache or fabric
 	  interface Get#(ICore_request#( `vaddr, `iesize)) inst_request;

  `ifdef branch_speculation
    // interface to next stage holding pc and prediction info.
    interface TXe#(PIPE0) tx_to_stage1;
  `endif

    // method to receive flush form stage3
    method Action update_eEpoch;

    // method to receive flush form stage5
    method Action update_wEpoch;

    // method to receive new pc value on any flush
    method Action flush(Bit#(`vaddr) newpc
              `ifdef icache , Bool fence `endif
              `ifdef supervisor , Bool sfence `endif );
  `ifdef branch_speculation
    // method to update training bits of the predictor
		method Action training (Training_data#(`vaddr) td);
  `endif

     
  endinterface

  (*synthesize*)
  module mkstage0(Ifc_stage0);
    String stage0="";
    // register to maintaing the request pc to the imem/fabric
    Reg#(Bit#(`vaddr )) rg_pc <- mkReg(`resetpc );
    
    // register to maintain stage3 epoch
    Reg#(Bit#(1)) rg_eEpoch <- mkReg(0);
    
    // register to maintain stage5 epoch
    Reg#(Bit#(1)) rg_wEpoch <- mkReg(0);

    Reg#(Bool) rg_sfence <- mkReg(False);
    Reg#(Bool) rg_fence <- mkReg(False);

  `ifdef branch_speculation
    // FIFO to interface with the next stage
		TX#(PIPE0) tx_stage1<-mkTX;
  `endif

  `ifdef bpu
    // instantiate the bimodal branch predictor
    Ifc_bimodal bpu <- mkbimodal();
  `endif

  `ifdef ras
    Ifc_ras ras <- mkras();
  `endif
		
    // internal fifo to store the address for which prediction was requested in the ram structure in
    // the previous cycle.
    FIFOF#(Tuple2#(Bit#(2),Bit#(`vaddr))) ff_prediction_request <-mkLFIFOF();

    // local variable to hold the next+4 pc value. Ensure only a single adder is used.
    let pc4 = rg_pc+4;
    let curr_epoch = {rg_eEpoch, rg_wEpoch};

    // RuleName: prediction_response
    // Explicit Conditions: None
    // Implicit Conditions: ff_prediction_request.notEmpty, ff_imem_req.notFull, tx_stage1.notFull
    // Description: This rule read the response from the rams, check if the next PC is either PC+4
    // or redirected to a new target address. The redirect address is directly taken from the ram.
  `ifdef branch_speculation
    rule generate_next_pc;

      Bit#(`vaddr) next_pc;
      Bool drop = epoch!=curr_epoch;
      Bit#(2) prediction=0;

    `ifdef bpu
      let {btb_state,btb_target} <- bpu.prediction_resp;
    `endif

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

      rg_pc<=next_pc;
    endrule
  `endif

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
  `ifdef branch_speculation
    interface tx_to_stage1 = tx_stage1.e;
  `endif
    
    // MethodName: training
    // Explicit Conditions: None
    // Implicit Conditions: None 
    // Description: 
  `ifdef branch_speculation
		method Action training (Training_data#(`vaddr) td);
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
  `endif
    
    // InterfaceName: request_to_imem
    // Explicit Conditions: None
    // Implicit Conditions: ff_imem_req.notEmpty
    interface inst_request=interface Get
      method ActionValue#(ICore_request#(`vaddr, `iesize)) get;
      if(!rg_fence && !rg_sfence) begin
          rg_pc<=pc4;
      end
      else begin
        rg_fence<=False;
        rg_sfence<=False;
      end
      `logLevel( stage0,0,$format("STAGE0: Sending PC:%h",rg_pc))
      `ifdef icache
        `ifdef supervisor
          return (tuple4(rg_pc, rg_fence, rg_sfence, curr_epoch));
        `else
          return (tuple3(rg_pc, rg_fence, curr_epoch));
        `endif
      `else
        return (tuple2(rg_pc, curr_epoch));
      `endif
      endmethod
    endinterface;

    method Action flush(Bit#(`vaddr) newpc
              `ifdef icache , Bool fence `endif
              `ifdef supervisor , Bool sfence `endif );

      `logLevel( stage0,0, $format("STAGE0: Received Flush. NewPC:%h",newpc))
      rg_pc<={truncateLSB(newpc),2'b0};
    `ifdef icache
      rg_fence<=fence;
    `endif
    `ifdef supervisor
      rg_sfence<=sfence;
    `endif
    endmethod
  endmodule
endpackage

