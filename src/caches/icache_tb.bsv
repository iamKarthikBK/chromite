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
Author: Neel Gala,Deepa N. Sarma
Email id: neelgala@gmail.com
Details:
--------------------------------------------------------------------------------------------------
*/
package icache_tb;

  `define sets 64
  `define word_size 4
  `define block_size 8
  `define addr_width 32

  import icache_dm::*;
  import icache_types::*;
  import mem_config::*;
  import GetPut::*;
  import FIFOF::*;
  import BUtils ::*;
  import FIFOF ::*;
  import DReg::*;
  import RegFile::*;
  import device_common::*;

  function Bool isIO(Bit#(`addr_width ) addr);
    if( addr < 4096)
      return True;
    else
      return False;    
  endfunction

  interface Ifc_icache;
    interface Put#(ICore_request#(32)) core_req;
    interface Get#(ICore_response#(32)) core_resp;
    interface Get#(IMem_request#(32)) mem_req;
    interface Put#(IMem_response#(32)) mem_resp;
    `ifdef simulate
      interface Get#(Bit#(1)) meta;
    `endif
  endinterface

 (*synthesize*)
  module mkicache(Ifc_icache);
    Ifc_icache_dm#(`word_size , `block_size , `sets , 32 , `addr_width ) icache <- mkicache_dm(isIO);
    interface core_req=icache.core_req;
    interface core_resp=icache.core_resp;
    interface mem_req=icache.mem_req;
    interface mem_resp=icache.mem_resp;
    `ifdef simulate
      interface meta=icache.meta;
    `endif
  endmodule

  (*synthesize*)
  module mkicache_tb(Empty);

  Ifc_icache icache <- mkicache();
  Reg#(Bit#(32)) index<- mkReg(0);
  Reg#(Bit#(32)) e_index<- mkReg(0);
  Reg#(Maybe#(IMem_request#(32))) mem_req<- mkReg(tagged Invalid);
  Reg#(Bit#(8)) rg_burst_count <- mkReg(0);

  FIFOF#(Bit#(36)) ff_req <- mkSizedFIFOF(32);
  `ifdef simulate
    FIFOF#(Bit#(1)) ff_meta <- mkSizedFIFOF(32);
  `endif
  RegFile#(Bit#(20), Bit#(36)) stim <- mkRegFileFullLoad("test.mem");
  RegFile#(Bit#(20), Bit#(1))  e_meta <- mkRegFileFullLoad("gold.mem");
  RegFile#(Bit#(20), Bit#(32)) data <- mkRegFileFullLoad("data.mem");
    
  let verbosity=`VERBOSITY;

  rule core_req;
    let stime<-$stime;
    if(stime>=660)begin
      let req=stim.sub(truncate(index));
      Bit#(4) control = truncateLSB(req);
      if(control[2]==0)begin // if input is delayed
        if(req!=0)begin
          icache.core_req.put(tuple3(truncate(req),unpack(control[1]),0));
          index<=index+1;
          $display($time,"\tTB: Sending core request for addr: %h",req);
        end
        if(control[1]!=1'b1)begin
          ff_req.enq(req);
          `ifdef simulate
            ff_meta.enq(e_meta.sub(truncate(index)));
          `endif
        end
      end
      else
        index<=index+1;
    end
  endrule

  rule end_sim;
    if(ff_req.first==0)
      $finish(0);
    $display("\n");
  endrule

  rule core_resp;
    let resp <- icache.core_resp.get();

    let req = ff_req.first;
    let expected_data=data.sub(truncate(req));
  
    ff_req.deq();

    `ifdef simulate
      let meta <- icache.meta.get();
      let expected_meta=ff_meta.first();
      ff_meta.deq();
      if(expected_meta!=meta)begin
        $display($time,"\tTB: Meta does not match for Req: %h",req);
        $display($time,"\tTB: Expected Meta: %b Received Meta:%b", expected_meta,meta);
        $finish(0);
    end
    `endif
    if(expected_data!=tpl_1(resp))begin
        $display($time,"\tTB: Output from cache is wrong for Req: %h",req);
        $display($time,"\tTB: Expected: %h, Received: %h",expected_data,resp);
        $finish(0);
    end
    else
        $display($time,"\tTB: Core received correct response: ",fshow(resp)," For req: %h",req);
  endrule

  rule mem_request(mem_req matches tagged Invalid);
    let req<- icache.mem_req.get;
    mem_req<=tagged Valid req;
    $display($time,"\tTB: Memory request",fshow(req));
  endrule

  rule mem_resp(mem_req matches tagged Valid .req);
    let {addr, burst, size}=req;
    if(rg_burst_count == burst) begin
      rg_burst_count<=0;
      mem_req<=tagged Invalid;
    end
    else begin
      rg_burst_count<=rg_burst_count+1;
      mem_req <= tagged Valid tuple3(axi4burst_addrgen(burst,size,2,addr),burst,size); // parameterize
    end
    let dat=data.sub(truncate(addr));
    icache.mem_resp.put(tuple2(dat,False));
    $display($time,"\tTB: Memory responding with: %h ",dat);
  endrule

endmodule

endpackage
