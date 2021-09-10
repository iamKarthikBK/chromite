//See LICENSE.iitm for license details
/* 

Author: Neel Gala
Email id: neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
package Soc;
  
import Clocks           :: *;
import Connectable:: *;
import GetPut:: *;
import Vector::*;

// project related imports
import Semi_FIFOF       :: * ;
import axi4             :: * ;
import apb              :: * ;
import bridges          :: * ;
import ccore            :: * ;
import ccore_types      :: * ;
import DCBus            :: * ;

// peripheral imports
import uart             :: * ;
import clint            :: * ;
import sign_dump        :: * ;
import ram2rw           :: * ;
import rom              :: * ;
import mem_config       :: * ;
import csrbox           :: * ;

import riscv_debug_types::*;                                                                          
import debug_loop::*;
`include "ccore_params.defines"
`include "Soc.defines"

// ------------------------ axi4 fabric related instantiation ----------------------------------
// here we assign master numbers. Sign dumps starts from 0. Then for each hart assign a master for
// instruction and data memories. Finally add the debug module if it exists.
typedef 0 Sign_master_num;
typedef (TAdd#(TMul#(`num_harts,2), `ifdef debug 1 `else 0 `endif )) Debug_master_num;
typedef (TAdd#(Debug_master_num, 1)) Num_Masters;

// create the read and write masks
`define read_slave  'b10111 // no read on sign_dump
`define write_slave 'b11101 // no write on bootrom

// memory map function for the read channel of AXI4
function Bit#(TLog#(`Num_Slaves)) fn_mm_axi4_rd (Bit#(`paddr) addr);
  if(addr >= `MemoryBase && addr<= `MemoryEnd)
    return `Memory_slave_num;
  else if(addr>= `BootRomBase && addr<= `BootRomEnd)
    return `BootRom_slave_num;
  else if ( (addr>= `UartBase && addr<= `UartEnd) || (addr>= `ClintBase && addr<= `ClintEnd) 
              || (addr >= `DebugBase && addr <= `DebugEnd) )
    return `APB_cluster_slave_num;
  else
    return `Err_slave_num;
endfunction:fn_mm_axi4_rd

// memory map function for the write channel of AXI4
function Bit#(TLog#(`Num_Slaves)) fn_mm_axi4_wr (Bit#(`paddr) addr);
  if(addr >= `MemoryBase && addr<= `MemoryEnd)
    return `Memory_slave_num;
  else if ( (addr>= `UartBase && addr<= `UartEnd) || (addr>= `ClintBase && addr<= `ClintEnd) )
    return `APB_cluster_slave_num;
  else if(addr>= `SignBase && addr<= `SignEnd)
    return `Sign_slave_num;
  else
    return `Err_slave_num;
endfunction:fn_mm_axi4_wr

// memory map functino for APB peripherals
function Bit#(2) fn_mm_apb(Bit#(`paddr) addr);
  if (addr >= `UartBase  && addr <= `UartEnd)
    return `Uart_slave_num;
  else if( addr >= `ClintBase && addr <= `ClintEnd)
    return `Clint_slave_num;
  else if( addr >= `DebugBase && addr <= `DebugEnd)
    return `Debug_slave_num;
  else
    return `Apb_err_slave_num;
endfunction
// ---------------------------------------------------------------------------------------------

interface Ifc_Soc;
`ifdef rtldump
  /*doc:subifc: interface to read the csr values in the TB*/
  interface Sbread sbread;
  /*doc:subifc: method carrying the commit packet to build in the instruction trace dump in Tb*/
  method Maybe#(CommitLogPacket) commitlog;
`endif
  /*doc:subifc: the uart interface for capturing prints in the application code*/
  interface RS232#(16) uart_io;
`ifdef debug
  interface Ifc_axi4_slave#(IDWIDTH, `paddr, `elen, USERSPACE) to_debug_master;
  interface Ifc_axi4_master#(IDWIDTH, `paddr, `elen, USERSPACE) to_debug_slave;
  method Action ma_hart_interrupts (Bit#(`num_harts) i);
  method Bit#(`num_harts) mv_harts_have_reset;
  method Bit#(`num_harts) mv_core_debugenable;
`endif
endinterface

// instantiate the peripherals
(*synthesize*)
module mkuart(Ifc_uart_apb#(`paddr, 32, USERSPACE, 16));
	let clk <-exposeCurrentClock;
	let reset <-exposeCurrentReset;
  let ifc();
  mkuart_apb#(5, `UartBase, clk, reset) _temp(ifc);
  return ifc;
