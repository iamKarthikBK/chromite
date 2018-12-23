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
  import BUtils::*;
  `ifndef dcache
    `define BUFFSIZE 2
  `endif

  import common_types::*;
  `include "common_params.bsv"
  import storebuffer::*;

  interface Ifc_stage4;
    interface RXe#(PIPE3) rx_min;
    interface TXe#(PIPE4) tx_min;
    `ifdef rtldump
      interface RXe#(Tuple2#(Bit#(VADDR),Bit#(32))) rx_inst;
      interface TXe#(Tuple2#(Bit#(VADDR),Bit#(32))) tx_inst;
    `endif
    interface Put#(Maybe#(MemoryReadResp#(1))) memory_read_response;

		interface Get#(MemoryWriteReq#(VADDR,1,ELEN)) memory_write_request;
    interface Put#(MemoryWriteResp) memory_write_response;

    interface Get#(Tuple2#(Bit#(ELEN), Bit#(3))) fwd_from_mem;
    method Action update_wEpoch;
    method Maybe#(Tuple2#(Bit#(2),Bit#(VADDR))) store_response;
    method Action start_store(Bool s);
    method Bool storebuffer_empty;
  endinterface

  function Bit#(ELEN) fn_atomic_op (Bit#(4) op,  Bit#(ELEN) rs2,  Bit#(ELEN) loaded);
    Int#(ELEN) s_loaded = unpack(loaded);
		Int#(ELEN) s_rs2 = unpack(rs2);
    case (op[3:0])
				'b0011:return rs2;
				'b0000:return (loaded+rs2);
				'b0010:return (loaded^rs2);
				'b0110:return (loaded&rs2);
				'b0100:return (loaded|rs2);
				'b1100:return min(loaded,rs2);
				'b1110:return max(loaded,rs2);
				'b1000:return pack(min(s_loaded,s_rs2));
				'b1010:return pack(max(s_loaded,s_rs2));
				default:return loaded;
        // TODO: Handle LR SC
			endcase	
  endfunction

  (*synthesize*)
  module mkstage4(Ifc_stage4);
    RX#(PIPE3) rxmin <- mkRX;
    TX#(PIPE4) txmin <- mkTX;
  `ifdef rtldump
    RX#(Tuple2#(Bit#(VADDR),Bit#(32))) rxinst <-mkRX;
    TX#(Tuple2#(Bit#(VADDR),Bit#(32))) txinst <-mkTX;
  `endif
    Ifc_storebuffer storebuffer <- mkstorebuffer();
    // wire that captures the response coming from the external memory or cache.
    Wire#(Maybe#(MemoryReadResp#(1))) wr_memory_response <- mkDWire(tagged Invalid);
    // wire that carriues the information for operand forwarding
    Wire#(Maybe#(Tuple2#(Bit#(ELEN), Bit#(3)))) wr_operand_fwding <- mkDWire(tagged Invalid);
    Reg#(Bit#(1)) rg_epoch <- mkReg(0);
    Wire#(Maybe#(Tuple2#(Bit#(2),Bit#(VADDR)))) wr_store_response <-mkDWire(tagged Invalid);
    Wire#(Bool) wr_store_start<-mkDWire(False);
    Reg#(Bit#(VADDR)) rg_reserved_addr <- mkReg(0);


    rule check_operation;
 
      let offset = valueOf(XLEN)==64?2:1;
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
      Bit#(2) size=field4[14:13];
      Bit#(1) sign=field4[15];
      Bit#(1) nanboxing=field4[16];
      Bit#(4) atomic_op = field4[20:17];
      CommitType temp1=?;
      Bool complete=True;
  
      // check store_buffer entries
      let {storemask,storehit} <- storebuffer.check_address(badaddr); 
      Bit#(TLog#(ELEN)) loadoffset = {badaddr[offset:0],3'b0}; // parameterize for XLEN

      if(rg_epoch!=epoch)begin
        rxmin.u.deq;
        `ifdef rtldump
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
        if(memaccess==Load `ifdef atomic || memaccess == Atomic `endif )begin

          if(wr_memory_response matches tagged Valid .resp)begin
            let {data, err_fault, epochs}=resp;
            Bit#(ELEN) update_data = data<<loadoffset;
            update_data= (update_data&~storemask)|(storehit);
            $display($time, "\tSTAGE4: storehit: %h data: %h udpate_data: %h loadoffset: %d\
 storemask: %h",  storehit, data, update_data, loadoffset, storemask);
            update_data= update_data>>{loadoffset};
            if(size==0)
              update_data=sign==0?signExtend(update_data[7:0]):zeroExtend(update_data[7:0]);
            else if(size==1)
              update_data=sign==0?signExtend(update_data[15:0]):zeroExtend(update_data[15:0]);
            else if(size==2)
                update_data=sign==0?signExtend(update_data[31:0]):zeroExtend(update_data[31:0]);
            `ifdef dpfpu
              if(nanboxing==1)
                  update_data[63:32]='1;
            `endif
            if(err_fault==0 )begin // no bus error
              wr_operand_fwding <= tagged Valid tuple2(update_data, rdindex);
            `ifdef atomic
              if(memaccess==Atomic)begin
                temp1=tagged STORE CommitStore{pc:pc,
                                               rdindex:rdindex, 
                                               rd: rd,  
                                               commitvalue:update_data};
                // TODO: perform atomic op here and update storedata
                storebuffer.allocate(badaddr, fn_atomic_op(atomic_op, storedata,  update_data), size);
              end
              else
            `endif
                temp1=tagged REGULAR CommitRegular{commitvalue:update_data,
                                                 fflags:0,
                                                 rdtype:rdtype,
                                                 rd:rd,
                                                 rdindex:rdindex};
            end
            else begin
              if(err_fault[0]==1)begin
              `ifdef atomic 
                if(memaccess==Atomic)
                  temp1=tagged TRAP CommitTrap{cause:`Store_access_fault, badaddr:badaddr, pc:pc};
                else
              `endif
                  temp1=tagged TRAP CommitTrap{cause:`Load_access_fault, badaddr:badaddr, pc:pc};
              end
              else begin
              `ifdef atomic 
                if(memaccess==Atomic)
                  temp1=tagged TRAP CommitTrap{cause:`Store_pagefault, badaddr:badaddr, pc:pc};
                else
              `endif
                temp1=tagged TRAP CommitTrap{cause:`Load_pagefault, badaddr:badaddr, pc:pc};
              end
            end
          end
          else begin
            complete=False;
            $display($time,"\tSTAGE4: Waiting for Memory Read Response");
          end
        end
        else if(memaccess==Store)begin
          temp1=tagged STORE CommitStore{pc:pc,
                                         rdindex:rdindex
                                       `ifdef atomic
                                         , rd: rd,  
                                         commitvalue:?
                                       `endif };
          storebuffer.allocate(badaddr, storedata, size);
        end
        else if(memaccess==Fence || memaccess==FenceI)begin
          temp1=tagged REGULAR CommitRegular{commitvalue:?,
                                                 fflags:0,
                                                 rdtype:rdtype,
                                                 rd:rd,
                                                 rdindex:rdindex};
        end
      end
      `ifdef simulate
        `ifdef rtldump
          $display($time,"\tSTAGE4: PC: %h Inst: %h",simpc,inst);
        `endif
        if(complete) $display($time,"\tSTAGE4: temp1: ",fshow(temp1));
      `endif
      if(complete)begin
        txmin.u.enq(tuple2(temp1,epoch));
        rxmin.u.deq;
        `ifdef rtldump
          txinst.u.enq(rxinst.u.first);
          rxinst.u.deq;
        `endif
      end
    endrule

    interface rx_min = rxmin.e;
    interface tx_min = txmin.e;
  `ifdef rtldump
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
      method ActionValue#(MemoryWriteReq#(VADDR,1,ELEN)) get if(wr_store_start);
        let x <- storebuffer.perform_store;
        return x;
      endmethod
    endinterface;
    interface memory_write_response = interface Put
      method Action put(MemoryWriteResp r);
        $display($time,"\tSTAGE4: Recieved Write response: %b",r);
        storebuffer.deque;
        wr_store_response<=tagged Valid (tuple2(r,storebuffer.write_address));
      endmethod
    endinterface;
    method store_response = wr_store_response;
    method storebuffer_empty = storebuffer.storebuffer_empty;
  endmodule
endpackage

