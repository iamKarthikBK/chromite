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
  import DReg::*;

  // -- local imports --//
  `include "common_params.bsv"
  `include "Logger.bsv"

  import mem_config::*; // for bram 1rw instances.
  import TxRx::*; // for interstage pipeline FIFOs.
  import common_types::*;
  // interface definition of the stage
  interface Ifc_stage0;

    // interface to send request to the i-cache or fabric
 	  interface Get#(ICore_request#( `vaddr, `iesize)) inst_request;

    // method to receive flush form stage3
    method Action update_eEpoch;

    // method to receive flush form stage5
    method Action update_wEpoch;

    // method to receive new pc value on any flush
    method Action flush(Bit#(`vaddr) newpc
              `ifdef icache , Bool fence `endif
              `ifdef supervisor , Bool sfence `endif );
  `ifdef branch_speculation
    method Action prediction_pc(Tuple2#(Bit#(2), Bit#(`vaddr)) pred);
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
    Reg#(Bool) rg_flush <- mkReg(False);

  `ifdef branch_speculation
    Wire#(Tuple2#(Bit#(2), Bit#(`vaddr))) wr_prediction <- mkDWire(tuple2(0,?));
  `endif

    // local variable to hold the next+4 pc value. Ensure only a single adder is used.
    let curr_epoch = {rg_eEpoch, rg_wEpoch};

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
    
    // InterfaceName: request_to_imem
    // Explicit Conditions: None
    // Implicit Conditions: ff_imem_req.notEmpty
    interface inst_request=interface Get
      method ActionValue#(ICore_request#(`vaddr, `iesize)) get;
        Bit#(`vaddr) fetch_pc = rg_pc;
        if(!rg_fence && !rg_sfence) begin
        `ifdef branch_speculation
          let {pred, target} = wr_prediction;
          if (pred>1 && !rg_flush)
            fetch_pc=target;
        `endif
          rg_pc<=fetch_pc+4;
          `logLevel( stage0, 1, $format("STAGE0: Prediction: ",fshow(wr_prediction), " Flush:%b",rg_flush))
        end
        else begin
          rg_fence<=False;
          rg_sfence<=False;
        end
        rg_flush<=False;
        `logLevel( stage0,0,$format("STAGE0: Sending PC:%h",fetch_pc))
        `ifdef icache
          `ifdef supervisor
            return (tuple4(fetch_pc, rg_fence, rg_sfence, curr_epoch));
          `else
            return (tuple3(fetch_pc, rg_fence, curr_epoch));
          `endif
        `else
          return (tuple2(fetch_pc, curr_epoch));
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
      rg_flush<=True;
    endmethod
  `ifdef branch_speculation
    method Action prediction_pc(Tuple2#(Bit#(2), Bit#(`vaddr)) pred);
      wr_prediction<=pred;
    endmethod
  `endif
  endmodule
endpackage

