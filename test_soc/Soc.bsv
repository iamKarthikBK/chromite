//See LICENSE.iitm for license details
/* 

Author: Neel Gala
Email id: neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
package Soc;
  // project related imports
	import Semi_FIFOF:: *;
	import AXI4_Types:: *;
	import AXI4_Fabric:: *;
  import ccore:: * ;
  import ccore_types:: * ;
  import Clocks :: *;
  `include "ccore_params.defines"
  `include "Soc.defines"

  // peripheral imports
  import uart::*;
  import clint::*;
  import sign_dump::*;
  import err_slave::*;
  // package imports
  import Connectable:: *;
  import GetPut:: *;
  import Vector::*;

`ifdef debug
  import debug_types::*;                                                                          
  import jtagdtm::*;                                                                              
  import riscvDebug013::*;                                                                        
  import debug_halt_loop::*;
`endif

  typedef 0 Sign_master_num;
  typedef (TAdd#(Sign_master_num, 1)) Mem_master_num;
  typedef (TAdd#(Mem_master_num, 1)) Fetch_master_num;
  typedef (TAdd#(Fetch_master_num, `ifdef debug 1 `else 0 `endif )) Debug_master_num;
  typedef (TAdd#(Debug_master_num, 1)) Num_Masters;
 
    function Bit#(TLog#(`Num_Slaves)) fn_slave_map (Bit#(`paddr) addr);
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
    `ifdef debug
      else if(addr>= `DebugBase && addr<= `DebugEnd)
        slave_num = `Debug_slave_num;
    `endif
      else
        slave_num = `Err_slave_num;
        
      return slave_num;
    endfunction:fn_slave_map

  interface Ifc_Soc;
    `ifdef rtldump
      interface Get#(DumpType) io_dump;
    `endif
    interface AXI4_Master_IFC#(`paddr, ELEN, USERSPACE) main_mem_master;
    interface AXI4_Master_IFC#(`paddr, ELEN, USERSPACE) boot_mem_master;
    interface RS232 uart_io;
  `ifdef debug
      // ------------- JTAG IOs ----------------------//
    (*always_enabled,always_ready*)                                                               
    method Action wire_tms(Bit#(1)tms_in);                                                        

    (*always_enabled,always_ready*)                                                               
    method Action wire_tdi(Bit#(1)tdi_in);                                                        

    (*always_enabled,always_ready*)                                                               
    method Bit#(1)wire_tdo;                                                                       
      // ---------------------------------------------//
  `endif
  endinterface

  (*synthesize*)
  module mkSoc#(Clock tck_clk, Reset trst)(Ifc_Soc);
    let curr_clk<-exposeCurrentClock;
    let curr_reset<-exposeCurrentReset;

    AXI4_Fabric_IFC #(Num_Masters, `Num_Slaves, `paddr, ELEN, USERSPACE) 
                                                    fabric <- mkAXI4_Fabric(fn_slave_map);

    Ifc_ccore_axi4 ccore <- mkccore_axi4(`resetpc, 0);
    Ifc_sign_dump signature<- mksign_dump();
  `ifdef debug
    Ifc_debug_halt_loop_axi4#(`paddr, ELEN, USERSPACE) debug_memory <- mkdebug_halt_loop_axi4;
  `endif
	  Ifc_uart_axi4#(`paddr,ELEN,0, 16) uart <- mkuart_axi4(curr_clk,curr_reset, 5);
    Ifc_clint_axi4#(`paddr, ELEN, 0, 1, 16) clint <- mkclint_axi4();
    Ifc_err_slave_axi4#(`paddr,ELEN,0) err_slave <- mkerr_slave_axi4;

    // -------------------------------- JTAG + Debugger Setup ---------------------------------- //
`ifdef debug
    // null crossing registers to transfer input signals from current_domain to tck domain
    CrossingReg#(Bit#(1)) tdi<-mkNullCrossingReg(tck_clk,0);                                        
    CrossingReg#(Bit#(1)) tms<-mkNullCrossingReg(tck_clk,0);                                        
    // null crossing registers to transfer signals from tck to curr_clock domain.
    CrossingReg#(Bit#(1)) tdo<-mkNullCrossingReg(curr_clk,0,clocked_by tck_clk, reset_by trst);     
                                                                                                    
    Ifc_jtagdtm jtag_tap <- mkjtagdtm(clocked_by tck_clk, reset_by trst);                           
    Ifc_riscvDebug013 debug_module <- mkriscvDebug013();                                           

    // synFIFOs to transact data between JTAG and debug module                                                                                                    
    SyncFIFOIfc#(Bit#(41)) sync_request_to_dm <-mkSyncFIFOToCC(1,tck_clk,trst);                     
    SyncFIFOIfc#(Bit#(34)) sync_response_from_dm <-mkSyncFIFOFromCC(1,tck_clk);                     
                           
             // ----------- Connect JTAG IOs through null-crossing registers ------ //
    rule assign_jtag_inputs;                                                                                
      jtag_tap.tms_i(tms.crossed);                                                                  
      jtag_tap.tdi_i(tdi.crossed);                                                                  
      jtag_tap.bs_chain_i(0);                                                                       
      jtag_tap.debug_tdi_i(0);                                                                      
    endrule                                                                                         
                                                                                                    
    rule assign_jtag_output;                                                                                 
      tdo <= jtag_tap.tdo(); //  Launched by a register clocked by inverted tck                     
    endrule                                                                                        
            // ------------------------------------------------------------------- //

    // capture jtag tap request into a syncfifo first.                                                                                                                  
    rule connect_tap_request_to_syncfifo;                                                           
      let x<-jtag_tap.request_to_dm;                                                                
      sync_request_to_dm.enq(zeroExtend(x));          

    // send captured synced jtag tap request to the debug module
    endrule                                                                                         
    rule read_synced_request_to_dm;                                                                 
      sync_request_to_dm.deq;                                                                       
      debug_module.dtm.putCommand.put(sync_request_to_dm.first);                                    
    endrule                                                                                         

    // collect debug response into a syncfifo
    rule connect_debug_response_to_syncfifo;                                                        
      let x <- debug_module.dtm.getResponse.get;                                                    
      sync_response_from_dm.enq(x);          
    endrule                                  

    // send synced debug response back to the JTAG
    rule read_synced_response_from_dm;                                                              
      sync_response_from_dm.deq;                                                                    
      jtag_tap.response_from_dm(sync_response_from_dm.first);                                       
    endrule                                                                                         
                                                                                                    
    mkConnection (ccore.debug_server ,debug_module.hart);
  `endif
      
    // ------------------------------------------------------------------------------------------//
  `ifdef debug
    mkConnection (debug_module.debug_master,fabric.v_from_masters[valueOf(Debug_master_num)]);
  `endif
   	mkConnection(ccore.master_d,	fabric.v_from_masters[valueOf(Mem_master_num)]);
   	mkConnection(ccore.master_i, fabric.v_from_masters[valueOf(Fetch_master_num)]);
   	mkConnection(signature.master, fabric.v_from_masters[valueOf(Sign_master_num) ]);

 	  mkConnection (fabric.v_to_slaves [`Uart_slave_num ],uart.slave);
  	mkConnection (fabric.v_to_slaves [`Clint_slave_num ],clint.slave);
    mkConnection (fabric.v_to_slaves [`Sign_slave_num ] , signature.slave);
    mkConnection (fabric.v_to_slaves [`Err_slave_num ] , err_slave.slave);
  `ifdef debug
    mkConnection (fabric.v_to_slaves [`Debug_slave_num ] , debug_memory.slave);
  `endif

    // sideband connection
    mkConnection(ccore.sb_clint_msip,clint.sb_clint_msip);
    mkConnection(ccore.sb_clint_mtip,clint.sb_clint_mtip);
    mkConnection(ccore.sb_clint_mtime,clint.sb_clint_mtime);

    `ifdef rtldump
      interface io_dump= ccore.io_dump;
    `endif
    interface uart_io=uart.io;
    interface main_mem_master = fabric.v_to_slaves[`Memory_slave_num] ;
    interface boot_mem_master = fabric.v_to_slaves[`BootRom_slave_num] ;

      // ------------- JTAG IOs ----------------------//
  `ifdef debug
    method Action wire_tms(Bit#(1)tms_in);                                                        
      tms <= tms_in;                                                                              
    endmethod                                                                                     
    method Action wire_tdi(Bit#(1)tdi_in);                                                        
      tdi <= tdi_in;                                                                              
    endmethod                                                                                     
    method Bit#(1)wire_tdo;                                                                       
      return tdo.crossed();                                                                       
    endmethod
  `endif
      // -------------------------------------------- //
  endmodule: mkSoc
endpackage: Soc
