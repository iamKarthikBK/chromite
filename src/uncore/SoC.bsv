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
package SoC;
  // project related imports
	import Semi_FIFOF:: *;
	import AXI4_Types:: *;
	import AXI4_Fabric:: *;
	import AXI4_Lite_Types:: *;
	import AXI4_Lite_Fabric:: *;
  import Tilelink_lite_Types::*;
  import Tilelink_lite::*;
  import cclass_bare:: * ;
  import common_types:: * ;
  `include "common_params.bsv"
  `include "SoC.defines"

  // peripheral imports
  import bram::*;
  import bootrom:: *;
  import uart::*;
  import clint::*;
  import sign_dump::*;
  import err_slave::*;
  // package imports
  import Connectable:: *;
  import GetPut:: *;
  import Vector::*;
 
 `ifdef CORE_TLU
    function Tuple2 #(Bool, Bit#(TLog#(`Num_Slaves))) fn_slave_map (A_Opcode_lite cmd, 
                                                                                 Bit#(PADDR) addr);
      Bool slave_exist = True;
      Bit#(TLog#(`Num_Slaves)) slave_num = 0;
      if(addr >= `MemoryBase && addr<= `MemoryEnd)
        if(cmd==Get_data)
          slave_num = `Memory_slave_num;
        else
          slave_num = `Memory_wr_slave_num;
      else
      `ifdef BOOTROM
        if(addr>= `BootRomBase && addr<= `BootRomEnd)
          slave_num =  `BootRom_slave_num;
        else
      `endif
        slave_exist = False;
        
      return tuple2(slave_exist, slave_num);
    endfunction:fn_slave_map
 `else
    function Tuple2 #(Bool, Bit#(TLog#(`Num_Slaves))) fn_slave_map (Bit#(PADDR) addr);
      Bool slave_exist = True;
      Bit#(TLog#(`Num_Slaves)) slave_num = 0;
      if(addr >= `MemoryBase && addr<= `MemoryEnd)
        slave_num = `Memory_slave_num;
      else if(addr>= `BootRomBase && addr<= `BootRomEnd)
        slave_num =  `BootRom_slave_num;
      else if(addr>= `UartBase && addr<= `UartEnd)
        slave_num = `Uart_slave_num;
      else if(addr>= `ClintBase && addr<= `ClintEnd)
        slave_num = `Clint_slave_num;
      else if(addr>= `SignBase && addr<= `SignEnd)
        slave_num = `Sign_slave_num;
      else
        slave_num = `Err_slave_num;
        
      return tuple2(slave_exist, slave_num);
    endfunction:fn_slave_map
  `endif

  interface Ifc_SoC;
    `ifdef rtldump
      interface Get#(DumpType) io_dump;
    `endif
    `ifdef EXTERNAL
      interface AXI4_Master_IFC#(PADDR, ELEN, USERSPACE) mem_master;
    `endif
    interface RS232 uart_io;
  endinterface

`ifdef CORE_AXI4
  (*synthesize*)
  module mkSoC `ifdef EXTERNAL #(Clock exmem_clk, Reset exmem_rst) `endif (Ifc_SoC);
    let curr_clk<-exposeCurrentClock;
    let curr_reset<-exposeCurrentReset;
    Ifc_cclass_axi4 cclass <- mkcclass_axi4();
    Ifc_sign_dump signature<- mksign_dump();
    AXI4_Fabric_IFC #(`Num_Masters, `Num_Slaves, PADDR, ELEN, USERSPACE) 
                                                    fabric <- mkAXI4_Fabric(fn_slave_map);
 		Ifc_bram_axi4#(PADDR, ELEN, USERSPACE, `Addr_space) main_memory <- mkbram_axi4(`MemoryBase, 
                                                "code.mem.MSB", "code.mem.LSB", "MainMEM");
		Ifc_bootrom_axi4#(PADDR, ELEN, USERSPACE) bootrom <-mkbootrom_axi4(`BootRomBase);
	  Ifc_uart_axi4#(PADDR,ELEN,0, 16) uart <- mkuart_axi4(curr_clk,curr_reset, 5);
    Ifc_clint_axi4#(PADDR,ELEN,0,1) clint <- mkclint_axi4();
    Ifc_err_slave#(PADDR,ELEN,0) err_slave <- mkerr_slave;

   	mkConnection(cclass.master_d,	fabric.v_from_masters[`Mem_master_num]);
   	mkConnection(cclass.master_i, fabric.v_from_masters[`Fetch_master_num]);
   	mkConnection(signature.master, fabric.v_from_masters[`Sign_master_num ]);

  	mkConnection(fabric.v_to_slaves[`Memory_slave_num ],main_memory.slave);
		mkConnection (fabric.v_to_slaves [`BootRom_slave_num ],bootrom.slave);
 	  mkConnection (fabric.v_to_slaves [`Uart_slave_num ],uart.slave);
  	mkConnection (fabric.v_to_slaves [`Clint_slave_num ],clint.slave);
    mkConnection (fabric.v_to_slaves [`Sign_slave_num ] , signature.slave);
    mkConnection (fabric.v_to_slaves [`Err_slave_num ] , err_slave.slave);

    // sideband connection
    mkConnection(cclass.sb_clint_msip,clint.sb_clint_msip);
    mkConnection(cclass.sb_clint_mtip,clint.sb_clint_mtip);
    mkConnection(cclass.sb_clint_mtime,clint.sb_clint_mtime);

    `ifdef rtldump
      interface io_dump= cclass.io_dump;
    `endif
    interface uart_io=uart.io;
  endmodule: mkSoC
`endif
`ifdef CORE_AXI4Lite
  (*synthesize*)
  module mkSoC(Ifc_SoC);
    Ifc_cclass_axi4lite cclass <- mkcclass_axi4lite();
    AXI4_Lite_Fabric_IFC #(`Num_Masters, `Num_Slaves, PADDR, XLEN, USERSPACE) 
                                                    fabric <- mkAXI4_Lite_Fabric(fn_slave_map);
		Ifc_memory_AXI4Lite#(PADDR, XLEN, USERSPACE, `Addr_space) main_memory <- mkmemory_AXI4Lite(
                                                      `MemoryBase, "code.mem.MSB", "code.mem.LSB");
		`ifdef BOOTROM
			Ifc_bootrom_AXI4Lite#(PADDR, XLEN, USERSPACE) bootrom <-mkbootrom_AXI4Lite(`BootRomBase);
		`endif

   	mkConnection(cclass.master_d,	fabric.v_from_masters[`Mem_master_num]);
   	mkConnection(cclass.master_i, fabric.v_from_masters[`Fetch_master_num]);

		mkConnection(fabric.v_to_slaves[`Memory_slave_num],main_memory.slave);
		`ifdef BOOTROM
			mkConnection (fabric.v_to_slaves [`BootRom_slave_num],bootrom.slave);
		`endif

    `ifdef simulate
      interface io_dump= cclass.io_dump;
    `endif
  endmodule: mkSoC
`endif
`ifdef CORE_TLU
  (*synthesize*)
  module mkSoC(Ifc_SoC);
    Ifc_cclass_TLU cclass <- mkcclass_TLU();
    // TODO do this somewhere better
    Vector#(`Num_Slaves, Bit#(`Num_Masters)) master_route; //encoding: IMEM, DMEM  
	  master_route[valueOf(`Memory_slave_num)]                    = truncate(2'b11);
	  master_route[valueOf(`Memory_wr_slave_num)]                 = truncate(2'b01);
	  `ifdef BOOTROM master_route[valueOf(`BootRom_slave_num)]     = truncate(2'b11); `endif

    Tilelink_Fabric_IFC_lite#(`Num_Masters, `Num_Slaves, 1, PADDR, TDiv#(XLEN, 8), 2) fabric <- 
                                                                      mkTilelinkLite(fn_slave_map,
                                                                      master_route);
	  Ifc_memory_TLU#(PADDR, TDiv#(XLEN, 8), 2, `Addr_space) main_memory <- mkmemory_TLU(`MemoryBase,
                                                                    "code.mem.MSB", "code.mem.LSB");	
		`ifdef BOOTROM
			Ifc_bootrom_TLU#(PADDR, TDiv#(XLEN, 8), 2) bootrom <-mkbootrom_TLU(`BootRomBase);
		`endif

   	mkConnection(cclass.mem_master,	fabric.v_from_masters[`Mem_master_num]);
   	mkConnection(cclass.fetch_master, fabric.v_from_masters[`Fetch_master_num]);

		mkConnection(fabric.v_to_slaves[`Memory_slave_num],main_memory.read_slave);
		mkConnection(fabric.v_to_slaves[`Memory_wr_slave_num],main_memory.write_slave);
		`ifdef BOOTROM
			mkConnection (fabric.v_to_slaves [`BootRom_slave_num],bootrom.slave);
		`endif

    `ifdef simulate
      interface dump= cclass.io_dump;
    `endif
  endmodule: mkSoC
`endif
endpackage: SoC
