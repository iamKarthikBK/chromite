/* 
Copyright (c) 2013, IIT Madras All rights reserved.

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
package cclass_bare;

  //=================== Interface and module for a cclass- master on the AXI4 fabric ============= //
  // project related imports
	import Semi_FIFOF:: *;
  import AXI4_Lite_Types::*;
  import AXI4_Lite_Fabric::*;
	import AXI4_Types:: *;
	import AXI4_Fabric:: *;
  import Tilelink_lite_Types::*;
  import riscv:: * ;
  import common_types:: * ;
  import FIFOF::*;
  import l1icache::*;
  `include "common_params.bsv"

  `define Mem_master_num 0
  `define Fetch_master_num 1

  // package imports
	import Connectable 				:: *;
  import GetPut:: *;
  import BUtils::*;

  `define sets 64
  `define wordsize 4
  `define blocksize 8
	`define ways 4
	`define repl PLRU
  `define fbsize 4

  export Ifc_cclass_axi4    (..);
  export mkcclass_axi4;
  export DumpType (..);

  
 // function Bool isIO(Bit#(PADDR) addr, Bool cacheable);
 //   if(!cacheable)
 // 	  return True;
 //   else
 // 	  return False;
 // endfunction


//  (*synthesize*)
//  module mkicache(Ifc_l1icache#(`wordsize, `blocksize, `sets, `ways, PADDR, `fbsize, 3 ));
//     let ifc();
//	 mkl1icache#(isIO,"RANDOM") _temp(ifc);
//	 return (ifc);
//  endmodule

  
  typedef enum {Request, Response} TxnState deriving(Bits, Eq, FShow);
  interface Ifc_cclass_axi4;
		interface AXI4_Master_IFC#(PADDR, XLEN, USERSPACE) master_d;
		interface AXI4_Master_IFC#(PADDR, XLEN, USERSPACE) master_i;
    interface Put#(Bit#(1)) sb_clint_msip;
    interface Put#(Bit#(1)) sb_clint_mtip;
    interface Put#(Bit#(64)) sb_clint_mtime;
    interface Put#(Bit#(1)) sb_externalinterrupt;
    `ifdef rtldump
      interface Get#(DumpType) io_dump;
    `endif
  endinterface: Ifc_cclass_axi4

  (*synthesize*)
  module mkcclass_axi4(Ifc_cclass_axi4);
    Ifc_riscv riscv <- mkriscv();
		AXI4_Master_Xactor_IFC #(PADDR, XLEN, USERSPACE) fetch_xactor <- mkAXI4_Master_Xactor;
		AXI4_Master_Xactor_IFC #(PADDR, XLEN, USERSPACE) memory_xactor <- mkAXI4_Master_Xactor;
    Reg#(TxnState) fetch_state<- mkReg(Request);
    Reg#(TxnState) memory_state<- mkReg(Request);
    Reg#(CoreRequest) memory_request <- mkReg(unpack(0));

    FIFOF#(Bit#(3))  ff_epoch <-mkFIFOF;
    Integer verbosity = `VERBOSITY ;

//	  let icache<-mkicache;
//	  mkConnection(riscv.inst_request, icache.core_req); //icache integration
//	  mkConnection(icache.core_resp, riscv.inst_response); // icache integration
//    
//    rule drive_constants;
//      icache.cache_enable(True);
//    endrule
//
//	  rule handle_icache_request;
//	  	let {inst_addr, burst_len, burst_size} <- icache.read_mem_req.get;
//	  	AXI4_Rd_Addr#(PADDR, 0) icache_request = AXI4_Rd_Addr {araddr: inst_addr , aruser: ?, arlen: 7, 
//	  	arsize: 2, arburst: 'b10, arid:`Fetch_master_num};
//	    fetch_xactor.i_rd_addr.enq(icache_request);
//	  	if(verbosity!=0)
//	  	  $display($time, "\ticache: icache Requesting ", fshow(icache_request));
//	  endrule
//
//	  rule handle_fabric_resp;
//	    let fab_resp <- pop_o (fetch_xactor.o_rd_data);
//	  	Bool bus_error = !(fab_resp.rresp==AXI4_OKAY);
//      icache.read_mem_resp.put(tuple3(truncate(fab_resp.rdata), fab_resp.rlast, bus_error));
//	  	if(verbosity!=0)
//	  	  $display($time, "\ticache: icache receiving Response ", fshow(fab_resp));
//	  endrule	 
	

     rule handle_fetch_request(fetch_state == Request) ;
	    let {inst_addr, fence, epoch, prefetch} <- riscv.inst_request.get;
			AXI4_Rd_Addr#(PADDR, 0) read_request = AXI4_Rd_Addr {araddr: truncate(inst_addr), aruser: ?, 
            arlen: 0, arsize: 2, arburst: 'b01, arid:`Fetch_master_num}; // arburst: 00-FIXED 01-INCR 10-WRAP
			fetch_xactor.i_rd_addr.enq(read_request);	
      ff_epoch.enq(epoch);   	
      fetch_state<= Response;
      if(verbosity!=0)
        $display($time, "\tCORE: Fetch Request ", fshow(read_request));
    endrule
    rule handle_fetch_response(fetch_state == Response);
			let response <- pop_o (fetch_xactor.o_rd_data);	
			Bool bus_error = !(response.rresp==AXI4_OKAY);
      riscv.inst_response.put(tuple3(truncate(response.rdata), bus_error,ff_epoch.first));
      ff_epoch.deq;
      fetch_state<= Request;
      if(verbosity!=0)
        $display($time, "\tCORE: Fetch Response ", fshow(response));
    endrule

    
    // if its a fence instruction, the request is simply stored in memory_request register and is not
	  // latched on to the bus. This is done because we are only concerned about access_type being 
	  // propagated to mem_wb stage.
    rule handle_memory_request(memory_state ==  Request);
      //let {address, data, access, size, sign}<- riscv.memory_request.get;
      let {req,epoch}<- riscv.memory_request.get;
      let address=req.address;
      let data=req.memory_data;
      let access=req.mem_type;
      let size=req.transfer_size;
      let sign=req.signextend;
      memory_request<= tuple4(address, access, size, sign);
	    if(access != Fence && access != FenceI) begin
        if(size==0)
          data=duplicate(data[7:0]);
        else if(size==1)
          data=duplicate(data[15:0]);
        else if(size==2)
          data=duplicate(data[31:0]);
		  	Bit#(TDiv#(XLEN, 8)) write_strobe=size==0?'b1:size==1?'b11:size==2?'hf:'1;
        Bit#(TAdd#(1, TDiv#(XLEN, 32))) byte_offset = truncate(address);
		  	if(size!=3)begin			// 8-bit write;
		  		write_strobe=write_strobe<<byte_offset;
		  	end
        if(access != Store) begin
          AXI4_Rd_Addr#(PADDR, 0) read_request = AXI4_Rd_Addr {araddr: truncate(address), aruser: 0, arlen: 0, 
              arsize: zeroExtend(size), arburst:'b01, arid:`Mem_master_num}; //arburst: 00-FIXED 01-INCR 10-WRAP
   	     		memory_xactor.i_rd_addr.enq(read_request);	
          if(verbosity!=0)
            $display($time, "\tCORE: Memory Read Request ", fshow(read_request));
        end
        else begin
		  	   AXI4_Wr_Addr#(PADDR, 0) aw = AXI4_Wr_Addr {awaddr: truncate(address), awuser:0, awlen: 0, 
              awsize: zeroExtend(size), awburst: 'b01, awid:`Mem_master_num}; //arburst: 00-FIXED 01-INCR 10-WRAP
  	  		let w  = AXI4_Wr_Data {wdata: data, wstrb: write_strobe, wlast:True, wid:`Mem_master_num};
          if(verbosity!=0)begin
            $display($time, "\tCORE: Memory write Request ", fshow(aw));
            $display($time, "\tCORE: Memory write Request ", fshow(w));
          end
	    		memory_xactor.i_wr_addr.enq(aw);
		    	memory_xactor.i_wr_data.enq(w);
        end
      end
      memory_state<= Response;
    endrule
    
	// Rule to handle memory response of Load and Atomic type instr 
    rule handle_memoryRead_response(memory_state == Response && (tpl_2(memory_request) == Load 
                                                                || tpl_2(memory_request) ==Atomic));
      let {address, access, size, sign}=  memory_request;
			let response <- pop_o (memory_xactor.o_rd_data);	
			let bus_error = !(response.rresp==AXI4_OKAY);
      let rdata=response.rdata;
      if(size==0)
          rdata=sign==1?signExtend(rdata[7:0]):zeroExtend(rdata[7:0]);
      else if(size==1)
          rdata=sign==1?signExtend(rdata[15:0]):zeroExtend(rdata[15:0]);
      else if(size==2)
          rdata=sign==1?signExtend(rdata[31:0]):zeroExtend(rdata[31:0]);
  		riscv.memory_response.put(tagged Valid tuple3(rdata, {pack(bus_error),0}, access));
      if(verbosity!=0)
        $display($time, "\tCORE: Memory Read Response ", fshow(response));
      memory_state<= Request;
    endrule


	  // Rule to hande memory response of Store type instr
	  rule handle_memoryWrite_response(memory_state == Response && tpl_2(memory_request) == Store);
      let {address, access, size, sign}=  memory_request;
	  	let response<-pop_o(memory_xactor.o_wr_resp);
	  	let bus_error = !(response.bresp==AXI4_OKAY);
	  	riscv.memory_response.put(tagged Valid tuple3(0,  {pack(bus_error),0}, access));
      if(verbosity!=0)
        $display($time, "\tCORE: Memory Write Response ", fshow(response));
      memory_state<= Request;
    endrule

      
	  // rule to handle fence reponse.Contents of memory_request is sent back. 
	  rule handle_fence_response(memory_state == Response && (tpl_2(memory_request) == Fence ||
                                                                  tpl_2(memory_request) == FenceI));
	  	let {address, access, size, sign}=  memory_request;
	  	riscv.memory_response.put(tagged Valid tuple3(0, 0, access)); // data is dont care, bus error is false.
	  	memory_state <= Request;
	  	if(verbosity!=0)
	  		$display($time, "\tCORE: Data memory serviced fence request");
	  endrule

    interface sb_clint_msip = interface Put
  	  method Action put(Bit#(1) intrpt);
        riscv.clint_msip(intrpt);
      endmethod
    endinterface;
    interface sb_clint_mtip= interface Put
      method Action put(Bit#(1) intrpt);
        riscv.clint_mtip(intrpt);
      endmethod
    endinterface;
    interface sb_clint_mtime= interface Put
  		method Action put (Bit#(64) c_mtime);
        riscv.clint_mtime(c_mtime);
      endmethod
    endinterface;
    interface sb_externalinterrupt = interface Put
      method Action put(Bit#(1) intrpt);
        riscv.set_external_interrupt(intrpt);
      endmethod
    endinterface;
		interface master_i= fetch_xactor.axi_side;
		interface master_d= memory_xactor.axi_side;
    `ifdef rtldump
      interface io_dump=riscv.dump;
    `endif
  endmodule: mkcclass_axi4

endpackage
