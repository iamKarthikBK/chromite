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
  import globals::*; // for external interface
  import mem_config::*; // for bram 1rw instances.
  import TxRx::*; // for interstage pipeline FIFOs.
  import common_types::*;


  // interface definition of the stage
  interface Ifc_stage0;

    // interface to send request to the i-cache or fabric
 	  method ActionValue#(FetchRequest#(`vaddr, `iesize)) inst_request;

    // method to receive flush form stage3
    method Action update_eEpoch;

    // method to receive flush form stage5
    method Action update_wEpoch;

    // method to receive new pc value on any flush
    method Action flush( Stage0Flush f);

  `ifdef branch_speculation
    // method to receive the latest prediction done by BPU
    method Action predicted_pc(PredictionToStage0 pred);
  `endif
  endinterface

  (*synthesize*)
  module mkstage0(Ifc_stage0);
    String stage0="";     // for Logger only

    // register to maintaing the request pc to the imem/fabric
    Reg#(Bit#(`vaddr )) rg_pc <- mkReg(`resetpc );
    
    // register to maintain stage3 epoch
    Reg#(Bit#(1)) rg_eEpoch <- mkReg(0);
    
    // register to maintain stage5 epoch
    Reg#(Bit#(1)) rg_wEpoch <- mkReg(0);

    Reg#(Bool) rg_sfence <- mkReg(False);
    Reg#(Bool) rg_fence  <- mkReg(False);
    Reg#(Bool) rg_flush  <- mkReg(False);

`ifdef branch_speculation
    Wire#(PredictionToStage0) wr_prediction <- mkWire();
  `ifdef compressed
    Reg#(Tuple2#(Bool, Bit#(`vaddr))) rg_delayed_redirect <- mkReg(tuple2(False,?));
  `endif
`endif

    // local variable to hold the next+4 pc value. Ensure only a single adder is used.
    let curr_epoch = {rg_eEpoch, rg_wEpoch};

    // MethodName: update_eEpoch
    // Explicit Conditions: None
    // Implicit Conditions: None 
    method Action update_eEpoch;
      rg_eEpoch <= ~rg_eEpoch;
    endmethod

    // MethodName: update_wEpoch
    // Explicit Conditions: None
    // Implicit Conditions: None 
    method Action update_wEpoch;
      rg_wEpoch <= ~rg_wEpoch;
    endmethod
    
    // InterfaceName: request_to_imem
    // Explicit Conditions: None
    // Implicit Conditions: Can fire only when wire wr_prediction is written
    // Conflicts: This method will not fire when method flush is fired.
 	  method ActionValue#(FetchRequest#(`vaddr, `iesize)) inst_request;

      Bit#(`vaddr) fetch_pc = rg_pc;
      Bool discard=False;

      if(!rg_fence && !rg_sfence) begin

    `ifdef branch_speculation
        let pred = wr_prediction;
      `ifdef compressed
        if(tpl_1(rg_delayed_redirect))begin
          fetch_pc = tpl_2(rg_delayed_redirect);
          rg_delayed_redirect<=tuple2(False,?);
          `logLevel( stage0, 0, $format("STAGE0: Sending Delayed Redirect"))
        end
        else if(pred.edgecase && pred.epochs == curr_epoch && pred.prediction > 1) begin
          rg_delayed_redirect<=tuple2(True, pred.target_pc);
          `logLevel( stage0, 0, $format("STAGE0: Edge Case received."))
        end
        else 
      `endif
        if ( pred.prediction > 1 && !rg_flush && pred.epochs == curr_epoch) begin
          fetch_pc=pred.target_pc;
          `logLevel( stage0, 0, $format("STAGE0: Redirection from BPU"))
        end

        discard = (fetch_pc[1] == 1);
    `endif
        fetch_pc[1] = 0;

        rg_pc<=fetch_pc+4;
      end
      else begin
        rg_fence <= False;
        rg_sfence <= False;
      end

      rg_flush <= False;

      `logLevel( stage0, 1, $format("STAGE0: Prediction from BPU: ",fshow(wr_prediction), " Flush:%b",rg_flush))
      `logLevel( stage0,0,$format("STAGE0: Sending PC:%h discard:%b rg_pc:%h fence:%b sfence:%b \
epoch:%d", fetch_pc, discard, rg_pc, rg_fence, rg_sfence, curr_epoch))

      return FetchRequest{ icache_req: ICache_request{ address : fetch_pc,
                                                       epochs  : curr_epoch
                                                      `ifdef supervisor
                                                        ,sfence :  rg_sfence
                                                      `endif
                                                      `ifdef icache
                                                       ,fence  :   rg_fence
                                                      `endif }
                          `ifdef branch_speculation
                            ,discard : discard
                          `endif
                          };
    endmethod

    // MethodName: flush
    // Implicit Conditions: None
    // Explicit Conditions: None
    // Description: This method receives the flush for redirection of PC from EXE or WB stage.
    method Action flush( Stage0Flush f);
      rg_pc<=f.pc;
    `ifdef icache
      rg_fence<=f.fence;
    `endif
    `ifdef supervisor
      rg_sfence<=f.sfence;
    `endif
      rg_flush<=True;
  `ifdef branch_speculation
    `ifdef compressed
      rg_delayed_redirect<=tuple2(False,?);
    `endif
  `endif
      `logLevel( stage0,0, $format("STAGE0: Received Flush: ",fshow(f)))
    endmethod

  `ifdef branch_speculation
    // MethodName: predicted_pc
    // Implicit Conditions: None
    // Explicit Conditions: None
    // Description: Collect the prediction from the BPU
    method Action predicted_pc(PredictionToStage0 pred);
      wr_prediction<=pred;
    endmethod
  `endif
  endmodule
endpackage

