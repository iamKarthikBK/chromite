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
package stage4;
  import Vector::*;
  import FIFOF::*;
  import DReg::*;
  import SpecialFIFOs::*;
  import CustomFIFOs::*;
  import BRAMCore::*;
  import FIFO::*;
  import TxRx::*;
  import GetPut::*;
  import BUtils::*;
  `ifndef dcache
    `define BUFFSIZE 2
    import storebuffer::*;
  `endif

  import common_types::*;
  import globals::*;
  `include "common_params.bsv"
  `include "Logger.bsv"

  interface Ifc_stage4;
    //--- interfaces to recevie the executed result of the instruction
    interface RXe#(Stage4Common) rx_common_from_stage3;
    interface RXe#(Stage4Type)   rx_type_from_stage3;

    // interface to send the instruction for retirement in the next stage
    interface TXe#(PIPE4) tx_min;

  `ifdef rtldump
    interface RXe#(Tuple2#(Bit#(`vaddr),Bit#(32))) rx_inst;
    interface TXe#(Tuple2#(Bit#(`vaddr),Bit#(32))) tx_inst;
  `endif

    // interface to receive the response from dmem memory sub system
    interface Put#(DMem_core_response#(ELEN,1)) memory_response;

    // method to update epochs on redirection from write - back stage
    method Action update_wEpoch;
  endinterface

  (*synthesize*)
  module mkstage4(Ifc_stage4);
    String stage4 = "";  // for logging purposes.

    // rx fifos to receive the execute result from the previous stage.
    RX#(Stage4Common) rx_common <- mkRX;
    RX#(Stage4Type)   rx_type   <- mkRX;

    // tx fifo to send the instruction to the next stage.
    TX#(PIPE4) txmin <- mkTX;

  `ifdef rtldump
    RX#(Tuple2#(Bit#(`vaddr),Bit#(32))) rxinst <-mkRX;
    TX#(Tuple2#(Bit#(`vaddr),Bit#(32))) txinst <-mkTX;
  `endif

    // fifo to capture the response from the dmem subsystem
    FIFOF#(DMem_core_response#(ELEN,1)) ff_memory_response <- mkUGBypassFIFOF();

    // Holds the current epoch of the pipe
    Reg#(Bit#(1)) rg_wEpoch <- mkReg(0);

    // RuleName: check_instruction
    // Implicit Conditions: all rx fifos are not empty and tx fifos are not full.
    // Explicit Conditions: None
    // Description: 
    // General Working: For bypass instruction types simply convert the types and proceed. In case
    // of memory operations wait for cache to response. SFence is made a regular instruction in the
    // previous stage itself and will be bypassed here. This is because the the TLB is onl flushed
    // on the SFence and the cache is not receive any request and thus no response is provided to
    // the core for SFence.
    // 
    // Note on Epochs: we do not check for epochs here since there could be a memory 
    // operation that was initiated in the previous stage (eg. Load). Now the Load 
    // instruction if waiting in this stage to receive a response from the Cache. 
    // Assume now the write-back stage causes a trap and thus in the next cycle the Load 
    // instruction is removed from the memory stage since the
    // epochs do not match. However, the cache has not yet responded. If post trap taking, a
    // load instruction is observed then the return value of the previous load will be used
    // leading to wrong behavior. Thus for bypass instructions we depend on the write-back stage to
    // drop the instructions
    rule check_instruction;
      let s4common = rx_common.u.first;
      let s4type = rx_type.u.first;
      CommitType pipe4data=?;
      `logLevel( stage4, 0, $format("STAGE4: ",fshow(s4common)))
      `logLevel( stage4, 0, $format("STAGE4: ",fshow(s4type)))
      Bool operation_done = True;
      if(s4type matches tagged Trap .t) 
        pipe4data = tagged TRAP CommitTrap{cause    : t.cause,
                                           pc       : s4common.pc,
                                           badaddr  : t.badaddr} ;
      else if(s4type matches tagged Regular .r)
        pipe4data = tagged REG CommitRegular{ commitvalue : r.rdvalue,
                                                  rd          : s4common.rd
                                                `ifdef spfpu
                                                  ,fflags     : r.fflags
                                                  ,rdtype     : s4common.rdtype
                                                `endif };
      else if(s4type matches tagged System .s)
        pipe4data = tagged SYSTEM CommitSystem { rs1      : s.rs1_imm, 
                                                 lpc      : s.lpc,
                                                 csraddr  : s.csr_address,
                                                 func3    : s.funct3,
                                                 rd       : s4common.rd} ;
      else if(s4type matches tagged Memory .s) begin
        if( ff_memory_response.notEmpty ) begin
          let response = ff_memory_response.first;
          ff_memory_response.deq;

          `logLevel( stage4, 0, $format("STAGE4: Received: ",fshow(response)))

          // Here we need to check if the response from the cache matches the epoch of the 
          // instruction in this stage. If not, then we wait for another response from the cache
          if(s4common.epochs == response.epochs) begin 
            if(response.trap)
              pipe4data = tagged TRAP CommitTrap{cause    : response.cause,
                                                 pc       : s4common.pc,
                                                 badaddr  : response.word };
            else begin
            `ifdef dpfpu
              if( s.nanboxing == 1 )
                response.word[63 : 32] = '1;
            `endif
              if(s.memaccess == Store `ifdef atomic || s.memaccess == Atomic `endif )
                pipe4data = tagged STORE CommitStore{ pc          : s4common.pc,
                                                      commitvalue : `ifdef atomic 
                                                                    s.memaccess == Atomic?
                                                                    response.word : `endif 0
                                                    `ifdef atomic
                                                      ,rd         : s4common.rd
                                                    `endif };
              else
                pipe4data = tagged REG CommitRegular{ commitvalue : response.word,
                                                      rd          : s4common.rd
                                                    `ifdef spfpu
                                                      ,fflags     : 0 // since rd could be FRF
                                                      ,rdtype     : s4common.rdtype
                                                    `endif };
            end
          end
          else begin
            `logLevel( stage4, 0, $format("STAGE4: Instruction and Response Epochs do not match"))
            operation_done = False;
          end
        end
        else begin
          operation_done = False;
          `logLevel( stage4, 0, $format("STAGE4: Waiting for Memory Response"))
        end
      end
      if( operation_done ) begin
        `logLevel( stage4, 0, $format("STAGE4: Enquing: ", fshow(pipe4data)))
        txmin.u.enq(tuple2(pipe4data,s4common.epochs));
        rx_common.u.deq;
        rx_type.u.deq;
      `ifdef rtldump
        txinst.u.enq(rxinst.u.first);
        rxinst.u.deq;
      `endif
      end
    endrule

    interface rx_common_from_stage3 = rx_common.e;
    interface rx_type_from_stage3 = rx_type.e;
    interface tx_min = txmin.e;
  `ifdef rtldump
    interface rx_inst = rxinst.e;
    interface tx_inst = txinst.e;
  `endif
  `ifdef dcache
    interface  memory_response= interface Put
      method Action put (DMem_core_response#(ELEN,1) response)if(ff_memory_response.notFull);
        ff_memory_response.enq(response);
      endmethod
    endinterface;
    method Action update_wEpoch;
      rg_wEpoch<=~rg_wEpoch;
    endmethod
  endmodule
endpackage

