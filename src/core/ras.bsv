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
package ras;
  import Vector::*;
  import FIFOF::*;
  import DReg::*;
  import SpecialFIFOs::*;
  import BRAMCore::*;
  import FIFO::*;
	import ConfigReg::*;
  
  /*==== Project imports ======= */
  import mem_config::*; // for bram 1rw instances.
  `include "Logger.bsv"
  import common_types::*;
  import stack::*;

  interface Ifc_ras;
    // method to receive the new pc for which prediction is to be looked up.
		method Action prediction_req(Bit#(`vaddr) pc);

    // method to respond to stage0 with prediction state and new target address on hit
		method ActionValue#(Tuple2#(Bit#(2), Bit#(`vaddr ))) prediction_resp;

    // method to training the BTB and BHT tables
		method Action training (Training_data#(`vaddr) td);

  endinterface

  (*synthesize*)
  module mkras(Ifc_ras);
    String ras="";
    
    // ram to hold the tag bits for return instructions
    Ifc_mem_config1r1w#(`rassets, TSub#(TSub#(`vaddr, TLog#(`rassets )), 2),1) mem_ras_tag
                                                              <- mkmem_config1r1w(False,"double");
    // ram to hold the state of the ras entries.
    Ifc_mem_config1r1w#(`rassets, 1, 1) mem_ras_state <- mkmem_config1r1w(False,"double");

    // stack structure to hold the return addresses
    Ifc_stack#(`vaddr, `rassize) ras_stack <- mkstack;
    
    // boolean register and counter used to initialize the ram structure on reset.
    Reg#(Bool) rg_init <- mkReg(True);
    Reg#(Bit#(TAdd#(1,TLog#(`rassets)))) rg_init_count <- mkReg(0);
    Reg#(Bit#(`vaddr)) rg_req_packet <- mkConfigReg(0);
    
    // RuleName: initialize
    // Explicit Conditions: rg_init==True
    // Implicit Conditions: None
    // on system reset first initialize the ram structure with valid=0.
    rule initialize(rg_init);
      mem_ras_state.write(1, truncate(rg_init_count),0);
      if(rg_init_count==fromInteger(`rassets)) begin
				rg_init<=False;
			end
      `logLevel( ras,$format("RAS: Init stage. Count:%d",rg_init_count))
      rg_init_count<=rg_init_count+1;
		endrule
    
    // MethodName: prediction_req
    // Explicit Conditions: rg_init==False
    // Implicit Conditions: None
    // Description: This rule will latch the index of the PC to be predicted.
		method Action prediction_req(Bit#(`vaddr) pc)if(!rg_init);
      Bit#(TLog#(`rassets)) index = truncate(pc>>2);
      `logLevel( ras,$format("RAS: Prediction request for PC:%h",pc))
      mem_ras_state.read(index);
      mem_ras_tag.read(index);
      rg_req_packet<=pc;
		endmethod
    
    // MethodName: prediction_resp
    // Explicit Conditions: rg_init==False
    // Implicit Conditions: None
    // Description: This rule read the response from the rams, check if the next PC is either PC+4
    // or redirected to a new target address. The redirect address is directly taken from the ram.
    // If there is not hit in the BTB the prediction value of 0 is sent indicating that the next PC
    // is PC+4 which needs to happen outside this module
		method ActionValue#(Tuple2#(Bit#(2), Bit#(`vaddr ))) prediction_resp if(!rg_init);
      let ras_tag = mem_ras_tag.read_response;
      let ras_state = mem_ras_state.read_response;
      let va =rg_req_packet;
      Bit#(`vaddr) next_pc=ras_stack.top;
      Bit#(2) prediction=0;
      Bit#(TSub#(TSub#(`vaddr , TLog#(`rassets)),2)) tag1 = truncateLSB(va);
      if (tag1 == ras_tag && ras_state==1 && !ras_stack.empty) begin
        prediction=3;
        ras_stack.pop;
      end
      `logLevel( ras, $format("RAS: Response bhttag:%h tag:%h target:%h",ras_tag, tag1, ras_stack.top))
      return (tuple2(prediction,next_pc));
		endmethod
    
    // MethodName: training
    // Explicit Conditions: rg_init==False
    // Implicit Conditions: None 
    // Description: This method will update the BTB and BHT with the new training packet from the
    // execute stage
		method Action training (Training_data#(`vaddr) td)if(!rg_init);
        Bit#(TLog#(`rassets )) index = truncate(td.pc>>2);
        Bit#(TSub#(TSub#(`vaddr , TLog#(`rassets)),2)) tag = truncateLSB(td.pc);
        ras_stack.push(td.branch_address);
        mem_ras_tag.write(1, index, tag);
        mem_ras_state.write(1, index, 1'b1);
        `logLevel( ras, $format("RAS: Training for ",fshow(td)))
		endmethod
  endmodule
endpackage

