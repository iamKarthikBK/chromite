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

package icache_dm;
  import icache_types::*;
  import mem_config::*;
  import GetPut::*;
  import FIFOF::*;
  import BUtils ::*;  
  import DReg::*;
  import Assert::*;
  
  //parameters:
  // wordsize: number of bytes per word. This is what is responded back to the core.
  // blocksize: number of words per data line.
  // sets: number of sets within the cache.
  
  interface Ifc_icache_dm#(numeric type wordsize, numeric type blocksize,  numeric type sets,numeric
  type respwidth, numeric type paddr);
    interface Put#(ICore_request#(paddr)) core_req;
    interface Get#(ICore_response#(respwidth)) core_resp;
    interface Get#(IMem_request#(paddr)) mem_req;
    interface Put#(IMem_response#(respwidth)) mem_resp;
    `ifdef simulate
      interface Get#(Bit#(1)) meta;
    `endif
  endinterface

  (*conflict_free="rl_response_to_core,rl_request_to_memory"*)
//  (*preempts="get_io_response, check_hit_or_miss"*)
  module mkicache_dm#(function Bool is_IO(Bit#(paddr) addr, Bool cacheable), parameter Bool ramreg)
                                          (Ifc_icache_dm#(wordsize,blocksize,sets,respwidth, paddr))
  provisos(
            Mul#(wordsize, 8, _w),        // _w is the total bits in a word
            Mul#(blocksize, _w,linewidth),// linewidth is the total bits in a cache line
            Log#(wordsize,wordbits),      // wordbits is no. of bits to index a byte in a word
            Log#(blocksize, blockbits),   // blockbits is no. of bits to index a word in a block
            Log#(sets, setbits),          // setbits is the no. of bits used as index in BRAMs.
            Add#(wordbits,blockbits,_a),  // _a total bits to index a byte in a cache line.
            Add#(_a, setbits, _b),        // _b total bits for index+offset, 
            Add#(tagbits, _b, paddr),        // tagbits = 32-(wordbits+blockbits+setbits)
            Mul#(wordsize,8,word_len),    // word_len = number of bits in a word
            Div#(respwidth,word_len,num_words),//num_words=number of words fetched from memory in a
            //cycle
            // Provisos for mem_config. If the number of banks have changed then the following
            // provisos will have to be re-written.
            Add#(a__, TDiv#(linewidth, 8), linewidth),
            Mul#(TDiv#(TDiv#(linewidth, 8), TDiv#(TDiv#(linewidth, 8), 8)),
              TDiv#(TDiv#(linewidth, 8), 8), TDiv#(linewidth, 8)),
            Mul#(TDiv#(linewidth, 8), 8, linewidth),
            // following provisos required by compiler:
            Bits#(Tuple2#(Bit#(respwidth), Bool), c__),
            Add#(d__, 1, blocksize),
            Add#(e__, respwidth, linewidth),
            Mul#(respwidth, f__, linewidth)
            );
  
    let v_sets=valueOf(sets);
    let v_setbits=valueOf(setbits);
    let v_wordbits=valueOf(wordbits);
    let v_blockbits=valueOf(blockbits);
    let v_linewidth=valueOf(linewidth);
    let v_tagbits=valueOf(tagbits);
    let v_num_words=valueOf(num_words);
    let verbosity=`VERBOSITY;
    let v_paddr=valueOf(paddr);

    //Following function returns the info regarding word_position in line getting filled
    function Bit#(blocksize) fn_enable(Bit#(blockbits)word_index);
       Bit#(blocksize) write_enable ='h0; //
       for(Integer i=0;i<v_num_words;i=i+1)
         write_enable[word_index+fromInteger(i)]=1;
       return write_enable;
    endfunction

    Ifc_mem_config#(sets, linewidth, 8) data_arr <- mkmem_config_h(ramreg); // data array
    Ifc_mem_config#(sets, TAdd#(1, tagbits), 1) tag_arr <- mkmem_config_h(ramreg); // one extra valid bit
    
    FIFOF#(ICore_response#(respwidth))ff_core_response <- mkSizedFIFOF(2);
    FIFOF#(IMem_request#(paddr)) ff_mem_request    <- mkSizedFIFOF(2);
    FIFOF#(IMem_response#(respwidth)) ff_mem_response  <- mkSizedFIFOF(2);
    FIFOF#(ICore_request#(paddr)) ff_req_queue <- mkSizedFIFOF(2); 

    Reg#(Bool) rg_miss_ongoing <- mkReg(False);
    Wire#(RespState) wr_cache_state <- mkDWire(None);
    Wire#(RespState) wr_lb_state <- mkDWire(None);
    Wire#(Bool) wr_io_response <- mkDWire(False);

    Wire#(IMem_request#(paddr)) wr_miss_from_cache <- mkDWire(tuple3(0,0,0));
    `ifdef simulate
      Wire#(IMem_request#(paddr)) wr_miss_lb_cache <- mkDWire(tuple3(0,0,0));
    `endif

    Wire#(ICore_response#(respwidth)) wr_hit_cache <- mkDWire(tuple2(0,False));
    Wire#(ICore_response#(respwidth)) wr_hit_lb <- mkDWire(tuple2(0,False));
    Wire#(ICore_response#(respwidth)) wr_hit_io <- mkDWire(tuple2(0,False));

    `ifdef simulate
      FIFOF#(Bit#(1)) ff_meta <- mkSizedFIFOF(2);
    `endif

    Reg#(Bit#(TLog#(sets))) rg_fence_index <- mkReg(0);
    Reg#(Bool) rg_init <- mkReg(True);
    Reg#(Bool) rg_fence_stall <- mkReg(True);
    Reg#(Bit#(blocksize))rg_blockenable <- mkReg(0);
    Reg#(Bit#(blockbits))index<-mkReg(0);
    //linebuffer control
    FIFOF#(Tuple4#(Bit#(tagbits), Bit#(setbits),Bit#(blocksize), Bool)) ff_lb_control <- mkUGSizedFIFOF(2);
    Reg#(Tuple4#(Bit#(1), Bit#(linewidth), Bit#(blocksize), Bool)) rg_linebuff <- 
                                                                      mkReg(tuple4(0, 0, 0, False));
    Reg#(Bool) rg_deq_lb <- mkDReg(False);

    Reg#(Bit#(paddr)) rg_latest_address <- mkReg(0);

    // on reset we issue a fence instruction to initiliase the cache.
    rule initialize(rg_init);
      ff_req_queue.enq(tuple3(?,True,?));
      rg_init<=False;
    endrule

    rule rl_display_stuff;
      $display($time,"\tICACHE: Miss on going: ",fshow(rg_miss_ongoing));
    endrule


    //Fencing the cache
    // rule to fire only when there is not a pending fill to LB.
    // If this condition is not added then it is possible that LB populates the CACHE line after
    // being fenced which is wrong behavior
    rule fence_cache(tpl_2(ff_req_queue.first) && !ff_lb_control.notEmpty && rg_fence_stall);
       tag_arr.write_request(rg_fence_index,'d0);
       rg_fence_index<= rg_fence_index+1;
       if(verbosity>0)
         $display($time,"\tICACHE: Fence in progress. Index: %d",rg_fence_index);
       if(rg_fence_index==(fromInteger(v_sets-1))) begin
          ff_req_queue.deq;
          rg_fence_stall<=False;
          if(verbosity>1)begin
            $display($time,"\tICACHE Params:");
            $display($time,"\tv_sets: %d",v_sets);
            $display($time,"\tv_setbits: %d",v_setbits);
            $display($time,"\tv_wordbits: %d",v_wordbits);
            $display($time,"\tv_blockbits: %d",v_blockbits);
            $display($time,"\tv_tagbits: %d",v_tagbits);
            $display($time,"\tv_num_words: %d",v_num_words);
          end
       end
    endrule
    
    //Checking the data and tag arrays of the cache for a hit or miss.
    // This rule will fire for every request from the core that is not a Fence operation.
    rule check_hit_or_miss(!tpl_2(ff_req_queue.first) && !rg_miss_ongoing && ff_lb_control.notFull);
      //TODO: Should epochs be checked here also?
      let {request, fence, epoch} =ff_req_queue.first();
      Bit#(TAdd#(3,TAdd#(wordbits,blockbits)))block_offset=
                                                          (request[v_blockbits+v_wordbits-1:0])<<3;
      Bit#(blockbits) word_index=request[v_blockbits+v_wordbits-1:v_wordbits];
      Bit#(linewidth) dataline <- data_arr.read_response;
      Bit#(TAdd#(1, tagbits)) tag <- tag_arr.read_response;
      Bit#(tagbits) request_tag = request[v_paddr-1:v_paddr-v_tagbits];
      Bit#(1) valid=tag[v_tagbits];
      Bit#(tagbits) stored_tag=tag[v_tagbits-1:0];
      Bit#(setbits) set_index=request[v_setbits+v_blockbits+v_wordbits-1:v_blockbits+v_wordbits];

      `ifdef simulate
        dynamicAssert(data_arr.read_index==set_index,"Cache response is for wrong index");
      `endif

      if(verbosity!=0)begin
        $display($time,"\tICACHE: Check for Address:%h Valid: %b ReqTag: %h StoredTag: %h index: %d",
            request,valid,request_tag,stored_tag,set_index);
      end
      if(is_IO(request, True))begin
        $display($time,"\tICACHE: Cache received IO request for address: %h",request);
        wr_cache_state<=Miss;
        wr_miss_from_cache<=(tuple3(request,0,2));        
      end
      else if((valid==1) && (stored_tag==request_tag)) begin // hit in cache
        Bit#(respwidth) word_response = truncate(dataline>>block_offset); 
        wr_hit_cache<= tuple2(word_response, False);// word and no bus-error;
        wr_cache_state<=Hit;
        if(verbosity!=0)
          $display($time,"\tHIT IN CACHE for addr:%h data:%h",request,word_response);
      end
      else begin
        wr_cache_state<=Miss;
        wr_miss_from_cache<=  (tuple3(request,fromInteger(valueOf(blocksize)-1),2));        
        if(verbosity!=0)
            $display($time,"\tICACHE: Miss in Cache for addr: %h",request);
      end
    endrule

    // This rule will fire for every request from the core that is not a Fence operation.
    rule poll_on_lb(!tpl_2(ff_req_queue.first));
      
      // We first check if the requested word is in the line-buffer. This is done by checking the
      // if the tags match. While this means that the line-buffer should have the data
      // required, it might not be available unless it has been filled by the memory. We can confirm
      // this by checking the byte-enables which indicate which bytes of the line are available and
      // also confirm if the valid bit is set.

      let {lbvalid, lbdataline,lbenables,err} = rg_linebuff;
      let {lbtag,lbset,init_we, isIO}=ff_lb_control.first();
      let {request, fence, epoch}=ff_req_queue.first();

      Bit#(tagbits) request_tag = request[v_paddr-1:v_paddr-v_tagbits]; 
      let request_index=request[v_setbits+v_blockbits+v_wordbits-1:v_blockbits+v_wordbits];
      Bit#(blockbits) word_index=request[v_blockbits+v_wordbits-1:v_wordbits];
      Bit#(TAdd#(3,TAdd#(wordbits,blockbits)))block_offset=
                                                          (request[v_blockbits+v_wordbits-1:0])<<3;

      if(lbtag==request_tag && lbset==request_index && ff_lb_control.notEmpty) begin // hit in line-buffer
        if(verbosity!=0)
          $display($time,"\tICACHE: Polling LB Holds the line for address: %h",request);
        if(lbenables[word_index]!=1||lbvalid!=1) begin
          if(verbosity!=0)
            $display($time,"\tICACHE: Polling Miss. Word not found in LB for address: %h",request);
        end  
        else begin
          if(verbosity!=0)
              $display($time,"\tICACHE: Polling Hit. Word present in LB for address: %h",request);
          Bit#(respwidth) word_response = truncate(lbdataline>>block_offset); 
          wr_hit_lb<=(tuple2(word_response,err));// word and no bus-error;
          wr_lb_state<=Hit;
        end
      end
      else begin
        if(verbosity!=0)
          $display($time,"\tICACHE: Miss in LB for address: %h",request);
        wr_lb_state<=Miss;
        `ifdef simulate
          wr_miss_lb_cache<=(tuple3(request,fromInteger(valueOf(blocksize)-1),2));
        `endif
      end
    endrule

    rule rl_response_to_core(!tpl_2(ff_req_queue.first) && (wr_lb_state==Hit || wr_cache_state==Hit
        || wr_io_response));
      `ifdef simulate
        $display($time,"\tICACHE: Sending Response to the Core");
        dynamicAssert(!(wr_lb_state==Hit && wr_cache_state==Hit), "Hit in Both LB and Cache found");
      `endif

      if(wr_cache_state == Hit) begin
        ff_core_response.enq(wr_hit_cache);
        ff_req_queue.deq();
      end
      else if(wr_lb_state == Hit)begin
        ff_core_response.enq(wr_hit_lb);
        ff_req_queue.deq();
      end
      else if(wr_io_response)begin
        ff_core_response.enq(wr_hit_io);
        ff_req_queue.deq();
      end
      rg_miss_ongoing<=False;
      `ifdef simulate
        if(rg_miss_ongoing)
          ff_meta.enq(0);
        else
          ff_meta.enq(1);  
      `endif
    endrule

    rule rl_request_to_memory(wr_cache_state==Miss && wr_lb_state==Miss);
      rg_miss_ongoing<=True;
      `ifdef simulate
        $display($time,"\tICACHE: Sending Request to Memory: ",fshow(wr_miss_from_cache));
        dynamicAssert(rg_miss_ongoing==False,"Issuing a Memory request while one is ongoing");
        dynamicAssert(tpl_1(wr_miss_from_cache)==tpl_1(wr_miss_lb_cache),"Miss from LB and Cache for different\
addresses");
      `endif
      let {request, fence, epoch}=ff_req_queue.first();
      Bit#(tagbits) request_tag = request[v_paddr-1:v_paddr-v_tagbits]; 
      let request_index=request[v_setbits+v_blockbits+v_wordbits-1:v_blockbits+v_wordbits];
      Bit#(blockbits) word_index=request[v_blockbits+v_wordbits-1:v_wordbits];
      ff_mem_request.enq(wr_miss_from_cache);
      ff_lb_control.enq(tuple4(request_tag,request_index,fn_enable(word_index),
                                                          tpl_2(wr_miss_from_cache)==0));
    endrule
    
    //Capturing memory_response
    rule capture_memory_response(&(tpl_3(rg_linebuff))!=1 && ff_lb_control.notEmpty);
     
      Bit#(linewidth) mask = 0;
      let {word,err} = ff_mem_response.first;
      ff_mem_response.deq;
      if (verbosity!=0)
        $display($time,"\tICACHE: Receiving Memory Response. Word: %h err: %b",word,err);
      let {lbvalid, lbdataline,lbenables, err1} = rg_linebuff;
      let {lbtag,lbset, init_we, isIO}=ff_lb_control.first();
      Bit#(blocksize) temp = 0;
      if(rg_blockenable==0)
        temp=init_we;
      else
        temp=rg_blockenable;

      lbenables = lbenables|temp;

      if (verbosity!=0)
        $display($time,"\tICACHE: Lbenables changes to:%b",lbenables);

      if (verbosity!=0)
        $display($time,"\tICACHE: WE :%b",temp);

     //Each bit in write_enable register refers to corresponding word in block 
      
      for(Integer i=0;i<valueOf(blocksize);i=i+1)
      begin
            Bit#(respwidth) ex_we=duplicate(temp[i]);
            let v_word_len = valueOf(word_len);
            mask[((i*v_word_len)+(v_word_len-1)):i*v_word_len]=ex_we;
      end

      if (verbosity!=0)
        $display($time,"\tICACHE: MASK:%h",mask);

      Bit#(linewidth) y  = duplicate(word) ; 
      let new_word_line  = y & mask;
      Bit#(linewidth) x  = lbdataline|new_word_line;

      if(isIO) begin
        wr_hit_io<=tuple2(word,err);
        wr_io_response<=True;
        ff_lb_control.deq;
      end
      else begin
        rg_linebuff <= tuple4(1'b1,x,lbenables, err||err1);
        rg_blockenable <= {temp[valueOf(blocksize)-2:0],
                                                temp[valueOf(blocksize)-1]};
      end
      if(verbosity!=0)
        $display($time,"\tICACHE: Updating line_buffer:%h",x);

    endrule

    //Loading data into the cache from line_buffer
    rule upd_data_into_cache(&(tpl_3(rg_linebuff))==1 && (!ff_lb_control.notFull|| rg_fence_stall) && ff_lb_control.notEmpty  && !rg_deq_lb);
      let {lbtag,lbset,init_we}=ff_lb_control.first();
      tag_arr.write_request(lbset,{1,lbtag});//lbtag
      data_arr.write_request(lbset,truncate(tpl_2(rg_linebuff)));
      if(verbosity!=0)
        $display($time,"\tICACHE: loading set:%h with dataline %h and tag %h",
                                        lbset,tpl_2(rg_linebuff),lbtag);
      rg_deq_lb<=True;
    endrule
    rule deq_lb(rg_deq_lb && &(tpl_3(rg_linebuff))==1 && (!ff_lb_control.notFull|| rg_fence_stall) && ff_lb_control.notEmpty);
      ff_lb_control.deq;
      rg_blockenable<=0;
      rg_linebuff<=tuple4(0,0,0,False);
      Bit#(setbits) set_index=rg_latest_address[v_setbits+v_blockbits+v_wordbits-1:
                                                                            v_blockbits+v_wordbits];
      let {lbtag,lbset, init_we}=ff_lb_control.first();
      if (lbset==set_index) begin
        $display($time,"\tICACHE: Resending request to cache for index: %d",set_index);
        data_arr.read_request(set_index);
        tag_arr.read_request(set_index);
      end
    endrule

    interface core_req=interface Put
      method Action put(ICore_request#(paddr) req) if(!rg_init && !rg_fence_stall );
        // TODO check if epochs match. If they do not then drop the request.
        let {addr, fence, epoch} =req;
        if(fence)
          rg_fence_stall<=True;

        ff_req_queue.enq(req);
        Bit#(setbits) set_index=addr[v_setbits+v_blockbits+v_wordbits-1:v_blockbits+v_wordbits];
        data_arr.read_request(set_index);
        tag_arr.read_request(set_index);
        rg_latest_address<=addr;
        if (verbosity!=0)
		    $display($time,"\tICACHE: Receiving request to address:%h Fence: %b epoch: %b index: %d",
          addr, fence, epoch, set_index); 
        if(verbosity!=0)
		      $display($time,"\tICACHE: Access Cache for Addr: %h Index: %d",addr,set_index); 
        
      endmethod
    endinterface;

    interface core_resp = interface Get
      method ActionValue#(ICore_response#(respwidth)) get();
        ff_core_response.deq;
        return ff_core_response.first;
      endmethod
    endinterface;
    
    interface mem_req = interface Get
      method ActionValue#(IMem_request#(paddr)) get;
        ff_mem_request.deq;
        return ff_mem_request.first;
      endmethod
    endinterface;

    interface mem_resp= interface Put
     method Action put(IMem_response#(respwidth) resp);
        ff_mem_response.enq(resp);
     endmethod
    endinterface;
    `ifdef simulate 
      interface meta = interface Get
        method ActionValue#(Bit#(1)) get();
          ff_meta.deq;
          return ff_meta.first;
        endmethod
      endinterface;
    `endif 

  endmodule

endpackage
