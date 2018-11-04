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
package sign_dump;
  import Vector::*;
  import FIFOF::*;
  import DReg::*;
  import SpecialFIFOs::*;
  import BRAMCore::*;
  import FIFO::*;

  import common_types::*;
  `include "common_params.bsv"
	import AXI4_Types:: *;
	import AXI4_Fabric:: *;
	import Semi_FIFOF:: *;

  interface Ifc_sign_dump;
		interface AXI4_Master_IFC#(PADDR, XLEN, USERSPACE) master;
		interface AXI4_Slave_IFC#(PADDR, XLEN, USERSPACE) slave;
  endinterface

  (*synthesize*)
  module mksign_dump(Ifc_sign_dump);
    let word_count = 128/valueOf(XLEN);

    Reg#(Bool) rg_start<- mkReg(False);
    Reg#(Bit#(TLog#(TDiv#(128,XLEN)))) rg_word_count <- mkReg(fromInteger(word_count-1));
    Reg#(Bit#(PADDR)) rg_total_count <- mkReg(0);
		AXI4_Master_Xactor_IFC #(PADDR, XLEN, USERSPACE) m_xactor <- mkAXI4_Master_Xactor;
		AXI4_Slave_Xactor_IFC #(PADDR, XLEN, USERSPACE) s_xactor <- mkAXI4_Slave_Xactor;

    Reg#(Bit#(PADDR)) rg_start_address<- mkReg(0);    // 0x2000
    Reg#(Bit#(PADDR)) rg_end_address<- mkReg(0);      // 0x2008


    Reg#(Bit#(XLEN)) dataarray[word_count];
    for(Integer i=0;i<word_count;i=i+1)
      dataarray[i]<-mkReg(0);
    Reg#(Bit#(5)) rg_cnt <-mkReg(0);
 	  let dump <- mkReg(InvalidFile) ;
    rule open_file(rg_cnt<5);
      String dumpFile = "signature" ;
    	File lfh <- $fopen( dumpFile, "w" ) ;
    	if ( lfh == InvalidFile )begin
    	  $display("cannot open %s", dumpFile); 
    	  $finish(0);
    	end
    	dump <= lfh ;
    	rg_cnt <= rg_cnt+1 ;
    endrule

    rule configure_registers(!rg_start);
      let aw <- pop_o (s_xactor.o_wr_addr);
      let w  <- pop_o (s_xactor.o_wr_data);
	    let b = AXI4_Wr_Resp {bresp: AXI4_SLVERR, buser: aw.awuser, bid:aw.awid};
      if (aw.awaddr[3:0]=='h0) begin
        rg_start_address<=truncate(w.wdata);
        $display($time,"\tSIGNDUMP: Writing Start Address: %h",w.wdata);
        b.bresp=AXI4_OKAY;
      end
      else if (aw.awaddr[3:0]=='h8) begin
        rg_end_address<=truncate(w.wdata);
        $display($time,"\tSIGNDUMP: Writing End Address: %h",w.wdata);
        rg_start<=True;
        b.bresp=AXI4_OKAY;
        Bit#(PADDR) total_bytes=truncate(w.wdata)-rg_start_address;
        rg_total_count<=total_bytes>>2;
      end
      else if (aw.awaddr[3:0]=='hc) begin
        $display($time,"\tSIGNDUMP: Ending simulation");
        $finish(0);        
      end
  	  s_xactor.i_wr_resp.enq (b);
    endrule
    
    rule send_request(rg_start);
      if(rg_start_address!=rg_end_address) begin
  			AXI4_Rd_Addr#(PADDR, 0) read_request = AXI4_Rd_Addr {araddr: rg_start_address, aruser: ?, 
          arlen:0, arsize: 2, arburst: 'b01, arid:2}; // arburst: 00-FIXED 01-INCR 10-WRAP
  			m_xactor.i_rd_addr.enq(read_request);	
        rg_start_address<=rg_start_address+4;
      end
    endrule

    rule receive_response(rg_cnt>=5 && rg_start);
			let response <- pop_o (m_xactor.o_rd_data);	
      $display($time,"\tSIGNATURE: Memory responded with: ",fshow(response), "rg_total_count: %d",
        rg_total_count);
      rg_total_count<=rg_total_count-1;
      Bit#(XLEN) lv_dataarray[word_count];
      for(Integer i=0;i<word_count;i=i+1)
        lv_dataarray[i]=dataarray[i];
      if (response.rresp!=AXI4_OKAY)begin
        $display($time,"\tSIGNATURE: Memory responded with Error");
        $finish(0);
      end
      rg_word_count<=rg_word_count-1;
      lv_dataarray[rg_word_count]=response.rdata;
      dataarray[rg_word_count]<=response.rdata;

      if(rg_word_count==0)begin 
        for(Integer i=0;i<word_count;i=i+1)
      		$fwrite(dump,"%8h", lv_dataarray[i]); 
        $fwrite(dump,"\n");
      end
      if(rg_total_count==1)
        rg_start<=False;
    endrule
    interface master=m_xactor.axi_side;
    interface slave=s_xactor.axi_side;
  endmodule
endpackage
