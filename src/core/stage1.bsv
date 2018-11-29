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
package stage1;
  // -- package imports --//
  import FIFOF::*;
  import DReg::*;
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
  	interface Get#(Tuple4#(Bit#(PADDR),Bool,Bit#(3),Bool)) inst_request;

    // instruction response from the memory subsytem or the memory bus
    //                     inst , error , epoch 
    interface Put#(Tuple3#(Bit#(32),Bool,Bit#(3))) inst_response;

    // instruction along with other results to be sent to the next stage
    interface TXe#(IF_ID_type) to_stage2;

    // flush from the write-back stage. indicates is fence is required.
    method Action flush_from_wb(Bit#(PADDR) newpc, Bool fence);

    // flush frmo the execute stage.
    method Action flush_from_exe;

    // csrs from the csrfile.
    method Action csrs (CSRtoDecode csr);

	endinterface

  (*synthesize*)
  module mkstage1(Ifc_stage1);

    let verbosity = `VERBOSITY;
    
    // this wire carries the current values of certain csrs.
    Wire#(CSRtoDecode) wr_csr <-mkWire();
    // This register holds the request address to be sent to the cache.
    Reg#(Bit#(PADDR)) rg_icache_request <- mkReg('h1000);
    // This register holds the PC value that needs to be sent to the next stage in the pipe.
    Reg#(Bit#(PADDR)) rg_pc <- mkReg('h1000);
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
    FIFOF#(Tuple3#(Bit#(32),Bool,Bit#(1))) ff_memory_response<-mkSizedFIFOF(2);

    // FIFO to interface with the next pipeline stage
		TX#(IF_ID_type) tostage2<-mkTX;

		interface to_stage2 = tostage2.e;
  endmodule
endpackage

