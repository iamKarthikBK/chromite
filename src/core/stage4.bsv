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
  import BRAMCore::*;
  import FIFO::*;
  import TxRx::*;
  import GetPut::*;

  import common_types::*;
  `include "common_params.bsv"

  interface Ifc_stage4;
    interface RXe#(PIPE3) rx_min;
    interface TXe#(PIPE4) tx_min;
    `ifdef simulate
      interface RXe#(Tuple2#(Bit#(VADDR),Bit#(32))) rx_inst;
      interface TXe#(Tuple2#(Bit#(VADDR),Bit#(32))) tx_inst;
    `endif
    interface Put#(Maybe#(MemoryReadResp#(1))) memory_read_response;
		interface Get#(MemoryReadReq#(PADDR,1)) memory_write_request;
    interface Get#(Tuple2#(Bit#(ELEN), Bit#(3))) fwd_from_mem;
  endinterface

  module mkstage4(Ifc_stage4);
    RX#(PIPE3) rxmin <- mkRX;
    TX#(PIPE4) txmin <- mkTX;
    `ifdef simulate
      RX#(Tuple2#(Bit#(VADDR),Bit#(32))) rxinst <-mkRX;
      TX#(Tuple2#(Bit#(VADDR),Bit#(32))) txinst <-mkTX;
    `endif
    // wire that captures the response coming from the external memory or cache.
    Wire#(Maybe#(MemoryReadResp#(1))) wr_memory_response <- mkDWire(tagged Invalid);
    // wire that carriues the information for operand forwarding
    Wire#(Maybe#(Tuple2#(Bit#(ELEN), Bit#(3)))) wr_operand_fwding <- mkDWire(tagged Invalid);

    rule check_operation;
      
      let {committype, field1, field2, field3, field4}=rxmin.u.first;
    `ifdef rtldump
      let {simpc,inst}=rxinst.u.first;
    `endif

      Bit#(VADDR) badaddr = field1;
      Bit#(5) fflags=truncate(field1);
      Bit#(3) func3= field1[2:0];
      Bit#(12) csraddr = field1[14:3];
      Bit#(2) lpc = field1[16:15];

      Bit#(ELEN) storedata=field2;
      Bit#(ELEN) commitvalue = field2;
      Bit#(XLEN) rs1 = truncate(field2);
      
      Bit#(VADDR) pc = field3;
      
      Bit#(1) epoch = field4[0];
      Bit#(7) trapcause = field4[7:1];
      Bit#(3) rdindex = field4[3:1];
      Bit#(5) rd = field4[8:4];
      Op3type rdtype = unpack(field4[9]);
      Access_type memaccess = unpack(field4[12:10]);
      CommitType temp1=?;
      Bool complete=True;
      if(committype==TRAP)begin
        temp1=tagged TRAP (CommitTrap{cause:trapcause, badaddr:badaddr, pc:pc});
      end
      else if(committype==REGULAR)begin
        temp1=tagged REGULAR CommitRegular{rd:commitvalue,meta:zeroExtend({fflags,pack(rdtype),rd,rdindex})};
      end
      else if(committype==SYSTEM_INSTR)begin
        temp1=tagged SYSTEM CommitSystem {rs1:rs1,meta:zeroExtend({lpc,csraddr,func3,pack(rdtype),rd,rdindex})};
      end
      else if(committype==MEMORY) begin
        if(memaccess!=Store)begin
          if(wr_memory_response matches tagged Valid .resp)begin
            let {data, err_fault, epochs}=resp;
            if(err_fault==0 )begin // no bus error
              wr_operand_fwding <= tagged Valid tuple2(data, rdindex);
              temp1=tagged REGULAR CommitRegular{rd:data,meta:zeroExtend({fflags,pack(rdtype),rd,rdindex})};
            end
            else begin
              if(err_fault[0]==1)
                temp1=tagged TRAP CommitTrap{cause:`Load_access_fault, badaddr:badaddr, pc:pc};
              else
                temp1=tagged TRAP CommitTrap{cause:`Load_pagefault, badaddr:badaddr, pc:pc};
            end
          end
          else begin
            complete=False;
            $display($time,"\tSTAGE4: Waiting for Memory Read Response");
          end
        end
      end
      if(complete)begin
        txmin.u.enq(tuple2(temp1,epoch));
        rxmin.u.deq;
        `ifdef simulate
          txinst.u.enq(rxinst.u.first);
          rxinst.u.deq;
        `endif
      end
    endrule

    interface rx_min = rxmin.e;
    interface tx_min = txmin.e;
    `ifdef simulate
      interface rx_inst = rxinst.e;
      interface tx_inst = txinst.e;
    `endif
    interface  memory_read_response= interface Put
      method Action put (Maybe#(MemoryReadResp#(1)) response);
        wr_memory_response <= response;
      endmethod
    endinterface;
    interface fwd_from_mem = interface Get
      method ActionValue#(Tuple2#(Bit#(ELEN), Bit#(3))) get 
                                                    if(wr_operand_fwding matches tagged Valid .data);
        return data;
      endmethod
    endinterface;
  endmodule
endpackage

