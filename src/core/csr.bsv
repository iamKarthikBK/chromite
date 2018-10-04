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
Details: This module contains the methods and functions which will perform tasks related to CSRs:
Trap handling and Updating the CSRs for system- instruction

--------------------------------------------------------------------------------------------------
*/

package csr;
  // project related imports
  import common_types::*;
  `include "common_params.bsv"
  `include "csr.defines"
  import ConcatReg::*;
  import csrfile::*;

  // package imports 
  import ConfigReg::*;
	
  interface Ifc_csr;
	  method ActionValue#(Tuple3#(Bool, Bit#(VADDR), Bit#(XLEN))) system_instruction(
            Bit#(12) csr_address, Bit#(5) rs1_addr, Bit#(XLEN) op1, Bit#(3) funct3
            `ifdef supervisor ,Bit#(VADDR) pc `endif );
    method CSRtoDecode csrs_to_decode;
    method ActionValue#(Bit#(VADDR)) take_trap(Trap_type trap, Bit#(VADDR) pc, Bit#(VADDR) badaddr);
	  method Action clint_msip(Bit#(1) intrpt);
		method Action clint_mtip(Bit#(1) intrpt);
		method Action clint_mtime(Bit#(XLEN) c_mtime);
    method Action incr_minstret;
    method Bool interrupt;
    `ifdef RV64 method Bool inferred_xlen; `endif // False-32bit,  True-64bit 
		`ifdef supervisor
			method Bit#(XLEN) send_satp;
			method Chmod perm_to_TLB;
      method Bool send_sfence;
		`endif
    `ifdef spfpu
  		method Bit#(3) roundingmode;
      method Action update_fflags(Bit#(5) flags);
    `endif
	  method Action set_external_interrupt(Tuple2#(Bool,Bool) ex_i);
  endinterface:Ifc_csr


  (*synthesize*)
  (*mutually_exclusive="system_instruction, take_trap"*)
  module mkcsr(Ifc_csr);
    let verbosity=`VERBOSITY ;
  
    Ifc_csrfile csrfile <- mkcsrfile();
    `ifdef supervisor
      Wire#(Bool) wr_sfence_command <- mkDWire(False);
    `endif 
	  method ActionValue#(Tuple3#(Bool, Bit#(VADDR), Bit#(XLEN))) system_instruction(
            Bit#(12) csr_address, Bit#(5) rs1_addr, Bit#(XLEN) op1, Bit#(3) funct3
            `ifdef supervisor ,Bit#(VADDR) pc `endif );
      Bool flush = False;
      Bit#(VADDR) jump_add=0;
	  	let csrread<-csrfile.read_csr(csr_address);
      Bit#(XLEN) writecsrdata=0;
	  	Bit#(XLEN) destination_value=0;
      if(verbosity>1)
        $display($time, "\tCSR: csr: %h rs1addr: %d, op1: %h, funct3: %b csr_read: %h", csr_address, rs1_addr, 
            op1, funct3, csrread);

	  	case(funct3)
        'd0:case (csr_address[11:8])
              'h0, `ifdef supervisor 'h1, `endif 'h3:begin // URET, SRET, MRET
                `ifdef supervisor
                  if(csr_address[5]==1 && csr_address[11:8]==1) begin // SFENCE
                    wr_sfence_command<=True;
                    if(verbosity>1)
                      $display($time,"\tCSR: SFENCE executed");
                  end
                  else begin
                `endif
                  let temp<-csrfile.upd_on_ret( `ifdef non_m_traps unpack(csr_address[9:8]) `endif );
                  jump_add=temp;
                  flush=True;
                  if(verbosity>1)
                  $display($time,"\tCSR: RET Function: %h",csr_address);
                `ifdef supervisor
                  end
                `endif
              end
	  		    endcase
        default: begin
          `ifdef supervisor
            if(csr_address==`SATP )begin
              flush=True;
              jump_add=pc+4; // TODO get rid of addr if possible.
            end
          `endif
          if(funct3[2] == 1)
            op1=zeroExtend(rs1_addr);
          destination_value=csrread;
          if(funct3[1:0] == 'd1)
            writecsrdata = op1;
          else if(funct3[1:0] == 'd2)
            writecsrdata = op1|csrread;
          else
            writecsrdata = ~op1&csrread;
          csrfile.write_csr(csr_address, writecsrdata);
        end
      endcase
	  	return tuple3(flush,jump_add,destination_value);
	  endmethod
	
    method ActionValue#(Bit#(VADDR)) take_trap(Trap_type trap, Bit#(VADDR) pc, Bit#(VADDR) badaddr);
		  if(trap matches tagged Exception .ex)begin
		  	if(!(ex==Inst_addr_misaligned || ex==Inst_access_fault || ex==Load_access_fault ||
            ex==Load_addr_misaligned || ex==Store_addr_misaligned || ex==Store_access_fault 
            `ifdef supervisor || ex==Load_pagefault || ex==Store_pagefault || ex==Inst_pagefault `endif ))
		  		badaddr=0;
		  end
		  Bit#(6) cause = 0;
		  Bit#(TSub #(6, 1)) cause_code = 0;
		  Bit#(1) cause_type = 0;
		  case(trap) matches
		  	tagged Interrupt .i: begin cause_type = 1; cause_code = zeroExtend(pack(i)); end
		  	tagged Exception .e: begin cause_type = 0; cause_code = zeroExtend(pack(e)); end
		  endcase
			cause = {cause_type, cause_code};
      let jump_address<-csrfile.upd_on_trap(cause, pc, badaddr); 
		  return jump_address;
  	endmethod

    method csrs_to_decode = csrfile.csrs_to_decode;
	  method Action clint_msip(Bit#(1) intrpt);
	  	csrfile.clint_msip(intrpt);
	  endmethod
	  method Action clint_mtip(Bit#(1) intrpt);
	  	csrfile.clint_mtip(intrpt);
	  endmethod
	  method Action clint_mtime(Bit#(XLEN) c_mtime);
	  	csrfile.clint_mtime(c_mtime);
	  endmethod
    method incr_minstret=csrfile.incr_minstret;
    `ifdef RV64 method inferred_xlen = csrfile.inferred_xlen; `endif // False-32bit,  True-64bit 
    method  interrupt=csrfile.interrupt;
		`ifdef supervisor
			method send_satp=csrfile.send_satp;
			method perm_to_TLB=csrfile.perm_to_TLB;
      method send_sfence= wr_sfence_command;
		`endif
    `ifdef spfpu
  		method roundingmode=csrfile.roundingmode;
      method Action update_fflags(Bit#(5) flags);
        csrfile.update_fflags(flags);
      endmethod
    `endif
	  method Action set_external_interrupt(Tuple2#(Bool,Bool)
                                                        ex_i)=csrfile.set_external_interrupt(ex_i);
  endmodule
endpackage
