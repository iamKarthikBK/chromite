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
  `endif
`ifdef dcache
  import cache_types::*;
`else
  import storebuffer::*;
`endif

  import common_types::*;
  `include "common_params.bsv"

  interface Ifc_stage4;
    interface RXe#(PIPE3) rx_min;
    interface TXe#(PIPE4) tx_min;
    `ifdef rtldump
      interface RXe#(Tuple2#(Bit#(VADDR),Bit#(32))) rx_inst;
      interface TXe#(Tuple2#(Bit#(VADDR),Bit#(32))) tx_inst;
    `endif
  `ifdef dcache
    interface Put#(DCore_response#(ELEN,1)) memory_response;
  `else
    interface Put#(MemoryReadResp#(1)) memory_read_response;
    interface Put#(MemoryWriteResp) memory_write_response;
		interface Get#(MemoryWriteReq#(VADDR,1,ELEN)) memory_write_request;
  `endif 

    method Action update_wEpoch;
  `ifndef dcache
    method Maybe#(Tuple2#(Bit#(1),Bit#(VADDR))) store_response;
    method Action start_store(Tuple2#(Bool,Bool) s);
    method Bool storebuffer_empty;
  `endif
  endinterface

  function Bit#(ELEN) fn_atomic_op (Bit#(5) op,  Bit#(ELEN) rs2,  Bit#(ELEN) loaded);
    Bit#(ELEN) op1 = loaded;
    Bit#(ELEN) op2 = rs2;
    if(op[4]==0)begin
			op1=signExtend(loaded[31:0]);
      op2= signExtend(rs2[31:0]);
    end
    Int#(ELEN) s_op1 = unpack(op1);
		Int#(ELEN) s_op2 = unpack(op2);
    
    case (op[3:0])
				'b0011:return op2;
				'b0000:return (op1+op2);
				'b0010:return (op1^op2);
				'b0110:return (op1&op2);
				'b0100:return (op1|op2);
				'b1100:return min(op1,op2);
				'b1110:return max(op1,op2);
				'b1000:return pack(min(s_op1,s_op2));
				'b1010:return pack(max(s_op1,s_op2));
				default:return op1;
			endcase
  endfunction

  (*synthesize*)
  module mkstage4(Ifc_stage4);
    let verbosity = `VERBOSITY ;
    RX#(PIPE3) rxmin <- mkRX;
    TX#(PIPE4) txmin <- mkTX;
  `ifdef rtldump
    RX#(Tuple2#(Bit#(VADDR),Bit#(32))) rxinst <-mkRX;
    TX#(Tuple2#(Bit#(VADDR),Bit#(32))) txinst <-mkTX;
  `endif
  `ifndef dcache
    Ifc_storebuffer storebuffer <- mkstorebuffer();
  `endif
    // wire that captures the response coming from the external memory or cache.
    Wire#(Maybe#(MemoryReadResp#(1))) wr_memory_response <- mkDWire(tagged Invalid);
  `ifdef dcache
    FIFOF#(DCore_response#(ELEN,1)) ff_memory_response <- mkUGBypassFIFOF();
  `else
    Wire#(Maybe#(Tuple2#(Bit#(1),Bit#(VADDR)))) wr_store_response <-mkDWire(tagged Invalid);
    Wire#(Bool) wr_store_start<-mkDWire(False);
    Wire#(Bool) wr_clear_sb<-mkDWire(False);
    Wire#(Bool) wr_deq_storebuffer1<-mkDWire(False);
    FIFOF#(MemoryReadResp#(1)) ff_memory_response <- mkUGBypassFIFOF();
  `endif
    // wire that carriues the information for operand forwarding
    Reg#(Bit#(1)) rg_epoch <- mkReg(0);


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
      Bit#(5) rd = field4[5:1];
      RFType rdtype = unpack(field4[6]);
      Access_type memaccess = unpack(field4[9:7]);
      Bit#(2) size=field4[11:10];
      Bit#(1) sign=field4[12];
      Bit#(1) nanboxing=field4[13];
      Bit#(5) atomic_op = {size[0],field4[17:14]};
      CommitType temp1=?;
      Bool complete=True;
  
      // check store_buffer entries
    `ifndef dcache
      let {storemask,storehit} <- storebuffer.check_address(badaddr); 
    `endif
      Bit#(TLog#(ELEN)) loadoffset = {badaddr[offset:0],3'b0}; // parameterize for XLEN
      if(committype==TRAP)begin
        temp1=tagged TRAP (CommitTrap{cause:trapcause, badaddr:badaddr, pc:pc});
      end
      else if(committype==REGULAR)begin
        temp1=tagged REG CommitRegular{commitvalue:commitvalue,
                                          fflags:fflags,
                                          rdtype:rdtype,
                                          rd:rd};
      end
      else if(committype==SYSTEM_INSTR)begin
        temp1=tagged SYSTEM CommitSystem {rs1:rs1,
                                          lpc:lpc,
                                          csraddr:csraddr,
                                          func3:func3,
                                          rdtype:rdtype,
                                          rd:rd};
      end
      else if(committype==MEMORY) begin
      `ifndef dcache
        if(memaccess==Load `ifdef atomic || memaccess == Atomic `endif )begin
      `endif
          if(verbosity>0)
            $display($time, "\tSTAGE4: PC: %h Load/Atomic Operation.", simpc);
          if(ff_memory_response.notEmpty)begin
            let {data, err_fault, epochs}=ff_memory_response.first;
            ff_memory_response.deq;
            if(epochs==rg_epoch)begin
            `ifndef dcache
              Bit#(ELEN) update_data = data<<loadoffset;
              update_data= (update_data&~storemask)|(storehit);
              update_data= update_data>>{loadoffset};
              if(size==0)
                update_data=sign==0?signExtend(update_data[7:0]):zeroExtend(update_data[7:0]);
              else if(size==1)
                update_data=sign==0?signExtend(update_data[15:0]):zeroExtend(update_data[15:0]);
              else if(size==2)
                  update_data=sign==0?signExtend(update_data[31:0]):zeroExtend(update_data[31:0]);
            `endif
              Bit#(ELEN) update_data=data;
            `ifdef dpfpu
              if(nanboxing==1)
                  update_data[63:32]='1;
            `endif
              if(err_fault==0 )begin // no bus error
              `ifdef atomic
                if(memaccess==Atomic)begin
                  temp1=tagged STORE CommitStore{pc:pc,
                                                 rd: rd,  
                                                 commitvalue:update_data};
                `ifndef dcache
                  storebuffer.allocate(badaddr, fn_atomic_op(atomic_op, storedata,  update_data), size);
                `endif
                end
                else
              `endif
                if(memaccess==Store)begin
                  temp1=tagged STORE CommitStore{pc:pc
                                       `ifdef atomic
                                         , rd: rd,  
                                         commitvalue:0 
                                       `endif };
                end
                else  
                  temp1=tagged REG CommitRegular{commitvalue:update_data,
                                                   fflags:0,
                                                   rdtype:rdtype,
                                                   rd:rd};
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
              if(rg_epoch==epoch)
                complete=False;
            if(verbosity>0)
              $display($time,"\tSTAGE4: Dropping Memory Read Response");
            end
          end
          else begin
            complete=False;
            if(verbosity>0)
              $display($time,"\tSTAGE4: Waiting for Memory Read Response");
          end
      `ifndef dcache
        end
        else if(memaccess==Store)begin
          if(verbosity>0)
            $display($time, "\tSTAGE4: PC: %h Store Operation.", simpc);
          temp1=tagged STORE CommitStore{pc:pc
                                       `ifdef atomic
                                         , rd: rd,  
                                         commitvalue:0 
                                       `endif };
          storebuffer.allocate(badaddr, storedata, size);
        end
        else if(memaccess==Fence || memaccess==FenceI)begin
          if(verbosity>0)
            $display($time, "\tSTAGE4: PC: %h Fence Operation.", simpc);
          temp1=tagged REG CommitRegular{commitvalue:?,
                                                 fflags:0,
                                                 rdtype:rdtype,
                                                 rd:rd};
        end
      `endif
      end
      `ifdef rtldump
        if(verbosity>1)
          $display($time,"\tSTAGE4: PC: %h Inst: %h",simpc,inst);
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

  `ifndef dcache
    rule deque_store_buffer(wr_clear_sb || wr_deq_storebuffer1);
      storebuffer.deque;
      if(wr_clear_sb)
        storebuffer.clear_queue;
    endrule
  `endif

    interface rx_min = rxmin.e;
    interface tx_min = txmin.e;
  `ifdef rtldump
    interface rx_inst = rxinst.e;
    interface tx_inst = txinst.e;
  `endif
  `ifdef dcache
    interface  memory_response= interface Put
      method Action put (DCore_response#(ELEN,1) response)if(ff_memory_response.notFull);
        if(verbosity>1)
          $display($time, "\tSTAGE4: Read Response: ", fshow(response));
        ff_memory_response.enq(response);
      endmethod
    endinterface;
  `else
    interface  memory_read_response= interface Put
      method Action put (MemoryReadResp#(1) response)if(ff_memory_response.notFull);
        if(verbosity>1)
          $display($time, "\tSTAGE4: Read Response: ", fshow(response));
        ff_memory_response.enq(response);
      endmethod
    endinterface;
  `endif
    method Action update_wEpoch;
      rg_epoch<=~rg_epoch;
    endmethod
  `ifndef dcache
    method Action start_store(Tuple2#(Bool,Bool) s);
      wr_store_start<=tpl_1(s);
      wr_clear_sb<=tpl_2(s);
    endmethod
		interface memory_write_request = interface Get
      method ActionValue#(MemoryWriteReq#(VADDR,1,ELEN)) get if(wr_store_start);
        let x <- storebuffer.perform_store;
        return x;
      endmethod
    endinterface;
    interface memory_write_response = interface Put
      method Action put(MemoryWriteResp r);
        if(verbosity>1)
          $display($time,"\tSTAGE4: Recieved Write response: %b",r);
        wr_deq_storebuffer1<=True;
        wr_store_response<=tagged Valid (tuple2(r,storebuffer.write_address));
      endmethod
    endinterface;
    method store_response = wr_store_response;
    method storebuffer_empty = storebuffer.storebuffer_empty;
  `endif
  endmodule
endpackage