endmodule:mkuart
(*synthesize*)
module mkclint(Ifc_clint_apb#(`paddr, 32, USERSPACE, 8, `num_harts));
	let clk <-exposeCurrentClock;
	let reset <-exposeCurrentReset;
  let ifc();
  mkclint_apb#(`ClintBase, clk, reset) _temp(ifc);
  return ifc;
endmodule:mkclint
(*synthesize*)
module mkdebug_loop(Ifc_debug_loop_apb#(`paddr, 32, USERSPACE));
	let clk <-exposeCurrentClock;
	let reset <-exposeCurrentReset;
  let ifc();
  mkdebug_loop_apb#(`DebugBase, clk, reset) _temp(ifc);
  return ifc;
endmodule:mkdebug_loop
(*synthesize*)
module mkbootrom(Ifc_rom_axi4#(IDWIDTH, `paddr, `elen, USERSPACE, 8192, `elen, 1));
	let clk <-exposeCurrentClock;
	let reset <-exposeCurrentReset;
  let ifc();
  mk_rom_axi4#(`BootRomBase, replicate("boot.mem")) _temp(ifc);
  return ifc;
endmodule:mkbootrom
(*synthesize*)
module mkbram(Ifc_ram2rw_axi4#(IDWIDTH, `paddr, `elen, USERSPACE, 4194304, `elen, 1));
	let clk <-exposeCurrentClock;
	let reset <-exposeCurrentReset;
  let ifc();
  mk_ram2rw_axi4#(`MemoryBase, replicate(tagged File "code.mem"),"nc") _temp(ifc);
  return ifc;
endmodule:mkbram

(*synthesize*)
module mkaxi2apb_bridge(Ifc_axi2apb#(IDWIDTH, `paddr, `elen, `paddr, 32, USERSPACE));
  let ifc();
  mkaxi2apb _temp(ifc);
  return ifc();
endmodule:mkaxi2apb_bridge

(*synthesize*)
module mkSoc`ifdef debug #(Vector#(`num_harts, Reset) hartresets ) `endif (Ifc_Soc);
  let curr_clk<-exposeCurrentClock;
  let curr_reset<-exposeCurrentReset;

  // instantiate and create the resets for each module
  Reset core_reset [`num_harts];
  for (Integer i = 0; i<`num_harts; i = i + 1) begin
  `ifdef debug
    core_reset[i]<- mkResetEither(hartresets[i],curr_reset);     // OR default and new_rst
  `else
    core_reset[i] = curr_reset;
  `endif
  end

  // instantiate the fast AXI4 fabric
  Ifc_axi4_fabric #(Num_Masters, `Num_Slaves, IDWIDTH, `paddr, `elen, USERSPACE)
      axi4fabric <- mkaxi4_fabric(fn_mm_axi4_rd, fn_mm_axi4_wr, `read_slave, `write_slave, '1, '1);

  // instantiate the slow apb fabric
  Ifc_apb_fabric #(`paddr, 32, USERSPACE, 4) apbfabric <- mkapb_fabric(fn_mm_apb);

  // instantiate num_harts number of cores.
  Ifc_ccore_axi4 ccore[`num_harts];
  for (Integer i = 0; i<`num_harts; i = i + 1) begin
    ccore[i] <- mkccore_axi4(`resetpc, fromInteger(i), reset_by core_reset[i]);
  end

  // create instances of the peripherals here
  let signature    <- mksign_dump;
  let main_memory  <- mkbram;
  let bootrom      <- mkbootrom;
  let debug_memory <- mkdebug_loop;
  let uart         <- mkuart;
  let clint        <- mkclint;
  let bridge       <- mkaxi2apb_bridge;

  // error slaves for each fabric is instantiated below.
  Ifc_axi4_slave #(IDWIDTH,`paddr, `elen, USERSPACE) axi4_err <- mkaxi4_err_2;
  Ifc_apb_slave  #(`paddr, 32, USERSPACE) apb_err <- mkapb_err;
`ifdef debug
  Bit#(`num_harts) lv_haveresets=0;
  Bit#(`num_harts) lv_debugenable=0;
  Wire#(Bit#(`num_harts)) wr_hart_interrupts <- mkWire();
  for (Integer i = 0; i<`num_harts; i = i + 1) begin
    lv_haveresets[i] = ccore[i].mv_core_is_reset;
    lv_debugenable[i] = ccore[i].mv_core_debugenable;
    /*doc:rule: */
    rule rl_connect_debug_interrupt;
      ccore[i].ma_debug_interrupt(wr_hart_interrupts[i]);
    endrule:rl_connect_debug_interrupt
    /*doc:rule: */
    rule rl_connect_available; 
      ccore[i].ma_debugger_available(1);
    endrule:rl_connect_available
  end

  // we use core-0 to control the stop-count feature of clint. 
  // TODO: Figure out if clint per core is required, even if the timer is global to all cores ??
  mkConnection(clint.ma_stop_count,ccore[0].mv_stop_timer);
`endif

  // For each core connect the supervisor and machine interrupts from PLIC. Hardwired to 0 for now.
  // TODO instantiate the PLIC for future simulations maybe ??
  for (Integer i = 0; i<`num_harts; i = i + 1) begin
  `ifdef supervisor
    mkConnection(ccore[i].sb_plic_seip,1'b0);
  `endif
    mkConnection(ccore[i].sb_plic_meip,1'b0);
  end
  // ------------------------------------------------------------------------------------------//
  // connect the cores's data and instruction memories as masters on the AXI4 fabric.
  for (Integer i = 0; i<`num_harts; i = i + 1) begin
    mkConnection(ccore[i].master_d,	axi4fabric.v_from_masters[i*2+1]);
   	mkConnection(ccore[i].master_i, axi4fabric.v_from_masters[i*2+2]);
  end
  // connect the signature dumper on the master interface of the fabric.
 	mkConnection(signature.master, axi4fabric.v_from_masters[valueOf(Sign_master_num) ]);


  // connect all the other slaves to the respective slave ports of the fabrics.
  mkConnection (axi4fabric.v_to_slaves [`APB_cluster_slave_num] , bridge.axi4_side);
  mkConnection (apbfabric.frm_master                            , bridge.apb_side);
  mkConnection (axi4fabric.v_to_slaves [`Sign_slave_num ]       , signature.slave);
  mkConnection (axi4fabric.v_to_slaves [`Err_slave_num ]        , axi4_err);
	mkConnection (axi4fabric.v_to_slaves [`Memory_slave_num]      , main_memory.slave);
	mkConnection (axi4fabric.v_to_slaves [`BootRom_slave_num]     , bootrom.slave);

  mkConnection (apbfabric.v_to_slaves[`Uart_slave_num]          , uart.slave);
  mkConnection (apbfabric.v_to_slaves[`Clint_slave_num]         , clint.slave);
  mkConnection (apbfabric.v_to_slaves[`Apb_err_slave_num]       , apb_err);
  mkConnection (apbfabric.v_to_slaves[`Debug_slave_num ]        , debug_memory.slave);

  // sideband connection for clint to all the cores.
  for (Integer i = 0; i<`num_harts; i = i + 1) begin    
    mkConnection(ccore[i].sb_clint_mtip, clint.device.sb_clint_mtip);
    mkConnection(ccore[i].sb_clint_msip, clint.device.sb_clint_msip[i]);
    mkConnection(ccore[i].sb_clint_mtime,clint.device.sb_clint_mtime);
  end

`ifdef rtldump
  interface commitlog= ccore[0].commitlog;
  interface sbread = ccore[0].sbread;
`endif
  interface uart_io=uart.device.io;
`ifdef debug
  interface to_debug_master = fabric.v_from_masters[valueOf(Debug_master_num)];
  interface to_debug_slave  = fabric.v_to_slaves[`Debug_slave_num ];
  method Action ma_hart_interrupts (Bit#(`num_harts) i);
    wr_hart_interrupts <= i;
  endmethod
  method mv_harts_have_reset = lv_haveresets;
  method mv_core_debugenable = lv_debugenable;
`endif
endmodule: mkSoc
endpackage: Soc
