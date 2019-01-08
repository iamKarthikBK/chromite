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
package storebuffer2;
  import Vector::*;
  import FIFOF::*;
  import DReg::*;
  import SpecialFIFOs::*;
  import CustomFIFOs::*;
  import BRAMCore::*;
  import FIFO::*;
  import BUtils::*;
  import GetPut::*;

  `define buffsize 2

  import common_types::*;

  interface Ifc_storebuffer;
    method ActionValue#(Tuple2#(Bit#(ELEN), Bit#(ELEN))) check_address (Bit#(VADDR) addr);
    method Action allocate(Bit#(VADDR) addr, Bit#(ELEN) data, Bit#(2) size);
    method ActionValue#(MemoryWriteReq#(VADDR,1,ELEN)) perform_store;
    method Bit#(VADDR) write_address;
    method Action deque;
    method Bool storebuffer_empty;
  endinterface

  (*synthesize*)
  // can't use this scheme since the first and second methods do not hold the notion of the latest.
  // The second data could be older than the first when the pipe is empty or it could be newer than
  // the first if the pipe is full. This distinction cannot be done using PipeFIFOF module
  module mkstorebuffer(Ifc_storebuffer);
    let verbosity = `VERBOSITY ;
    let offset = valueOf(XLEN)==64?2:1;
    Ifc_PipeFIFOF#(Tuple3#(Bit#(VADDR),Bit#(ELEN),Bit#(2))) storequeue <- mkPipeFIFOF();

    method ActionValue#(Tuple2#(Bit#(ELEN), Bit#(ELEN))) check_address (Bit#(VADDR) addr);
      Bit#(ELEN) storemask1 = 0;
      Bit#(ELEN) storemask2 = 0;
      `ifdef RV64
        Bit#(TSub#(VADDR,3)) wordaddr = truncateLSB(addr);
      `else
        Bit#(TSub#(VADDR,2)) wordaddr = truncateLSB(addr);
      `endif
      let {valid1, element1} = storequeue.first_data;
      let {valid2, element2} = storequeue.second_data;
      let {store_addr1,store_data1,store_size1} =element1; 
      let {store_addr2,store_data2,store_size2} =element2; 

      if(truncateLSB(store_addr2) == wordaddr)begin
        Bit#(TLog#(ELEN)) shiftamt2 = {store_addr2[offset:0],3'b0}; // parameterize for XLEN
        Bit#(ELEN) temp = store_size2==0?'hff:
                          store_size2==1?'hffff:
                          store_size2==2?'hffffffff:'1;
        temp = temp << shiftamt2; 
        if(verbosity>0)
          $display($time,"\tSTOREBUFFER Addr2: %h Data2: %h Size2: %h temp: %h",
              store_addr2, store_data2,store_size2, temp);
        storemask2 = temp;               // 'h00_00_00_FF
      end
      if(truncateLSB(store_addr1) == wordaddr)begin
        Bit#(TLog#(ELEN)) shiftamt1 = {store_addr1[offset:0],3'b0}; // parameterize for XLEN
        Bit#(ELEN) temp = store_size1==0?'hff:
                          store_size1==1?'hffff:
                          store_size1==2?'hffffffff:'1;
        temp = temp << shiftamt1;
        if(verbosity>0)
          $display($time,"\tSTOREBUFFER Addr1: %h Data1: %h Size: %h temp: %h",store_addr1,
                                       store_data1,store_size1, temp);
        storemask1 = temp&(~storemask2); // 'h00_00_00_FF
      end
    
      let data1 = storemask1& store_data1;
      let data2 = storemask2& store_data2;
      return tuple2(storemask1|storemask2,data1|data2);
    endmethod
    method Action allocate(Bit#(VADDR) addr, Bit#(ELEN) data, Bit#(2) size);
      if(size==0)
        data=duplicate(data[7:0]);
      else if(size==1)
        data=duplicate(data[15:0]);
      else if(size==2)
        data=duplicate(data[31:0]);
      if(verbosity>0)
        $display($time,"\tSTOREBUFFER: Enquing Store Addr: %h Data: %h size: %b", addr, data, size);
      storequeue.fifo.enq(tuple3(addr,data,size));
    endmethod
    method ActionValue#(MemoryWriteReq#(VADDR,1,ELEN)) perform_store ;
      if(verbosity>0)
        $display($time,"\tSTAGE4: Sending Store request: ",fshow(storequeue.fifo.first));
      return storequeue.fifo.first;
    endmethod
    method Bit#(VADDR) write_address;
//      let {valid, data} = storequeue.first_data;
      return tpl_1(storequeue.fifo.first);
    endmethod
    method Action deque;
      $display($time,"\tSTOREBUFFER: DEQUING: ",fshow(storequeue.fifo.first));
      storequeue.fifo.deq;
    endmethod
    method Bool storebuffer_empty=!storequeue.fifo.notEmpty;
  endmodule
endpackage

