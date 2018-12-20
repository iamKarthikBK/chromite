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
  `ifndef dcache
    `define BUFFSIZE 2
  `endif

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

		interface Get#(MemoryWriteReq#(PADDR,1,ELEN)) memory_write_request;
    interface Put#(MemoryWriteResp) memory_write_response;

    interface Get#(Tuple2#(Bit#(ELEN), Bit#(3))) fwd_from_mem;
    method Action update_wEpoch;
    method Maybe#(Tuple2#(Bit#(2),Bit#(VADDR))) store_response;
    method Action start_store(Bool s);
  endinterface

  (*synthesize*)
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
    Reg#(Bit#(1)) rg_epoch <- mkReg(0);
  `ifndef dcache
    Reg#(Bit#(VADDR)) store_address[`BUFFSIZE ];
    Reg#(Bit#(ELEN)) store_data[`BUFFSIZE ];
    Reg#(Bit#(2)) store_size [ `BUFFSIZE ];
    for(Integer i=0;i<`BUFFSIZE ;i=i+1)begin
      store_data[i]<-mkReg(0);
      store_address[i]<-mkReg(0);
      store_size[i]<-mkReg(0);
    end
    Reg#(Bit#(TLog#( `BUFFSIZE ))) rg_head <- mkReg(0);
    Reg#(Bit#(TLog#( `BUFFSIZE ))) rg_tail <- mkReg(0);
    Wire#(Maybe#(Tuple2#(Bit#(2),Bit#(VADDR)))) wr_store_response <-mkDWire(tagged Invalid);
    Wire#(Bool) wr_store_start<-mkDWire(False);
  `endif


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
      if(rg_epoch!=epoch)begin
        rxmin.u.deq;
        `ifdef simulate
          rxinst.u.deq;
        `endif
        complete=False;
      end
      else if(committype==TRAP)begin
        temp1=tagged TRAP (CommitTrap{cause:trapcause, badaddr:badaddr, pc:pc});
      end
      else if(committype==REGULAR)begin
        temp1=tagged REGULAR CommitRegular{commitvalue:commitvalue,
                                          fflags:fflags,
                                          rdtype:rdtype,
                                          rd:rd,
                                          rdindex:rdindex};
      end
      else if(committype==SYSTEM_INSTR)begin
        temp1=tagged SYSTEM CommitSystem {rs1:rs1,
                                          lpc:lpc,
                                          csraddr:csraddr,
                                          func3:func3,
                                          rdtype:rdtype,
                                          rd:rd,
                                          rdindex:rdindex};
      end
      else if(committype==MEMORY) begin
        if(memaccess!=Store)begin
          if(wr_memory_response matches tagged Valid .resp)begin
            let {data, err_fault, epochs}=resp;
            if(err_fault==0 )begin // no bus error
              wr_operand_fwding <= tagged Valid tuple2(data, rdindex);
              temp1=tagged REGULAR CommitRegular{commitvalue:data,
                                                 fflags:fflags,
                                                 rdtype:rdtype,
                                                 rd:rd,
                                                 rdindex:rdindex};
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
        else begin
          temp1=tagged STORE CommitStore{pc:pc,rdindex:rdindex};
          store_address[rg_tail]<=badaddr;
          store_data[rg_tail]<=storedata;
          store_size[rg_tail]<=func3[1:0];
          rg_tail<=rg_tail+1;
          $display($time,"\tSTAGE4: Enquing Store Addr: %h Data: %h size: %b into Tail: %d",
              badaddr, storedata, func3[1:0], rg_tail);
        end
      end
      `ifdef simulate
        $display($time,"\tSTAGE4: PC: %h Inst: %h",simpc,inst);
        if(complete)
          $display($time,"\tSTAGE4: temp1: ",fshow(temp1));
      `endif
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
    method Action update_wEpoch;
      rg_epoch<=~rg_epoch;
    endmethod
    method Action start_store(Bool s);
      wr_store_start<=s;
    endmethod
		interface memory_write_request = interface Get
      method ActionValue#(MemoryWriteReq#(PADDR,1,ELEN)) get if(wr_store_start);
        $display($time,"\tSTAGE4: Sending Store request for Addr:%h Data: %h size: %b",
        store_address[rg_head], store_data[rg_head], store_size[rg_head]);
        rg_head<=rg_head+1;
        return tuple3(truncate(store_address[rg_head]),store_data[rg_head],store_size[rg_head]);
      endmethod
    endinterface;
    interface memory_write_response = interface Put
      method Action put(MemoryWriteResp r);
        $display($time,"\tSTAGE4: Recieved Write response: %b",r);
        wr_store_response<=tagged Valid (tuple2(r,store_address[rg_head-1]));
      endmethod
    endinterface;
    method store_response = wr_store_response;
  endmodule
endpackage

