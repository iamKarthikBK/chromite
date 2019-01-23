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

Author: Neel Gala, Vipul, Deepa
Email id: neelgala@gmail.com
Details:
This module will interact with the memory subsystem to fetch relevant instructions from memory. The
module will also receive flushes from the write-back stage which could be because of a fence or trap
handling. 
TODO: Add support to interact with Branch predictor.
TODO: Currently the cache responds only with bus-error. In case of supervisor mode the cache is
expected to respond if a page-fault occurred for the said request and thus the error response will
be 2 bits wide instead of the current 1-bit.
--------------------------------------------------------------------------------------------------
*/
package stage1;
  // -- package imports --//
  import FIFOF::*;
  import SpecialFIFOs::*;
  import FIFO::*;
  import GetPut::*;

  // -- local imports --//
	import TxRx	::*;
  import common_types::*;
  `include "common_params.bsv"
  
  // Enum to define the action to be taken when an instruction arrives.
  typedef enum {CheckPrev, None} ActionType deriving(Bits,Eq,FShow);

	interface Ifc_stage1;
    //instruction request to the memory subsytem or the memory bus.
    //                         addr, fence, epoch, prefetch 
  	interface Get#(Tuple4#(Bit#(VADDR),Bool,Bit#(3),Bool)) inst_request;

    // instruction response from the memory subsytem or the memory bus
    //                     inst , error , epoch 
    interface Put#(Tuple4#(Bit#(32),Bool,Bit#(6),Bit#(3))) inst_response;

    // instruction along with other results to be sent to the next stage
    interface TXe#(PIPE1_min) tx_min;
  `ifdef bpu
    interface TXe#(PIPE1_opt1) tx_opt1;
  `endif
  `ifdef supervisor
    interface TXe#(PIPE1_opt2) tx_opt2;
  `endif

    // flush from the write-back or exe stage.
    method Action flush(Bit#(VADDR) newpc, Bool fence); //fence integration
		method Action update_eEpoch;
		method Action update_wEpoch;

    // csrs from the csrfile.
    method Action csrs (CSRtoDecode csr);

	endinterface

  (*synthesize*)
  module mkstage1(Ifc_stage1);

    let verbosity = `VERBOSITY ;
    
    // this wire carries the current values of certain csrs.
    Wire#(CSRtoDecode) wr_csr <-mkWire();
    // This register holds the request address to be sent to the cache.
    Reg#(Bit#(VADDR)) rg_icache_request <- mkReg('h1000);
    // This register holds the PC value that needs to be sent to the next stage in the pipe.
    Reg#(Bit#(VADDR)) rg_pc <- mkReg('h1000);
    // This register indicates if a fence of the i-cache was requested and is set during a flush
    // from the write back stage. Once the fence request is sent this is register is de-asserted.
    Reg#(Bool) rg_fence <-mkReg(False);

    // The following registers are use to the maintain epochs from various pipeline stages:
    // writeback, execute stage and fetch stage.
    Reg#(Bit#(1)) rg_wEpoch <- mkReg(0);
    Reg#(Bit#(1)) rg_eEpoch <- mkReg(0);
    Reg#(Bit#(1)) rg_iEpoch <- mkReg(0);

    // This register implements a simple state-machine which indicates how the instruction should be
    // extracted from the cache response.
    Reg#(ActionType) rg_action <- mkReg(None);

    // This register indicates that the lower 16-bits of the response from the cache need to be
    // ignored. This happens because, when there is jump to non-4-byte aligned address the cache
    // still receives a previous 4-byte-ailgned address from the fetch stage.
    Reg#(Bool) rg_discard_lower <- mkReg(False);

    // This register holds the 16-bits of instruction from the previous cache response if required.
    Reg#(Bit#(16)) rg_instruction <- mkReg(0);

    // This FIFO receives the response from the memory subsytem (a.k.a cache)
    FIFOF#(Tuple4#(Bit#(32),Bool,Bit#(6),Bit#(3))) ff_memory_response<-mkSizedFIFOF(2);

    // FIFO to interface with the next pipeline stage
		TX#(PIPE1_min) txmin<-mkTX;
    `ifdef bpu
  		TX#(PIPE1_opt1) txopt1<-mkTX;
    `endif
    `ifdef supervisor
  		TX#(PIPE1_opt2) txopt2<-mkTX;
    `endif
    
    // RuleName: process_instruction
    // Explicit Conditions: None
    // Implicit Conditions: 
    //    1. ff_memory_response.notEmpty
    //    2. wr_csr is written in the same cycle
    //    3. tostage FIFO notFull
    // Schedule Conflicts: This rule will not fire if there is flush from the write-back stage. A
    // flush from the write-back stage will cause a change in the rg_pc and rg_discard_lower,
    // both of which are being updated in this method as well. This schedule is acceptable since
    // anyways the response from the memory currently to be handled in this rule will match epochs
    // and will be dropped.
    //
    // Details: This rule will receive the instruction from the memory subsystem and decide if the
    // instruction is compressed or not. The final instruction is then sent to the next stage.
    // To extract the instruction from the memory response a state machine is implemented.
    // 
    // 1. First the epochs are compared and if a mis-match is observed then the response is dropped
    // without any other changes to the state of the module.
    // 2. if rg_discard_lower is set and compressed is enabled then the lower 16-bits of the
    // resposne are discarded and the upper 16-bits are probed to check if it is a compressed
    // instruction. If so, then the instruction is sent to the next stage. However is it is not a
    // compressed instruction it means the upper 16-bits of the response refer to the lower 16-bits
    // of a 32-bit instruction and thus we will have to wait for the next response from the cache to
    // form the instruction is send to the next stage. To ensure the concatenation happens in the
    // next response we set rg_action to ChecPrev and set enque_instruction to False.
    // 3. if rg_action is set to None, then we simply probe the lower 2-bits to the response to
    // check if it is compressed. If so then the lower 16 bits form an instruction which is sent to
    // the next stage, the upper 16-bits are stored to rg_instruction and rg_action is set to
    // CheckPrev to ensure that in the next resposne we first probe rg_instruction.
    // 4. if rg_Action if set to CheckPrev then we first probe the lower 2-bits of the 
    // rg_instruction which leads to two possibilities. Either rg_instruction could hold a
    // compressed instruction from the previous response, in which case the current memory response
    // is not dequed and rg_instruction is sent to the next stage. This can happen due to state-3
    // mentioned above. The other possibility is that rg_instruction holds the lower 16-bits of a
    // 32-bit isntruction, in which case we have concatenate the lower 16-bits of the response with
    // rg_instruction and send to the next, and also store the upper 16-bits of the response into
    // rg_instruction. rg_Action in this case will remain CheckPrev so that the upper bits of this
    // repsonse are probed in the next cycle.
    rule process_instruction;
        let {prv, mip, csr_mie, mideleg, misa, counteren, mie, fs_frm}=wr_csr;
        let {cache_response,err,cause,epoch}=ff_memory_response.first;
        Bit#(32) final_instruction=0;
        Bool compressed=False;
        Bool enque_instruction=True;
        // if epochs do not match then drop the instruction
        if({rg_iEpoch,rg_eEpoch,rg_wEpoch}!=epoch)begin
          ff_memory_response.deq;
          rg_action<=None;
          enque_instruction=False;
          if(verbosity>0)
            $display($time,"\tSTAGE1: Dropping Instruction from Cache");
        end
        else if(rg_discard_lower && misa[2]==1)begin
          rg_discard_lower<=False;
          ff_memory_response.deq;
          if(cache_response[17:16]==2'b11)begin
            rg_instruction<=cache_response[31:16];
            rg_action<=CheckPrev;
            enque_instruction=False;
          end
          else begin
            compressed=True;
            final_instruction=zeroExtend(cache_response[31:16]);
          end
        end
        else if(rg_action == None)begin
          ff_memory_response.deq;
          if(cache_response[1:0]=='b11)begin
            final_instruction=cache_response;
          end
          else if(misa[2]==1) begin
            compressed=True;
            final_instruction=zeroExtend(cache_response[15:0]);
            rg_instruction<=truncateLSB(cache_response);
            rg_action<=CheckPrev;
          end
        end
        else begin
          if(rg_instruction[1:0]==2'b11)begin
            final_instruction={cache_response[15:0],rg_instruction};
            rg_instruction<=truncateLSB(cache_response);
            ff_memory_response.deq;
          end
          else begin
            compressed=True;
            final_instruction=zeroExtend(rg_instruction);
            rg_action<=None;
          end
        end
				let pipedata=PIPE1_min{program_counter:rg_pc,
                      instruction:final_instruction,
                      epochs:{rg_eEpoch,rg_wEpoch},
                      accesserr:pack(err)}; 
        if(compressed  && enque_instruction && misa[2]==1)begin
          rg_pc<=rg_pc+2;
        end
        else if(enque_instruction)begin
          rg_pc<=rg_pc+4;
        end
        if(enque_instruction)begin
          txmin.u.enq(pipedata);
        `ifdef bpu
          tx_opt1.u.enq(PIPE1_opt1{prediction:0}); // TODO fix when supporting bpu
        `endif
        `ifdef supervisor
          tx_opt2.u.enq(PIPE1_opt2{pagefault:0}); // TODO fix when TLB is integrated
        `endif
          if(verbosity!=0) begin
            $display($time, "\tSTAGE1: PC: %h Inst: %h, Err: %b Epoch: %b", rg_pc, final_instruction,
                                                                                        err, epoch);
            $display($time,"\tSTAGE1: rg_action: ",fshow(rg_action)," compressed: %b final_inst:\
  %h rg_instruction: %h enque_instruction: %b curr_epoch: %b", compressed, final_instruction, 
              rg_instruction, enque_instruction,{rg_iEpoch,rg_eEpoch,rg_wEpoch});
          end
        end
    endrule
    
    // this method will send the address to the memory subsytem for the next instruction
    // Explicit Conditions: None
    // Implicit Conditions: None
    // Schedule Conflicts: This method will not fire if there is flush from the write-back stage. A
    // flush from any lower stages will cause a change in the rg_icache_request and rg_fence,
    // both of which are being updated in this method as well. This conflict is acceptable since we
    // do not wish to populate the cache with an unwanted request and initiate a new request asap.
    interface inst_request=interface Get
      method ActionValue#(Tuple4#(Bit#(VADDR),Bool,Bit#(3),Bool)) get;
		    if(rg_fence==True)
			    rg_fence<=False; // reset fence once the command is sent
        else
          rg_icache_request<=rg_icache_request+4;
        if(verbosity>1)
          $display($time,"\tSTAGE1: Sending Request for Addr: %h to Memory",rg_icache_request);
        return tuple4(rg_icache_request,rg_fence,{rg_iEpoch,rg_eEpoch,rg_wEpoch},False);
      endmethod
    endinterface;

    // This method will capture the response from the memory subsytem and enque it in a FIFO.
    // Explicit Conditions: None
    // Implicit Conditions: ff_memory_response.notFull
		interface inst_response= interface Put
			method Action put (Tuple4#(Bit#(32),Bool,Bit#(6),Bit#(3)) resp);
        if(verbosity>1)
          $display($time,"\tSTAGE1: Recevied response from the Memory: ",fshow(resp));
        ff_memory_response.enq(resp);
			endmethod
    endinterface;
    
		interface tx_min = txmin.e;
  `ifdef bpu
		interface tx_opt1 = txopt1.e;
  `endif
  `ifdef supervisor
		interface tx_opt2 = txopt2.e;
  `endif
    // This method will fire when a flush from the write back stage or execute stage is initiated.
    // Explicit Conditions: None
    // Implicit Conditions: None
    method Action flush(Bit#(VADDR) newpc, Bool fence); //fence integration
		  if(fence)
		  	rg_fence<=True;
      rg_pc<=newpc;
      rg_icache_request<={truncateLSB(newpc),2'b0};
      if(newpc[1:0]!=0)
        rg_discard_lower<=True;
      if(verbosity>1)
        $display($time, "\tSTAGE1: Received Flush. PC: %h Fence: %b ",newpc,fence); 
      ff_memory_response.clear();
    endmethod
    method Action update_eEpoch;
      rg_eEpoch<=~rg_eEpoch;
    endmethod
    method Action update_wEpoch;
      rg_wEpoch<=~rg_wEpoch;
    endmethod
    
    // This method captures the csrs from the csrfile
    method Action csrs (CSRtoDecode csr);
      wr_csr <= csr;
    endmethod
  endmodule
endpackage

