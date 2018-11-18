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
package l1dcache;
  import Vector::*;
  import FIFOF::*;
  import DReg::*;
  import SpecialFIFOs::*;
  import BRAMCore::*;
  import FIFO::*;
  import Assert::*;

  import cache_types::*;
  import mem_config::*;
  
  interface Ifc_l1dcache#( numeric type wordsize, 
                           numeric type blocksize,  
                           numeric type sets,
                           numeric type ways,
                           numeric type paddr,
                           numeric type fbsize
                           );

    interface Put#(DCore_request#(paddr,respwidth)) core_req;
    interface Get#(DCore_response#(respwidth)) core_resp;
    interface Get#(DMem_read_request#(paddr)) read_mem_req;
    interface Put#(DMem_read_response#(respwidth)) read_mem_resp;
    `ifdef simulate
      interface Get#(Bit#(1)) meta;
    `endif
    `ifdef perf
      method Bit#(5) perf_counters;
    `endif
  endinterface

  module mkl1dcache(Ifc_l1dcache#(wordsize,blocksize,sets,ways,paddr,fbsize))
    provisos(
          Mul#(wordsize, 8, respwidth),        // respwidth is the total bits in a word
          Mul#(blocksize, respwidth,linewidth),// linewidth is the total bits in a cache line
          Log#(wordsize,wordbits),      // wordbits is no. of bits to index a byte in a word
          Log#(blocksize, blockbits),   // blockbits is no. of bits to index a word in a block
          Log#(sets, setbits),           // setbits is the no. of bits used as index in BRAMs.
          Add#(wordbits,blockbits,_a),  // _a total bits to index a byte in a cache line.
          Add#(_a, setbits, _b),        // _b total bits for index+offset, 
          Add#(tagbits, _b, paddr)     // tagbits = 32-(wordbits+blockbits+setbits)
          
    );
    let v_sets=valueOf(sets);
    let v_setbits=valueOf(setbits);
    let v_wordbits=valueOf(wordbits);
    let v_blockbits=valueOf(blockbits);
    let v_linewidth=valueOf(linewidth);
    let v_tagbits=valueOf(tagbits);
    let verbosity=`VERBOSITY;
    let v_paddr=valueOf(paddr);
    let v_ways=valueOf(ways);
    let v_wordsize=valueOf(wordsize);
    let v_blocksize=valueOf(blocksize);
    let v_size=valueOf(size);

    
    Ifc_mem_config#(sets, linewidth, 1) data_arr [v_ways]; // data array
    Ifc_mem_config#(sets, TAdd#(2, tagbits), 1) tag_arr [v_ways];// one extra valid bit
    for(Integer i=0;i<v_ways;i=i+1)begin
      data_arr[i]<-mkmem_config_h(False, "single"); // TODO parameterize arguments
      tag_arr[i]<-mkmem_config_h(False, "single");
    end

    FIFOF#(DCore_request#(paddr,respwidth)) ff_req_queue <- mkSizedFIFOF(2); 
    FIFOF#(DCore_response#(respwidth))ff_core_response <- mkSizedFIFOF(2);

    FIFOF#(DMem_read_request#(paddr)) ff_read_mem_request    <- mkSizedFIFOF(2);
    FIFOF#(DMem_read_response#(respwidth)) ff_read_mem_response  <- mkSizedFIFOF(2);

    interface core_req=interface Put
      method Action put(DCore_request#(paddr,respwidth) req);
        `ifdef perf
          wr_total_access<=1;
        `endif
        let {addr, fence, epoch, access, size, data} =req;
        Bit#(setbits) set_index=addr[v_setbits+v_blockbits+v_wordbits-1:v_blockbits+v_wordbits];
        ff_req_queue.enq(req);
        
        for(Integer i=0;i<v_ways;i=i+1)begin
          data_arr[i].read_request(set_index);
          tag_arr[i].read_request(set_index);
        end
        if (verbosity!=0) begin
		      $display($time,"\tDCACHE: Receiving request to address:%h Fence: %b epoch: %b index: %d \
access: %d size: %b data:%h", addr, fence, epoch, set_index,  access,  size,  data); 
		      $display($time,"\tDCACHE: Access Cache for Addr: %h Index: %d",addr,set_index); 
        end
      endmethod
    endinterface;
    interface core_resp = interface Get
      method ActionValue#(DCore_response#(respwidth)) get();
        ff_core_response.deq;
        return ff_core_response.first;
      endmethod
    endinterface;
    
    interface read_mem_req = interface Get
      method ActionValue#(DMem_read_request#(paddr)) get;
        ff_read_mem_request.deq;
        return ff_read_mem_request.first;
      endmethod
    endinterface;

    interface read_mem_resp= interface Put
     method Action put(DMem_read_response#(respwidth) resp);
        ff_read_mem_response.enq(resp);
     endmethod
    endinterface;


  endmodule
 

  (*synthesize*)
  module mkdcache(Ifc_l1dcache#(4, 8, 64, 4 ,32,4));
    let ifc();
    mkl1dcache _temp(ifc);
    return (ifc);
  endmodule
endpackage

