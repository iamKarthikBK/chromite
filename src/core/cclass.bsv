/* 
Copyright (c) 2013, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.  
* Redistributions in binary form must reproduce the above copyright notice, this list of 
  conditions and the following disclaimer in the documentation and / or other materials provided 
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

Author : Neel Gala
Email id : neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
package cclass;

  //=================== Interface and module for a cclass - master on the AXI4 fabric ============= //
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
  import globals::*;
  import cache_types :: *;
  import Assert ::*;
`ifdef icache
  import imem::*;
`endif
`ifdef dcache
  import dmem::*;
`endif
`ifdef supervisor
  `ifdef RV64
    import ptwalk_rv64::*;
  `else
    import ptwalk_rv32::*;
  `endif
`endif
`ifdef branch_speculation
  import bimodal :: * ;
`endif
  `include "common_params.bsv"
  `include "Logger.bsv"

  `define Mem_master_num 0
  `define Fetch_master_num 1
  `define IO_master_num 2

  // package imports
	import Connectable 				:: *;
  import GetPut:: *;
  import BUtils::*;

  `ifdef supervisor
    typedef enum {None, IWalk, DWalk} PTWState deriving(Bits, Eq, FShow);
  `endif

    typedef enum {Request, Response} TxnState deriving(Bits, Eq, FShow);
  interface Ifc_cclass_axi4;
		interface AXI4_Master_IFC#(`paddr, ELEN, USERSPACE) master_d;
		interface AXI4_Master_IFC#(`paddr, ELEN, USERSPACE) master_i;
  `ifdef cache_control
    interface AXI4_Master_IFC#(`paddr, ELEN, USERSPACE) master_io;
  `endif
    interface Put#(Bit#(1)) sb_clint_msip;
    interface Put#(Bit#(1)) sb_clint_mtip;
    interface Put#(Bit#(64)) sb_clint_mtime;
    interface Put#(Bit#(1)) sb_externalinterrupt;
  `ifdef rtldump
    interface Get#(DumpType) io_dump;
  `endif
  endinterface : Ifc_cclass_axi4

  (*synthesize*)
  `ifdef dcache
    `ifdef icache
      (*preempts="handle_dmem_nc_request, handle_imem_nc_request"*)
    `endif
  `endif
  `ifdef supervisor
    `ifdef icache
      (*preempts="dtlb_req_to_ptwalk, itlb_req_to_ptwalk"*)
    `endif
    (*preempts="core_req_to_dmem, ptwalk_request_to_dcache"*)
  `endif
  (*conflict_free="connect_instruction_req,connect_ras_training"*)
  module mkcclass_axi4(Ifc_cclass_axi4);
    String core = "";
    let vaddr = valueOf(`vaddr);
    let paddr = valueOf(`paddr);
    Ifc_riscv riscv <- mkriscv();
  `ifdef branch_speculation
    Ifc_bimodal bpu <- mkbimodal();
  `endif
  `ifdef supervisor
  `ifdef RV64
    Ifc_ptwalk_rv64#(`asidwidth) ptwalk <- mkptwalk_rv64;
  `else
    Ifc_ptwalk_rv32#(`asidwidth) ptwalk <- mkptwalk_rv32;
  `endif
    Reg#(PTWState) rg_ptw_state <- mkReg(None);
  `endif
		AXI4_Master_Xactor_IFC #(`paddr, ELEN, USERSPACE) fetch_xactor <- mkAXI4_Master_Xactor;
		AXI4_Master_Xactor_IFC #(`paddr, ELEN, USERSPACE) memory_xactor <- mkAXI4_Master_Xactor;
`ifdef cache_control
		AXI4_Master_Xactor_IFC #(`paddr, ELEN, USERSPACE) io_xactor <- mkAXI4_Master_Xactor;
    Wire#(AXI4_Rd_Data#(ELEN, USERSPACE)) wr_io_read_response <- mkWire();
  `ifdef dcache
    Reg#(Bit#(8)) rg_burst_count <- mkReg(0);
    Reg#(Bit#(TLog#(TMul#(TMul#(`dwords, 8),`dblocks)))) rg_shift_amount <- mkReg(`dwords * 8 );
  `endif
`endif
    FIFOF#(Tuple2#(Bit#(3), Bit#(1))) ff_rd_epochs <- mkSizedFIFOF(6);

    FIFOF#(Bit#(`iesize))  ff_epoch <- mkSizedFIFOF(4);
    let curr_priv = riscv.curr_priv;

  `ifdef cache_control
	  rule handle_nc_resp;
	    let fab_resp <- pop_o (io_xactor.o_rd_data);
      wr_io_read_response <= fab_resp;
    endrule
  `endif
  `ifdef icache
	  Ifc_imem imem <- mkimem;
	  mkConnection(imem.core_resp, riscv.inst_response); // imem integration

    rule connect_instruction_req;
      let req <- riscv.inst_request;
      imem.core_req.put(req.icache_req);
      if( `ifdef supervisor !req.icache_req.sfence `endif && !req.icache_req.fence)
        bpu.prediction_req(PredictionRequest{pc       : req.icache_req.address,
                                             fence    : req.icache_req.fence
                          `ifdef compressed ,discard  : req.discard `endif });
    endrule

  `ifdef branch_speculation
    mkConnection(riscv.prediction_response, bpu.prediction_response);
    rule connect_prediction;
      riscv.predicted_pc(bpu.predicted_pc);
    endrule
    rule connect_bpu_training;
      bpu.train_bpu(riscv.train_bpu);
    endrule
    `ifdef ras
      rule connect_ras_training;
        bpu.train_ras(riscv.train_ras);
      endrule
      rule connect_ras_push;
        bpu.ras_push(riscv.ras_push);
      endrule
    `endif
  `endif

  `ifdef supervisor
    rule tlb_csr_info;
      imem.satp_from_csr.put(riscv.csr_satp);
      imem.curr_priv.put(curr_priv);
    endrule
  `endif
    rule drive_constants;
		  imem.cache_enable(unpack(riscv.mv_cacheenable[0]));
    endrule

	  rule handle_imem_line_request;
	  	let request <- imem.read_mem_req.get;
	  	AXI4_Rd_Addr#(`paddr, 0) imem_request = AXI4_Rd_Addr {araddr : truncate(request.address), 
        aruser: ?, arlen : request.burst_len, arsize : request.burst_size, arburst : 'b10, 
        arid : `Fetch_master_num, arprot:{1'b1, 1'b0, curr_priv[1]} }; // arburst : 00 - FIXED 01 - INCR 10 - WRAP
	    fetch_xactor.i_rd_addr.enq(imem_request);
	  	`logLevel( core, 1, $format("CORE : IMEM Line Requesting ", fshow(imem_request)))
	  endrule

	  rule handle_imem_line_resp;
	    let fab_resp <- pop_o (fetch_xactor.o_rd_data);
	  	Bool bus_error = !(fab_resp.rresp == AXI4_OKAY);
      imem.read_mem_resp.put(ICache_mem_response{data   : truncate(fab_resp.rdata), 
                                                 last   : fab_resp.rlast, 
                                                 err    : bus_error});
	  	`logLevel( core, 1, $format("CORE : IMEM Line Response ", fshow(fab_resp)))
	  endrule
	  
    rule handle_imem_nc_request;
	  	let request <- imem.nc_read_req.get;
	  	AXI4_Rd_Addr#(`paddr, 0) imem_request = AXI4_Rd_Addr {araddr : truncate(request.address), 
        aruser: ?, arlen : 0, arsize : 2, arburst : 'b01, 
        arid : 1, arprot:{1'b1, 1'b0, curr_priv[1]} }; // arburst : 00 - FIXED 01 - INCR 10 - WRAP
	    io_xactor.i_rd_addr.enq(imem_request);
	  	`logLevel( core, 1, $format("CORE : IMEM IO Requesting ", fshow(imem_request)))
      `ifdef ASSERT
        dynamicAssert(request.burst_len==0 && request.burst_size==2, "ICache NC request is wierd");
      `endif
	  endrule

    rule handle_imem_nc_read_response(wr_io_read_response.rid == 1);
	  	Bool bus_error = !(wr_io_read_response.rresp == AXI4_OKAY);
      imem.nc_read_resp.put(ICache_mem_response{data  : truncate(wr_io_read_response.rdata), 
                                                last  : wr_io_read_response.rlast, 
                                                err   : bus_error});
      `logLevel( core, 1, $format("CORE : IMEM IO Response ", fshow(wr_io_read_response)))
	  endrule

  `else  // if icache is disabled at compile time
  
    rule handle_fetch_request ;
	    let request <- riscv.inst_request;
      if(vaddr>paddr) begin
        Bit#(TSub#(`vaddr,`paddr)) upperbits = request.icache_req.address[vaddr - 1:paddr];
       if(upperbits != 0)
          request.icache_req.address = 0;
      end
			AXI4_Rd_Addr#(`paddr, 0) read_request = AXI4_Rd_Addr {
            araddr : truncate(request.icache_req.address), aruser: ?, arlen : 0, arsize : 2, 
            arburst : 'b01, arid : `Fetch_master_num, arprot:{1'b1, 1'b0, curr_priv[1]}}; // arburst : 00 - FIXED 01 - INCR 10 - WRAP
			fetch_xactor.i_rd_addr.enq(read_request);	
      ff_epoch.enq(request.icache_req.epochs);   	
      `logLevel( core, 1, $format("CORE : Fetch Request ", fshow(read_request)))
    endrule
    rule handle_fetch_response;
			let response <- pop_o (fetch_xactor.o_rd_data);	
			Bool bus_error = !(response.rresp == AXI4_OKAY);
      riscv.inst_response.put(FetchResponse{instr : truncate(response.rdata), 
                                            trap  : bus_error, 
                                            cause : `Inst_access_fault, 
                                            epochs: ff_epoch.first});
      ff_epoch.deq;
      `logLevel( core, 1, $format("CORE : Fetch Response ", fshow(response)))
    endrule
  `endif

  `ifdef dcache
    let dmem <- mkdmem;
    rule core_req_to_dmem;
      let req <- riscv.memory_request.get;
      dmem.core_req.put(req);
    endrule
	  mkConnection(dmem.core_resp, riscv.memory_response); // dmem integration
  `ifdef supervisor
    rule dtlb_csr_info;
      dmem.satp_from_csr.put(riscv.csr_satp);
      dmem.curr_priv.put(curr_priv);
      dmem.mstatus_from_csr.put(riscv.csr_mstatus);
    endrule
  `endif
    rule drive_dmem_enable;
		  dmem.cache_enable(unpack(riscv.mv_cacheenable[1]));
    endrule
	  
    rule dirve_storebuffer_empyty;
      riscv.storebuffer_empty(dmem.storebuffer_empty);
      riscv.cache_is_available(dmem.cache_available);
    endrule

    rule initiate_store(tpl_2(riscv.initiate_store));
      dmem.perform_store(pack(tpl_1(riscv.initiate_store)));
    endrule
    rule connect_store_status;
      riscv.store_is_cached(dmem.cacheable_store);
    endrule

    Reg#(Maybe#(AXI4_Rd_Addr#(`paddr, 0))) rg_read_line_req <- mkReg(tagged Invalid);
    Reg#(Maybe#(Bit#(`paddr))) wr_write_req <- mkReg(tagged Invalid);

    // Currently it is possible that the cache can generate a write - request followed by a
    // read - request, but the fabric (due to contention) latches the read first to the slave followed
    // by the write - req. This could lead to wrong behavior. To avoid this it is necessary to ensure
    // that if a write - request has been initiated no read - requests should be latched unless the
    // write - response has arrived.
    // The contraint is fullilled using the register wr_write_req which holds the current address of
    // the line being written to the fabric on a eviction
    rule handle_dmem_line_read_request(rg_read_line_req matches tagged Invalid);
      Bool perform_req = True;
	  	let req <- dmem.read_mem_req.get;
	  	AXI4_Rd_Addr#(`paddr, 0) dmem_request = AXI4_Rd_Addr {araddr : truncate(req.address), aruser: ?, 
        arlen : req.burst_len, arsize : req.burst_size, arburst : 'b10, arid : `Mem_master_num 
        ,arprot:{1'b0, 1'b0, curr_priv[1]} }; // arburst : 00 - FIXED 01 - INCR 10 - WRAP
      if(wr_write_req matches tagged Valid .waddr)
        if((waddr>>(`dwords + `dblocks )) == (req.address>>(`dwords + `dblocks ) ))begin
          perform_req = False;
          rg_read_line_req <= tagged Valid dmem_request;
        end
      if(perform_req)  begin
   	    memory_xactor.i_rd_addr.enq(dmem_request);
        `logLevel( core, 1, $format("CORE : DMEM Line Requesting ", fshow(dmem_request)))
      end
	  endrule

    rule handle_delayed_read(rg_read_line_req matches tagged Valid .r &&& wr_write_req matches tagged
                                                                              Invalid);
  	  memory_xactor.i_rd_addr.enq(r);
      `logLevel( core, 1, $format("CORE : DMEM Delayed Line Requesting ", fshow(r)))
      rg_read_line_req <= tagged Invalid;
    endrule

	  rule handle_dmem_line_resp;
	    let fab_resp <- pop_o (memory_xactor.o_rd_data);
	  	Bool bus_error = !(fab_resp.rresp == AXI4_OKAY);
      dmem.read_mem_resp.put(DCache_mem_readresp{data:truncate(fab_resp.rdata), 
                                                 last:fab_resp.rlast, 
                                                 err :bus_error});
      `logLevel( core, 1, $format("CORE : DMEM Line Response ", fshow(fab_resp)))
	  endrule

    rule handle_dmem_line_write_request(rg_burst_count == 0);
      let req = dmem.write_mem_req_rd;
		  AXI4_Wr_Addr#(`paddr, 0) aw = AXI4_Wr_Addr {awaddr : truncate(req.address), awuser : 0, 
        awlen : req.burst_len, awsize : zeroExtend(req.burst_size[1 : 0]), awburst : 'b01, 
        awid : `Mem_master_num, awprot:{1'b0, 1'b0, curr_priv[1]} }; // arburst : 00 - FIXED 01 - INCR 10 - WRAP

  	  let w  = AXI4_Wr_Data {wdata : truncate(req.data), wstrb : '1, wlast : False, 
                             wid : `Mem_master_num};
      rg_burst_count <= rg_burst_count + 1;
	    memory_xactor.i_wr_addr.enq(aw);
		  memory_xactor.i_wr_data.enq(w);
      `logLevel( core, 1, $format("CORE : DMEM Line Write Addr : Request ", fshow(aw)))
      wr_write_req <= tagged Valid req.address;
    endrule
    rule send_burst_write_data(rg_burst_count != 0);
      Bool last = rg_burst_count == fromInteger(`dblocks - 1 );
      let req = dmem.write_mem_req_rd;
      req.data = req.data >> rg_shift_amount;
  	  let w  = AXI4_Wr_Data {wdata : truncate(req.data), wstrb : '1, wlast : last, 
                             wid : `Mem_master_num};
      Bit#(TAdd#(TAdd#(TLog#(`dwords), 1), 3)) shift = {`dwords, 3'b0};
      if(last) begin
        rg_burst_count <= 0;
        rg_shift_amount <= (`dwords * 8);
        wr_write_req <= tagged Invalid;
        dmem.write_mem_req_deq;
      end
      else begin
        rg_shift_amount <= rg_shift_amount + (`dwords * 8);
        rg_burst_count <= rg_burst_count + 1;
      end
		  memory_xactor.i_wr_data.enq(w);
      `logLevel( core, 1, $format("CORE : DMEM Write Data: %h rg_burst_count: %d last: %b \
rg_shift_amount:%d", req.data, rg_burst_count, last, rg_shift_amount))
    endrule

    rule handle_dmem_line_write_resp;
      let response <- pop_o(memory_xactor.o_wr_resp);
	  	let bus_error = !(response.bresp == AXI4_OKAY);
	  	dmem.write_mem_resp.put(bus_error);
      `logLevel( core, 1, $format("CORE : DMEM Write Line Response ", fshow(response)))
    endrule
	  
    rule handle_dmem_nc_request;
	  	let req <- dmem.nc_read_req.get;
	  	AXI4_Rd_Addr#(`paddr, 0) dmem_request = AXI4_Rd_Addr {araddr : truncate(req.address), 
                    aruser: ?, arlen : 0, arsize : zeroExtend(req.burst_size[1 : 0]), 
                    arburst : 'b01, arid : 2, arprot:{1'b0, 1'b0, curr_priv[1]} }; // arburst : 00 - FIXED 01 - INCR 10 - WRAP
	    io_xactor.i_rd_addr.enq(dmem_request);
      `logLevel( core, 1, $format("CORE : DMEM IO - Read Requesting ", fshow(dmem_request)))
	  endrule

    rule handle_dmem_nc_read_response(wr_io_read_response.rid == 2);
	  	Bool bus_error = !(wr_io_read_response.rresp == AXI4_OKAY);
      dmem.nc_read_resp.put(DCache_mem_readresp{data:truncate(wr_io_read_response.rdata), 
                                                last:wr_io_read_response.rlast, 
                                                err :bus_error});
      `logLevel( core, 1, $format("CORE : DMEM IO Response ", fshow(wr_io_read_response)))
	  endrule

    rule handle_dmem_nc_write_request;
      let req <- dmem.nc_write_req.get;
      if(req.burst_size == 0)
        req.data = duplicate(req.data[7 : 0]);
      else if(req.burst_size == 1)
        req.data = duplicate(req.data[15 : 0]);
      else if(req.burst_size == 2)
        req.data = duplicate(req.data[31 : 0]);
  	  Bit#(TDiv#(ELEN, 8)) write_strobe = req.burst_size == 0?'b1 : 
                                          req.burst_size == 1?'b11 : 
                                          req.burst_size == 2?'hf : '1;

      Bit#(TAdd#(1, TDiv#(ELEN, 32))) byte_offset = truncate(req.address);
  	  if(req.burst_size != 3)// 8 - bit write;
  	  	write_strobe = write_strobe<<byte_offset;
		  AXI4_Wr_Addr#(`paddr, 0) aw = AXI4_Wr_Addr {awaddr : truncate(req.address), awuser : 0, 
          awlen : 0, awsize : zeroExtend(req.burst_size[1 : 0]), awburst : 'b01, 
          awid : `IO_master_num, awprot:{1'b0, 1'b0, curr_priv[1]} }; // arburst : 00 - FIXED 01 - INCR 10 - WRAP

  	  let w  = AXI4_Wr_Data {wdata : req.data, wstrb : write_strobe, wlast : True, wid : `Mem_master_num};
      `logLevel( core, 1, $format("CORE : IO Memory write Request ", fshow(aw)))
      `logLevel( core, 1, $format("CORE : IO Memory write Request ", fshow(w)))
	    io_xactor.i_wr_addr.enq(aw);
		  io_xactor.i_wr_data.enq(w);
    endrule
    rule handle_nc_write_resp;
      let response <- pop_o(io_xactor.o_wr_resp);
	  	let bus_error = !(response.bresp == AXI4_OKAY);
	  	riscv.write_resp(tagged Valid tuple2(pack(bus_error),?));
      `logLevel( core, 1, $format("CORE : IO Memory Write Response ", fshow(response)))
    endrule

  `else
    rule handle_memory_read_request;
      let {addr, epoch, access}<- riscv.memory_read_request.get;
      if(vaddr>paddr)begin
        Bit#(TSub#(`vaddr,`paddr)) upperbits = addr[vaddr - 1:paddr];
        if(upperbits != 0)
          addr = 0;
      end
      ff_rd_epochs.enq(tuple2(access, epoch));
      AXI4_Rd_Addr#(`paddr, 0) read_request = AXI4_Rd_Addr {araddr : truncate(addr), aruser : 0, arlen : 0, 
        arsize : zeroExtend(access[1 : 0]), arburst : 'b01, arid : `Mem_master_num 
        ,arprot:{1'b0, 1'b0, curr_priv[1]} }; // arburst : 00 - FIXED 01 - INCR 10 - WRAP
      `logLevel( core, 1, $format("CORE : Memory Read Request ", fshow(read_request)))
   	  memory_xactor.i_rd_addr.enq(read_request);	
    endrule

    rule handle_memory_read_response;
			let response <- pop_o (memory_xactor.o_rd_data);	
      let {access, epoch}=ff_rd_epochs.first();
      ff_rd_epochs.deq;
      Bit#(2) size = truncate(access);
      Bit#(1) sign = truncateLSB(access);
			let bus_error = !(response.rresp == AXI4_OKAY);
      let rdata = response.rdata;
  		riscv.memory_read_response.put(tuple4(rdata, bus_error, `Load_access_fault, epoch));
      `logLevel( core, 1, $format("CORE : Memory Read Response ", fshow(response)))
    endrule

    rule handle_memory_write_request;
      let {address, data, size}<- riscv.memory_write_request.get; 
      if(vaddr>paddr)begin
        Bit#(TSub#(`vaddr,`paddr)) upperbits = address[vaddr - 1:paddr];
        if(upperbits != 0)
          address = 0;
      end
      if(size == 0)
        data = duplicate(data[7 : 0]);
      else if(size == 1)
        data = duplicate(data[15 : 0]);
      else if(size == 2)
        data = duplicate(data[31 : 0]);
  	  Bit#(TDiv#(ELEN, 8)) write_strobe = size == 0?'b1 : size == 1?'b11 : size == 2?'hf : '1;
      Bit#(TAdd#(1, TDiv#(ELEN, 32))) byte_offset = truncate(address);
  	  if(size != 3)// 8 - bit write;
  	  	write_strobe = write_strobe<<byte_offset;
		  AXI4_Wr_Addr#(`paddr, 0) aw = AXI4_Wr_Addr {awaddr : truncate(address), awuser : 0, awlen : 0, 
          awsize : zeroExtend(size), awburst : 'b01, awid : `Mem_master_num
          ,awprot:{1'b1, 1'b0, curr_priv[1]} }; // arburst : 00 - FIXED 01 - INCR 10 - WRAP
  	  let w  = AXI4_Wr_Data {wdata : data, wstrb : write_strobe, wlast : True, wid : `Mem_master_num};
      `logLevel( core, 1, $format("CORE : Memory write Request ", fshow(aw)))
      `logLevel( core, 1, $format("CORE : Memory write Request ", fshow(w)))
	    memory_xactor.i_wr_addr.enq(aw);
		  memory_xactor.i_wr_data.enq(w);
    endrule

    rule handle_memory_write_response;
      let response <- pop_o(memory_xactor.o_wr_resp);
	  	let bus_error = pack(!(response.bresp == AXI4_OKAY));
	  	riscv.memory_write_response.put(bus_error);
      `logLevel( core, 1, $format("CORE : Memory Write Response ", fshow(response)))
    endrule
  `endif

  `ifdef supervisor
    rule csrs_to_ptwalk;
      ptwalk.satp_from_csr.put(riscv.csr_satp);
      ptwalk.curr_priv.put(curr_priv);
      ptwalk.mstatus_from_csr.put(riscv.csr_mstatus);
    endrule

  `ifdef pmp
    rule connect_pmp_to_imem;
      imem.pmp_cfg(riscv.pmp_cfg);
      imem.pmp_addr(riscv.pmp_addr);
    endrule

    rule connect_pmp_to_dmem;
      dmem.pmp_cfg(riscv.pmp_cfg);
      dmem.pmp_addr(riscv.pmp_addr);
    endrule
  `endif

  `ifdef icache
    rule itlb_req_to_ptwalk(rg_ptw_state == None);
      let req <- imem.req_to_ptw.get();
      ptwalk.from_tlb.put(req);
      rg_ptw_state <= IWalk;
    endrule

    rule ptwalk_resp_to_itlb(rg_ptw_state == IWalk);
      let resp <- ptwalk.to_tlb.get();
      imem.resp_from_ptw.put(resp);
      rg_ptw_state <= None;
    endrule
  `endif
    
    rule dtlb_req_to_ptwalk(rg_ptw_state == None);
      let req <- dmem.req_to_ptw.get();
      ptwalk.from_tlb.put(req);
      rg_ptw_state <= DWalk;
    endrule

    rule ptwalk_resp_to_dtlb(rg_ptw_state == DWalk);
      let resp <- ptwalk.to_tlb.get();
      dmem.resp_from_ptw.put(resp);
      rg_ptw_state <= None;
    endrule

    rule ptwalk_request_to_dcache;
	  	let req <- ptwalk.request_to_cache.get;
      dmem.core_req.put(req);
    endrule
    mkConnection(dmem.ptw_resp, ptwalk.response_frm_cache);
    mkConnection(dmem.hold_req, ptwalk.hold_req);
    
  `endif

    interface sb_clint_msip = interface Put
  	  method Action put(Bit#(1) intrpt);
        riscv.clint_msip(intrpt);
      endmethod
    endinterface;
    interface sb_clint_mtip = interface Put
      method Action put(Bit#(1) intrpt);
        riscv.clint_mtip(intrpt);
      endmethod
    endinterface;
    interface sb_clint_mtime = interface Put
  		method Action put (Bit#(64) c_mtime);
        riscv.clint_mtime(c_mtime);
      endmethod
    endinterface;
    interface sb_externalinterrupt = interface Put
      method Action put(Bit#(1) intrpt);
        riscv.set_external_interrupt(intrpt);
      endmethod
    endinterface;
		interface master_i = fetch_xactor.axi_side;
		interface master_d = memory_xactor.axi_side;
  `ifdef cache_control
    interface master_io = io_xactor.axi_side;
  `endif
    `ifdef rtldump
      interface io_dump = riscv.dump;
    `endif
  endmodule : mkcclass_axi4

endpackage
