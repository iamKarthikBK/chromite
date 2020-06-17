//See LICENSE.iitm for license details
/*
Author: Neel Gala
Email id: neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
package TbSoc;
  import Soc          :: * ;
`ifdef debug
  import DebugSoc     :: * ;
`endif
  import Clocks       :: * ;
  import GetPut       :: * ;
	import Semi_FIFOF   :: * ;
	import axi4         :: * ;
  import uart         :: * ;
	import ccore_types  :: * ;
  import DReg         :: * ;
  import Connectable  :: * ;
  import DCBus        :: * ;
  import Vector       :: * ;
  `include "ccore_params.defines"
  `include "Logger.bsv"
  `include "Soc.defines"

`ifdef openocd
  import "BDPI" function ActionValue #(int) init_rbb_jtag(Bit#(1) dummy);
  import "BDPI" function ActionValue #(Bit #(8))get_frame(int client_fd);
  import "BDPI" function Action send_tdo(Bit #(1) tdo , int client_fd);
`endif
  (*synthesize*)
  module [Module] mkTbSoc(Empty);

    let def_clk <- exposeCurrentClock;
    let def_rst <- exposeCurrentReset;

    MakeClockIfc#(Bit#(1)) tck_clk <-mkUngatedClock(1);
    MakeResetIfc trst <- mkReset(0,False,tck_clk.new_clk);

  `ifdef debug
    Ifc_DebugSoc soc <- mkDebugSoc(tck_clk.new_clk, trst.new_rst);
  `else
    Ifc_Soc soc <- mkSoc();
  `endif

    IWithDCBus#(DCBus#(`paddr,32), Ifc_uart#(16)) uart <- mkuart_block(5);
    Reg#(Bool) rg_read_rx<- mkDReg(False);

    Reg#(Bit#(5)) rg_cnt <-mkReg(0);

    rule display_eol;
	    let timeval <- $time;
      `logLevel( tb, 0, $format("\n[%10d]", timeval))
    endrule:display_eol

  `ifdef rtldump
 	  let dump <- mkReg(InvalidFile) ;
    rule rl_open_file_rtldump(rg_cnt<1);
      let generate_dump <- $test$plusargs("rtldump");
      if(generate_dump) begin
        String dumpFile = "rtl.dump" ;
    	  File lfh <- $fopen( dumpFile, "w" ) ;
    	  if ( lfh == InvalidFile )begin
    	    `logLevel( tb, 0, $format("TB: cannot open %s", dumpFile))
    	    $finish(0);
    	  end
    	  dump <= lfh ;
      end
    endrule:rl_open_file_rtldump
  `endif

 	  let dump1 <- mkReg(InvalidFile) ;
    rule rl_open_file_app(rg_cnt<1);
      String dumpFile1 = "app_log" ;
    	File lfh1 <- $fopen( dumpFile1, "w" ) ;
    	if (lfh1==InvalidFile )begin
    	  `logLevel( tb, 0, $format("TB: cannot open %s", dumpFile1))
    	  $finish(0);
    	end
      dump1 <= lfh1;
    	rg_cnt <= rg_cnt+1 ;
    endrule:rl_open_file_app

    rule rl_connect_uart_out;
      soc.uart_io.sin(uart.device.io.sout);
    endrule:rl_connect_uart_out

    rule rl_connect_uart_in;
      uart.device.io.sin(soc.uart_io.sout);
    endrule:rl_connect_uart_in

    rule rl_check_if_character_present(!rg_read_rx);
      let {err, data}<- uart.dcbus.read('hc,Sz1);
      if (data[3]==1) // character present
        rg_read_rx<=True;
    endrule:rl_check_if_character_present

    rule rl_write_received_character(rg_cnt>=1 && rg_read_rx);
      let {err,data}<-uart.dcbus.read('h8,Sz1);
      $fwrite(dump1,"%c",data);
    endrule:rl_write_received_character


  `ifdef rtldump
    rule rl_write_dump_file(rg_cnt>=1);
      let generate_dump <- $test$plusargs("rtldump");
      let {prv, pc, instruction, rd, data, rdtype}<- soc.io_dump.get;
    `ifndef openocd
      if(instruction=='h00006f||instruction =='h00a001)
        $finish(0);
      else
    `endif
      if(generate_dump)begin
      	$fwrite(dump, prv, " 0x%16h", pc, " (0x%8h", instruction, ")");
        if(rdtype == FRF && valueOf(FLEN) == 64)
      	  $fwrite(dump, " f%d", rd, " 0x%16h", data[63:0], "\n");
        else if(rdtype == FRF && valueOf(FLEN) == 32)
      	  $fwrite(dump, " f%d", rd, " 0x%8h", data[31:0], "\n");
        else if(rdtype == IRF && valueOf(XLEN) == 64)
    	    $fwrite(dump, " x%d", rd, " 0x%16h", data[63:0], "\n");
        else if(rdtype == IRF && valueOf(XLEN) == 32)
    	    $fwrite(dump, " x%d", rd, " 0x%8h", data[31:0], "\n");
      end
    endrule:rl_write_dump_file
  `endif

  `ifdef debug
    Wire#(Bit#(1)) wr_tdi <-mkWire();
    Wire#(Bit#(1)) wr_tms <-mkWire();
    rule connect_jtag_io;
      soc.wire_tdi(wr_tdi);
      soc.wire_tms(wr_tms);
    endrule
  `endif
  `ifdef openocd
    Wire#(Bit#(1)) wr_tdo <-mkWire();
    Wire#(Bit#(1)) wr_tck <-mkWire();
    Wire#(Bit#(1)) wr_trst <-mkWire();
    rule rl_wr_tdo;
      wr_tdo <= soc.wire_tdo();
    endrule
    Reg#(Bit#(1)) rg_initial <- mkRegA(0);
    Reg#(Bit#(1)) rg_end_sim <- mkRegA(0);
    Reg#(int) rg_client_fd <- mkRegA(32'hffffffff);
    Reg#(Bit#(5)) delayed_actor <- mkReg(0);
    Reg#(Bit#(5)) delayed_actor2 <- mkReg(0);
    Reg#(Bit#(5)) delayed_actor3 <- mkReg(0);
    Reg#(Bit#(5)) delayed_actor4 <- mkReg(0);
    Reg#(Bit#(5)) delayed_actor5 <- mkReg(0);
    rule rl_initial(rg_initial == 0);
      let x <- init_rbb_jtag(0);
      if(x != 32'hffffffff)begin
        rg_initial <= 1'b1;
        rg_client_fd <= x;
      end
    endrule
    rule rl_get_frame((rg_initial == 1'b1));
      let x <- get_frame(rg_client_fd);
      delayed_actor <= truncate(x);
      delayed_actor2 <= delayed_actor;
      delayed_actor3 <= delayed_actor2;
      delayed_actor4 <= delayed_actor3;
      delayed_actor5 <= delayed_actor4;
      tck_clk.setClockValue(delayed_actor2[2]);
      if(delayed_actor2[4] == 1)
        trst.assertReset();
      if(delayed_actor5[3] == 1 )
        send_tdo(wr_tdo,rg_client_fd);
      wr_tdi <= delayed_actor[0];
      wr_tms <= delayed_actor[1];
      if( x[5] == 1)begin
        $display("OpenOcd Exit");
        $finish();
      end
    endrule
  `endif
  endmodule
endpackage: TbSoc
