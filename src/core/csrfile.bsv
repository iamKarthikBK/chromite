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
package csrfile;
  
  // project related imports
  import common_types::*;
  `include "common_params.bsv"
  `include "csr.defines"
  import ConcatReg::*;
  import BUtils::*;
  interface Ifc_csrfile;
    method ActionValue#(Bit#(XLEN)) read_csr (Bit#(12) addr);
    method Action write_csr(Bit#(12) addr,  Bit#(XLEN) word, Bit#(2) lpc);
    method ActionValue#(Bit#(`vaddr)) upd_on_ret `ifdef non_m_traps (Privilege_mode prv) `endif ;
    method ActionValue#(Bit#(`vaddr)) upd_on_trap(Bit#(6) cause, Bit#(`vaddr) pc, Bit#(`vaddr) tval);
    method Action incr_minstret;
  // ------------------------ csrs to other pipeline stages ---------------------------------//
    method CSRtoDecode csrs_to_decode;
	`ifdef supervisor
		method Bit#(XLEN) csr_satp;
	`endif
  `ifdef spfpu
    method Action update_fflags(Bit#(5) flags);
  `endif
  `ifdef cache_control
    method Bit#(2) mv_cacheenable;
  `endif
    method Bit#(1) csr_misa_c;
    method Bit#(2) curr_priv;
    method Bit#(XLEN) csr_mstatus;
  //-------------------------- sideband connections -----------------------------------------//
	  method Action clint_msip(Bit#(1) intrpt);
		method Action clint_mtip(Bit#(1) intrpt);
		method Action clint_mtime(Bit#(64) c_mtime);
	  method Action set_external_interrupt(Bit#(1) ex_i);
  // ---------------------------------------------------------------------------------------//
  endinterface

  function Reg#(Bit#(a)) extInterruptReg(Reg#(Bit#(a)) r1, Reg#(Bit#(a)) r2);
    return (interface Reg;
      method Bit#(a) _read = r1 | r2;
      method Action _write(Bit#(a) x); 
        r1._write(x);
			endmethod
    endinterface);
  endfunction
                                                                                                      
  function Reg#(t) writeSideEffect(Reg#(t) r, Action a);                                            
    return (interface Reg;                                                                          
            method t _read = r._read;                                                               
            method Action _write(t x);                                                              
                r._write(x);                                                                        
                a;                                                                                  
            endmethod                                                                               
        endinterface);                                                                              
  endfunction
  
  function Reg#(t) readOnlyReg(t r);
    return (interface Reg;
       method t _read = r;
       method Action _write(t x) = noAction;
    endinterface);
  endfunction

  (*synthesize*)
  (*mutually_exclusive="upd_on_ret, write_csr"*)
  (*mutually_exclusive="upd_on_trap, write_csr"*)
  (*preempts="write_csr, increment_cycle_counter"*)
  (*preempts="write_csr, incr_minstret"*)
  module mkcsrfile(Ifc_csrfile);
    let maxIndex=valueOf(XLEN);
    let paddr=valueOf(`paddr);
    let vaddr=valueOf(`vaddr);
    let verbosity=`VERBOSITY ;

  
    /////////////////////////////// Machine level register /////////////////////////
    // Current Privilege Level
	  Reg#(Privilege_mode) rg_prv <- mkReg(Machine); // resets to machine mode
	  
	  Bit#(XLEN) csr_mvendorid  = 0;   // To be provided by JEDEC.
    Bit#(XLEN) csr_marchid    = 0; // To be provided by the RISC-V foundation.
    Bit#(XLEN) csr_mimpid     = 0; // Implementation ID set by SHAKTI.
    Bit#(XLEN) csr_mhartid    = 0;

	  //MISA fields
    Reg#(Bit#(2)) rg_mxl <- mkReg(fromInteger(valueOf(TDiv#(XLEN, 32))));
    `ifdef atomic
      Reg#(Bit#(1)) misa_a <- mkReg(1);
    `else
      Bit#(1) misa_a =0;
    `endif
    `ifdef compressed
      Reg#(Bit#(1)) misa_c <- mkReg(1);
    `else
      Bit#(1) misa_c =0;
    `endif
    `ifdef dpfpu
      Reg#(Bit#(1)) misa_d <- mkReg(1);
    `else
      Bit#(1) misa_d =0;
    `endif
    `ifdef spfpu
      Reg#(Bit#(1)) misa_f <- mkReg(1);
    `else
      Bit#(1) misa_f =0;
    `endif
    Reg#(Bit#(1)) misa_i <- mkReg(1);
    `ifdef muldiv
      Reg#(Bit#(1)) misa_m <- mkReg(1);
    `else
      Bit#(1) misa_m =0;
    `endif
    `ifdef usertraps
      Reg#(Bit#(1)) misa_n <- mkReg(1);
    `else
      Bit#(1) misa_n =0;
    `endif
    `ifdef supervisor
      Reg#(Bit#(1)) misa_s <- mkReg(1);
    `else
      `ifdef rtldump
        Bit#(1) misa_s =1;
      `else
        Bit#(1) misa_s =0;
      `endif
    `endif
    `ifdef user
      Reg#(Bit#(1)) misa_u <- mkReg(1);
    `else
      Bit#(1) misa_u =0;
    `endif
    Bit#(26) misa = {5'd0, misa_u,1'd0, misa_s, 4'd0, misa_n, misa_m, 3'd0, misa_i,1'd0, 
          /*misa_i&misa_m&misa_a&misa_f&misa_d*/ 1'b0, misa_f, 1'd0, misa_d, misa_c, 1'd0, misa_a}; 
    //MTVEC trap vector fields
	  Reg#(Bit#(2)) rg_mode <- mkReg(0); //0 if pc to base or 1 if pc to base + 4xcause
	  Reg#(Bit#(TSub#(`vaddr,2))) rg_mtvec <- mkReg(0);

    // mstatus fields
    `ifdef supervisor
      Reg#(Bit#(1)) tsr	  <-mkReg(0);// TODO add functionality 
      Reg#(Bit#(1)) tw	 	<-mkReg(0);// TODO add functionality 
      Reg#(Bit#(1)) tvm	  <-mkReg(0);// TODO add functionality 
      Reg#(Bit#(1)) mxr   <-mkReg(0);// 
      Reg#(Bit#(1)) sum   <-mkReg(0);// 
    `else
  	  Bit#(1) tsr	  = 0; // 0 if supervisor not supported
      Bit#(1) tw	 	= 0; // 0 if supervisor not supported
      Bit#(1) tvm	  = 0; // 0 if supervisor not supported
      Bit#(1) mxr   = 0; // 0 if supervisor not supported
      Bit#(1) sum   = 0; // 0 if supervisor not supported
    `endif
    Reg#(Bit#(1)) rg_mprv <- mkReg(0);
    Bit#(2) xs	 	= 0;
    // The FS field should only exist when floating point is enabled. But this is not the case
    // for spike. So currently we have it as a compulsory field for mstatus. 
    // 
    Reg#(Bit#(2)) fs	 	<-mkReg(0);
    Reg#(Bit#(1)) sd = readOnlyReg(pack((xs == 2'b11) || (fs == 2'b11)));
    Reg#(Bit#(2)) rg_mpp	<- mkReg(2'b0);
    Bit#(2) hpp	= 0;
    `ifdef supervisor
      Reg#(Bit#(1)) spp	<- mkReg(0);
    `else
      Bit#(1) spp	= 0;
    `endif
    Reg#(Bit#(1)) rg_mpie <- mkReg(0);
    Bit#(1) hpie = 0;
    `ifdef supervisor
      Reg#(Bit#(1)) spie <- mkReg(0);
    `else
      Bit#(1) spie = 0;
    `endif
      	Reg#(Bit#(1)) rg_upie <- mkReg(0);
	Reg#(Bit#(1)) rg_mie	<- mkReg(0);
    Bit#(1) hie = 0;
    `ifdef supervisor
      Reg#(Bit#(1)) sie <- mkReg(0);
    `else
      Bit#(1) sie = 0;
    `endif
    Reg#(Bit#(1)) rg_uie <- mkReg(0);

	  // mie fields
    Reg#(Bit#(1)) rg_meie <- mkReg(0);
    Bit#(1) heie = 0;
    `ifdef supervisor
      Reg#(Bit#(1)) seie <- mkReg(0);
    `else
      Bit#(1) seie = 0;
    `endif
    Reg#(Bit#(1)) rg_ueie <- mkReg(0);
    Reg#(Bit#(1)) rg_mtie <- mkReg(0);
    Bit#(1) htie = 0;
    `ifdef supervisor
      Reg#(Bit#(1)) stie <-mkReg(0);
    `else
      Bit#(1) stie = 0;
    `endif
    Reg#(Bit#(1)) rg_utie <- mkReg(0);
    Reg#(Bit#(1)) rg_msie <- mkReg(0);
    Bit#(1) hsie = 0;
    `ifdef supervisor
      Reg#(Bit#(1)) ssie <-mkReg(0);
    `else
      Bit#(1) ssie = 0;
    `endif

      Reg#(Bit#(1)) rg_usie <-  mkReg(0);

   
   `ifdef non_m_traps
      Reg#(Bit#(12)) rg_mideleg <- mkReg(0);
      Reg#(Bit#(16)) rg_medeleg <- mkReg(0);
    `else
      Bit#(12) rg_mideleg = 0;
      Bit#(16) rg_medeleg = 0;
    `endif
    
	  // mip fields
    Reg#(Bit#(1)) rg_meip <- mkReg(0);
    Bit#(1) heip = 0;
    `ifdef supervisor
      Reg#(Bit#(1)) soft_seip <- mkReg(0);
      Reg#(Bit#(1)) ext_seip <- mkReg(0);
      Reg#(Bit#(1)) seip = extInterruptReg(soft_seip, ext_seip); 
    `else
      Bit#(1) seip = 0; 
    `endif
    `ifdef usertraps
      Reg#(Bit#(1)) soft_ueip <- mkReg(0);
      Reg#(Bit#(1)) ext_ueip <- mkReg(0);
      Reg#(Bit#(1)) rg_ueip = extInterruptReg(soft_ueip, ext_ueip); 
    `else
      Bit#(1) rg_ueip = 0;
    `endif
    Reg#(Bit#(1)) rg_mtip <- mkReg(0);
    Bit#(1) htip = 0;
    `ifdef supervisor
      Reg#(Bit#(1)) stip <- mkReg(0);
    `else
      Bit#(1) stip = 0;
    `endif
      Reg#(Bit#(1)) rg_utip <- mkReg(0);
	  Reg#(Bit#(1)) rg_msip <- mkReg(0);
    Bit#(1) hsip = 0;
    `ifdef supervisor
      Reg#(Bit#(1)) ssip <- mkReg(0);
    `else
      Bit#(1) ssip = 0;
    `endif
      Reg#(Bit#(1)) rg_usip <- mkReg(0);

    `ifdef RV64
	  	Reg#(Bit#(XLEN)) mcycle <- mkReg(0);
	  	Reg#(Bit#(XLEN)) minstret<-mkReg(0);
	  `else
	  	Reg#(Bit#(XLEN)) mcycle<-mkReg(0);
	  	Reg#(Bit#(XLEN)) minstret<-mkReg(0);
	  	Reg#(Bit#(XLEN)) mcycleh<-mkReg(0);
	  	Reg#(Bit#(XLEN)) minstreth<-mkReg(0);
	  `endif

	  // Machine Trap Handling
	  Reg#(Bit#(TSub#(`vaddr,1))) rg_mepc  		<- mkReg(0);
	  Reg#(Bit#(XLEN)) rg_mtval  		<- mkReg(0);
	  Reg#(Bit#(XLEN)) rg_mscratch <- mkReg(0);
    
    Reg#(Bit#(1)) rg_minterrupt <-mkReg(0);
	  Reg#(Bit#(5)) rg_mcause   <- mkReg(0);
    
	  Reg#(Bit#(3)) rg_mcounteren<-mkReg(0);
	  Reg#(Bit#(64)) rg_clint_mtime <-mkReg(0);
	  //////////////////////////////////////////////////////////////////////////////////////////
	  //////////////////////////////// SUPERVISOR LEVEL CSRs ///////////////////////////////////
    `ifdef supervisor
      Reg#(Bit#(2)) sxl <- mkReg(fromInteger(valueOf(TDiv#(XLEN, 32)))); 

      //STVEC trap vector fields
  	  Reg#(Bit#(2)) rg_smode <- mkReg(0); //0 if pc to base or 1 if pc to base + 4xcause
	    Reg#(Bit#(TSub#(`vaddr,2))) rg_stvec <- mkReg(0);
  
      // SSCRATCH
      Reg#(Bit#(XLEN)) sscratch <- mkReg(0);

      // SCAUSE register
      Reg#(Bit#(1)) sinterrupt <-mkReg(0);
	    Reg#(Bit#(5)) scause   <- mkReg(0);

      // STVAL
	    Reg#(Bit#(`vaddr)) stval  		<- mkReg(0);
      // SEPC register
	    Reg#(Bit#(TSub#(`vaddr, 1))) sepc  		<- mkReg(0);
      Reg#(Bit#(`asidwidth)) satp_asid <- mkReg(0);
    `ifdef RV64
      Reg#(Bit#(44)) satp_ppn <- mkReg(0);
      Reg#(Bit#(4)) satp_mode <- mkReg(0);
    `else
      Reg#(Bit#(22)) satp_ppm <- mkReg(0);
      Reg#(Bit#(1)) satp_mode<- mkReg(0);
    `endif

      // SEDELEG and SIDELEG registers
      `ifdef usertraps
        Reg#(Bit#(12)) sideleg <-mkReg(0);
        Reg#(Bit#(11)) sedeleg <-mkReg(0);
      `else
        Bit#(12) sideleg =0;
        Bit#(11) sedeleg =0;
      `endif
    `else
      Bit#(2) sxl = fromInteger(valueOf(TDiv#(XLEN, 32))); 
    `endif
	  //////////////////////////////////////////////////////////////////////////////////////////
	  //////////////////////////////// USER LEVEL CSRs /////////////////////////////////////////
	  Reg#(Bit#(XLEN)) rg_uscratch <- mkReg(0);
    `ifdef RV64 
      Reg#(Bit#(2)) uxl <- mkReg(fromInteger(valueOf(TDiv#(XLEN, 32)))); 
    `else
      Bit#(2) uxl = fromInteger(valueOf(TDiv#(XLEN, 32))); 
    `endif

    `ifdef usertraps
  	  Reg#(Bit#(TSub#(`vaddr,1))) rg_uepc  		<- mkReg(0);
	    Reg#(Bit#(XLEN))rg_utval  		<- mkReg(0);
      Reg#(Bit#(1)) rg_uinterrupt <-mkReg(0);
  	  Reg#(Bit#(5)) rg_ucause   <- mkReg(0);
	    Reg#(Bit#(2)) rg_umode <- mkReg(0); //0 if pc to base or 1 if pc to base + 4xcause
  	  Reg#(Bit#(TSub#(`vaddr,2))) rg_utvec <- mkReg(0);
    `endif
     Reg#(Bit#(5)) fflags <- mkReg(0);
     Reg#(Bit#(3)) frm <- mkReg(0);
	  //////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////// None Standard User RW CSRs /////////////////////////////////
  `ifdef cache_control
    // 0-bit is cache enable for instruction cache
    // 1-bit is cache enable for data cache
    // Address: 'h800
    Bit#(1) lv_denable =fromInteger(valueOf(`dcachereset ));
    Bit#(1) lv_ienable =fromInteger(valueOf(`icachereset ));
    Reg#(Bit#(2)) rg_cachecontrol <- mkReg({lv_denable,lv_ienable}); 
  `endif
    
    Bit#(12) csr_mip= {rg_meip, heip, seip, rg_ueip, rg_mtip, htie, stie, rg_utip, rg_msip,
                          hsip, ssip, rg_usip};
    Bit#(12) csr_mie= {rg_meie, heie, seie, rg_ueie, rg_mtie, htie, stie, rg_utie, rg_msie,
                          hsie, ssie, rg_usie};
    rule increment_cycle_counter;
	  	`ifdef RV64
      	mcycle<=mcycle+1;
	  	`else
	  		Bit#(64) new_cycle={mcycleh,mcycle};
	  		new_cycle=new_cycle+1;
	  		mcycle<=new_cycle[31:0];
	  		mcycleh<=new_cycle[63:32];
	  	`endif
    endrule
    
    method ActionValue#(Bit#(XLEN)) read_csr (Bit#(12) addr);
        Bit#(XLEN) data=0;
        if (addr == `MVENDORID ) data= csr_mvendorid;
        if (addr == `MARCHID ) data= csr_marchid;
        if (addr == `MIMPID ) data= csr_mimpid;
        if (addr == `MHARTID ) data= csr_mhartid;
        if (addr == `MISA ) begin 
          data[25:0]= {5'd0, misa_u,1'd0, misa_s, 4'd0, misa_n, misa_m, 3'd0, misa_i,2'd0, 
          /*misa_i&misa_m&misa_a&misa_f&misa_d,*/ misa_f, 1'd0, misa_d, misa_c, 1'd0, misa_a}; 
          `ifdef RV64
            if(rg_mxl==1)
              data[31:30]= rg_mxl; 
            else
              data[63:62]=rg_mxl;
          `else
            data[31:30]=rg_mxl;
          `endif
        end
        if (addr == `MTVEC ) data= signExtend({rg_mtvec, rg_mode}) ;
        if (addr == `MSTATUS )begin
          `ifdef RV64
            if(rg_mxl==2)
              data= {sd, 27'd0, sxl, uxl, 9'd0, tsr, tw, tvm, mxr, sum, rg_mprv, xs, fs, rg_mpp,
                      hpp, spp, rg_mpie, hpie, spie, rg_upie, rg_mie, hie, sie, rg_uie};
            else if(rg_mxl==1)
          `endif
              data= {'d0, sd, 8'd0, tsr, tw, tvm, mxr, sum, rg_mprv, xs, fs, rg_mpp, hpp, spp, rg_mpie,
                    hpie, spie, rg_upie, rg_mie, hie, sie, rg_uie};
        end
	`ifdef non_m_traps 
          if (addr == `MIDELEG ) data= {'d0, rg_mideleg};
          if (addr == `MEDELEG ) data= {'d0, rg_medeleg};
	`endif
        if (addr == `MIE ) data= {'d0, rg_meie, heie, seie, misa_n&rg_ueie, rg_mtie, htie, stie,
                                              misa_n&rg_utie, rg_msie, hsie, ssie, misa_n&rg_usie};
        if (addr == `MIP ) data= {'d0, rg_meip, heip, seip, misa_n&rg_ueip, rg_mtip, htie, stie,
                          misa_n&rg_utip, rg_msip, hsip, ssip, misa_n&rg_usip};
        if (addr == `MCYCLE ) data= mcycle;
        if (addr == `MINSTRET ) data= minstret;
        `ifndef RV64
          if (addr == `MCYCLEH ) data= mcycleh;
          if (addr == `MINSTRETH ) data= minstreth;
        `endif
        if (addr == `MEPC ) data= signExtend({rg_mepc,1'b0});
        if (addr == `MTVAL ) data= signExtend(rg_mtval);//?
        if (addr == `MSCRATCH ) data= rg_mscratch;
        if (addr == `MCAUSE ) data= {rg_minterrupt, 'd0, rg_mcause};
        if (addr == `MCOUNTEREN ) data= zeroExtend(rg_mcounteren);
        if (addr == `MTIME ) data= truncate(rg_clint_mtime);
        `ifndef RV64
          if (addr == `MTIMEH ) data= truncateLSB(rg_clint_mtime);
        `endif
        // =============== Supervisor level CSRs ==========//
        `ifdef supervisor
          if (addr == `SSTATUS )
            if(sxl==2)// 64 bit 
              data= {sd, 29'd0, uxl, 12'd0, mxr, sum, 1'd0, xs, fs, 2'd0,
                      hpp, spp, 1'd0, hpie, spie, rg_upie, 1'd0, hie, sie, rg_uie};
            else if(sxl==1)
              data= {'d0, sd, 11'd0, mxr, sum, 1'd0, xs, fs, 2'd0, hpp, spp, rg_mpie,
                      hpie, spie, rg_upie, 1'd0, hie, sie, rg_uie};
          if (addr == `STVEC ) begin data = signExtend({rg_stvec, rg_smode}); end
          if (addr == `SIP ) data = {'d0, seip, misa_n&rg_ueip, 2'd0, stip, misa_n&rg_utip, 2'd0, ssip,
                                                                                      misa_n&rg_usip};
          if (addr == `SIE ) data = {'d0, seie, misa_n&rg_ueie, 2'd0, stie, misa_n&rg_utie, 2'd0, ssie,
                                                                                      misa_n&rg_usie};
          if (addr == `SSCRATCH ) data = sscratch;
          if (addr == `SEPC ) data=signExtend({sepc,1'b0});
          if (addr == `SCAUSE ) data= {sinterrupt, 'd0, scause};
          if (addr == `STVAL ) data= signExtend(stval);//?
          if (addr == `SATP ) data = {satp_mode,'d0,satp_asid,satp_ppn};
          `ifdef usertraps
            if (addr == `SIDELEG ) data= {'d0, sideleg};
            if (addr == `SEDELEG ) data= {'d0, sedeleg};
          `endif
        `endif
        // =============== User level CSRs ================//
        if (addr == `USTATUS )
          `ifdef RV64
            if(uxl==2)
              data= {sd, 27'd0, 2'd0, uxl, 9'd0, tsr, tw, tvm, mxr, sum, rg_mprv, xs, fs, rg_mpp,
                    hpp, spp, rg_mpie, hpie, spie, rg_upie, rg_mie, hie, sie, rg_uie};
            else if(uxl==1)
          `endif
            data= {'d0, sd, 8'd0, tsr, tw, tvm, mxr, sum, rg_mprv, xs, fs, rg_mpp, hpp, spp, rg_mpie,
                    hpie, spie, rg_upie, rg_mie, hie, sie, rg_uie};
        `ifdef usertraps
          if (addr == `UIE) data= {'d0, rg_meie, heie, seie, rg_mideleg[8]&rg_ueie, rg_mtie, htie, 
                         stie, rg_mideleg[4]&rg_utie, rg_msie, hsie, ssie, rg_mideleg[0]&rg_usie}; 
          if (addr == `UIP) data= {'d0, rg_meip, heip, seip, rg_mideleg[8]&rg_ueip, rg_mtip, htie, 
                         stie, rg_mideleg[4]&rg_utip, rg_msip, hsip, ssip, rg_mideleg[0]&rg_usip};
        `endif
        if (addr == `UCYCLE ) data= mcycle;
        if (addr == `UINSTRET ) data= minstret;
        `ifndef RV64
          if (addr == `UCYCLEH ) data= mcycleh;
          if (addr == `UINSTRETH ) data= minstreth;
        `endif
        `ifdef usertraps
          if (addr == `UTVEC ) data= {'d0, rg_utvec, rg_umode};
          if (addr == `UEPC ) data= signExtend({rg_uepc,1'b0});
          if (addr == `UTVAL ) data= signExtend(rg_utval);
          if (addr == `UCAUSE ) data= {rg_uinterrupt, 'd0, rg_ucause};
        `endif
        if (addr == `USCRATCH ) data= rg_uscratch;
        if (addr == `UTIME ) data= truncate(rg_clint_mtime);
        if (addr == `FFLAGS ) data=zeroExtend(fflags);
        if (addr == `FRM ) data=zeroExtend(frm);
        if (addr == `FCSR ) data=zeroExtend({frm, fflags});
      `ifdef cache_control
        if (addr ==`CACHECNTRL ) data = zeroExtend(rg_cachecontrol);
      `endif
        return data;
    endmethod

    method Action write_csr(Bit#(12) addr,  Bit#(XLEN) word, Bit#(2) lpc);
      if(verbosity>1)
        $display($time,"CSRFILE: Write Operation: Addr:%h, word:%h",addr,word);
      case(addr)
        `MISA: begin 
          `ifdef atomic misa_a<= word[0]; `endif
          `ifdef compressed if(word[2]==1 || (word[2]==0 && lpc==0)) misa_c<= word[2]; `endif  
          `ifdef dpfpu misa_d<= word[3]; `endif 
          `ifdef spfpu misa_f<= word[5]; `endif
            misa_i<= word[8];
          `ifdef muldiv misa_m<= word[12]; `endif
          `ifdef usertraps misa_n<= word[13]; `endif
          `ifdef supervisor misa_s<= word[18]; `endif
          `ifdef user misa_u<= word[20]; `endif
          `ifdef RV64
            if(rg_mxl==1)
              rg_mxl<= word[31:30];
            else
              rg_mxl<= word[63:62];
          `endif
        end
        `MTVEC: begin 
          rg_mtvec<= word[paddr- 1:2]; 
          if(word[1:0]<2)
            rg_mode<=word[1:0];
        end
        `MSTATUS: begin 
            rg_uie<= word[0];
            rg_upie<= word[4];
          rg_mie<= word[3];
          rg_mpie<= word[7];
          `ifndef supervisor
            if(^word[12:11]==0)
          `endif
            rg_mpp<= word[12:11];
          rg_mprv<= word[17];
          fs<=word[14:13];
          `ifdef RV64
            if(uxl==1)
              uxl<=word[33:32]; 
          `endif
          `ifdef supervisor
            sie<=word[1];
            spie<= word[5];
            spp<= word[8];
            sum<= word[18];
            mxr<= word[19];
            tvm<= word[20];
            tw<= word[21];
            tsr<= word[22];
          `endif
        end
        `ifdef non_m_traps
          `MIDELEG: begin
            rg_mideleg<= truncate(word);
          end
          `MEDELEG: begin
            rg_medeleg<= truncate(word);
          end
        `endif
        `MIE: begin
          rg_msie<= word[3];
          rg_mtie<= word[7];
          rg_meie<= word[11];
            rg_ueie<= word[8];
            rg_usie<= word[0];
            rg_utie<= word[4];
          `ifdef supervisor
            seie<= word[9];
            ssie<= word[1];
            stie<= word[5];
          `endif
        end
        `MIP: begin
            rg_usip<= word[0];
            rg_utip<= word[4];
          `ifdef usertraps
            rg_ueip<= word[8];
          `endif
          `ifdef supervisor
            ssip<= word[1];
            stip<= word[5];
            seip<= word[9];
          `endif
        end
        `MCYCLE: begin
          mcycle<= word;
        end
        `MINSTRET:begin
          minstret<= word;
        end
        `ifndef RV64
          `MCYCLEH: mcycleh<= word;
          `MINSTRETH: minstreth<= word;
        `endif
        `MEPC: begin word=word>>1;rg_mepc<= truncate(word); end
        `MTVAL: rg_mtval<= truncate(word);
        `MSCRATCH: rg_mscratch<= word;
        `MCAUSE: begin
          rg_minterrupt<= word[maxIndex-1];
          rg_mcause<= truncate(word);
        end
        `MCOUNTEREN: rg_mcounteren<= truncate(word);
        `ifdef usertraps
          `USTATUS: begin 
            rg_uie<= word[0];
            rg_upie<= word[4];
          end
        `endif
        `USCRATCH: rg_uscratch<= word;
        ////////////////////// Supervisor Level Registers /////////////////
        `ifdef supervisor
          `STVEC: begin 
            rg_stvec<= word[vaddr- 1:2]; 
            if(word[1:0]<2)
              rg_smode<=word[1:0];
          end
          `SSCRATCH: sscratch<= word;
          // make sure only valid values of satp-mode field cause a change in the satp reg
          `SATP: begin
            `ifdef RV64
              if(word[63:60]==0 || word[63:60]==8)begin // transparent or sv39
                satp_mode<=word[63:60];
                satp_ppn<=truncate(word);
                satp_asid<=truncate(word[59:44]);
              end
            `else
              satp_mode<=word[31];
              satp_ppn<=truncate(word);
              satp_asid<=truncate(word[30:22]);
            `endif

          end
          `SCAUSE: begin
            scause<= truncate(word);
            sinterrupt<= word[maxIndex-1];
          end
          `STVAL: stval<= truncate(word);
          `SEPC: begin word=word>>1;sepc<= truncate(word); end
          `ifdef usertraps
            `SIDELEG: begin
                sideleg<= truncate(word);
              end
            `SEDELEG: begin
                sedeleg<= truncate(word);
              end
          `endif
          `SIP: begin
            `ifdef usertraps
              rg_usip<= word[0];
              rg_ueip<= word[8];
            `endif
            `ifdef supervisor
              ssip<= word[1];
            `endif
          end
        `SIE: begin
          `ifdef usertraps
            rg_ueie<= word[8];
            rg_usie<= word[0];
            rg_utie<= word[4];
          `endif
          `ifdef supervisor
            seie<= word[9];
            ssie<= word[1];
            stie<= word[5];
          `endif
        end
        `SSTATUS:begin
          `ifdef usertraps
            rg_uie<= word[0];
            rg_upie<= word[4];
          `endif
          fs<=word[14:13];
          `ifdef RV64
            uxl<= word[33:32];
          `endif
          sie<=word[1];
          spie<= word[5];
          spp<= word[8];
          sum<= word[18];
          mxr<= word[19];
          tvm<= word[20];
          tw<= word[21];
          tsr<= word[22];
        end
        `endif
        ///////////////////////////////////////////////////////////////////
        `FFLAGS: begin fflags<= truncate(word); if(fflags!=truncate(word)) fs<='b11; end
        `FRM: begin frm<=truncate(word); if(frm!=truncate(word)) fs<='b11;end
        `FCSR: begin frm<= word[7:5]; fflags<= truncate(word); 
          if({frm, fflags}!=truncate(word)) 
            fs<=2'b11;
          end

        `ifdef usertraps
          `UIE: begin
            rg_usie<= word[0];
            rg_utie<= word[4];
            rg_ueie<= word[8];
          end
          `UIP: begin
              rg_usip<= word[0];
              rg_utip<= word[4];
          end
          `UTVEC: begin 
            rg_utvec<= word[paddr- 1:2]; 
            if(word[1:0]<2)
              rg_umode<=word[1:0];
          end
          `UEPC: begin word=word>>1;rg_uepc<= truncate(word); end
          `UTVAL: rg_utval<= truncate(word);
          `UCAUSE: begin
            rg_uinterrupt<= word[maxIndex-1];
            rg_ucause<= truncate(word);
          end
        `endif
        /////////////////////////////// Non standard User CSRs  ////////////////////
      `ifdef cache_control
        `CACHECNTRL:
          rg_cachecontrol <= truncate(word);
      `endif
        default: noAction;
      endcase
    endmethod
    method csrs_to_decode = tuple8(rg_prv, csr_mip, csr_mie, rg_mideleg, misa, rg_mcounteren,
    rg_mie, {|fs,frm});
  	method Action clint_msip(Bit#(1) intrpt);
  		rg_msip<=intrpt;
  	endmethod
  	method Action clint_mtip(Bit#(1) intrpt);
  		rg_mtip<=intrpt;
  	endmethod
  	method Action clint_mtime(Bit#(64) c_mtime);
  		rg_clint_mtime<=c_mtime;
  	endmethod
    
    method ActionValue#(Bit#(`vaddr)) upd_on_ret `ifdef non_m_traps (Privilege_mode prv) `endif ;
      `ifdef non_m_traps 
        `ifdef supervisor
          if(prv==Supervisor)begin
            spie <= 1;
            spp <= 0;
            rg_prv <= unpack({1'b0, spp});
	  		    sie<=spie;
            if(verbosity>1)
              $display($time,"\tCSRFILE: SRET Function sepc: %h",sepc);
            let lv_sepc=sepc;
            if(misa_c==0)
              lv_sepc[0]=0;
            return {lv_sepc,1'b0};
          end else 
        `endif
        `ifdef usertraps
          if(prv==User)begin
            rg_upie <= 1;
            rg_prv <= User;
	    	  	rg_uie<=rg_upie;
            let lv_uepc=rg_uepc;
            if(misa_c==0)
              lv_uepc[0]=0;
            return {lv_uepc,1'b0};
          end else
        `endif
      `endif
      begin
        rg_mpie <= 1;
        rg_mpp <= pack(User);
        rg_prv <= unpack(rg_mpp);
	  	  rg_mie<=rg_mpie;
        let lv_mepc=rg_mepc;
        if(misa_c==0)
          lv_mepc[0]=0;
        return {lv_mepc,1'b0};
      end
    endmethod
    method ActionValue#(Bit#(`vaddr)) upd_on_trap(Bit#(6) cause, Bit#(`vaddr) pc, Bit#(`vaddr) tval);

      `ifdef non_m_traps
          Privilege_mode prv=Machine;
          Bool delegateM=(((rg_mideleg >> cause[4:0]) & 1 & duplicate(cause[5]))==1) ||  
                                      (((rg_medeleg >> cause[4:0]) & 1 & duplicate(~cause[5]))==1);
          `ifdef supervisor
            Bool delegateS=(((sideleg >> cause[4:0]) & 1 & duplicate(cause[5]))==1) ||  
                                        (((sedeleg >> cause[4:0]) & 1 & duplicate(~cause[5]))==1);
            if(delegateM && (pack(rg_prv)<=pack(Supervisor)) && misa_s==1)
              prv= Supervisor;
            else if(delegateM && delegateS && rg_prv==User && misa_n==1)
              prv= User;
          `elsif usertraps
            if(delegateM && rg_prv==User && misa_n==1)
              prv= User;
          `endif
          if(verbosity>1)begin
            $display($time,"\tCSRFILE: Cause: %d, pc: %h, tval: %h", cause[4:0], pc, tval);
            $display($time,"\tCSRFILE:rg_prv: ",fshow(rg_prv)," prv: ", fshow(prv)); 
            $display($time,"\tCSRFILE: rg_mtvec:%h", rg_mtvec);
          end
          
        `ifdef supervisor
          if(prv==Supervisor) begin
            stval<=signExtend(tval);
			      sepc<=truncateLSB(pc);
			      scause<=cause[4:0];
            sinterrupt<= cause[5];
			      sie <= 0;
			      spie <= sie;
            spp<= pack(rg_prv)[0];
			      rg_prv <= Supervisor;
            if(rg_smode==1 && cause[5]==1)
              return ({(rg_stvec+ zeroExtend(cause[4:0])),2'b0}); // pc jumps to base+(4*cause)
            else
              return {rg_stvec, 2'b0}; // pc jumps to base
          end else
        `endif
        `ifdef usertraps
          if(prv==User) begin
            rg_utval<=signExtend(tval);
			      rg_uepc<=truncateLSB(pc);
			      rg_ucause<=cause[4:0];
            rg_uinterrupt<= cause[5];
			      rg_uie <= 0;
			      rg_upie <= rg_uie;
			      rg_prv <= User;
            if(rg_umode==1 && cause[5]==1)
              return ({(rg_utvec+ zeroExtend(cause[4:0])),2'b0}); // pc jumps to base+(4*cause)
            else
              return {rg_utvec, 2'b0}; // pc jumps to base
          end else
        `endif
          begin
            rg_mtval<=signExtend(tval);
			      rg_mepc<=truncateLSB(pc);
			      rg_mcause<=cause[4:0];
            rg_minterrupt<= cause[5];
			      rg_mie <= 0;
			      rg_mpp <= pack(rg_prv);
			      rg_mpie <= rg_mie;
			      rg_prv <= Machine;
            if(rg_mode==1 && cause[5]==1)
              return ({(rg_mtvec+ zeroExtend(cause[4:0])),2'b0}); // pc jumps to base+(4*cause)
            else
              return {rg_mtvec, 2'b0}; // pc jumps to base
          end
      `else
        begin
          rg_mtval<=signExtend(tval);
			    rg_mepc<=truncateLSB(pc);
			    rg_mcause<=cause[4:0];
          rg_minterrupt<= cause[5];
			    rg_mie <= 0;
			    rg_mpp <= pack(rg_prv);
			    rg_mpie <= rg_mie;
			    rg_prv <= Machine;
          if(rg_mode==1 && cause[5]==1)
            return ({(rg_mtvec+ zeroExtend(cause[4:0])),2'b0}); // pc jumps to base+(4*cause)
          else
            return {rg_mtvec, 2'b0}; // pc jumps to base
        end
      `endif
    endmethod
    method Action incr_minstret;
      `ifdef RV64
        minstret<= minstret+1;
      `else
        Bit#(TMul#(2, XLEN)) instr ={minstreth, minstret};
        instr=instr+1;
        minstreth<= truncateLSB(instr); 
        minstret <= truncate(instr);
      `endif
    endmethod
	  `ifdef supervisor
	    method csr_satp = {satp_mode,'d0,satp_asid,satp_ppn};
	  `endif
    `ifdef spfpu
      method Action update_fflags(Bit#(5) flags);
        if((flags|fflags) != fflags)begin
          fflags<=flags|fflags;
          if(verbosity>2)
            $display($time,"\tCSRFILE: Old fflags:%b Writing with: %b",fflags,flags|fflags);
          fs<='b11;
        end
      endmethod
    `endif
	  method Action set_external_interrupt(Bit#(1) ex_i);
	  	if(rg_prv == Machine) begin
	  		rg_meip <= pack(ex_i);
	  	end
      `ifdef supervisor
  	  	else if(rg_prv == Supervisor) begin
	    		ext_seip <= pack(ex_i);
	    	end
      `endif
      `ifdef usertraps
  	  	else if(rg_prv == User) begin
	    		ext_ueip <= pack(ex_i);
	    	end
      `endif
	  endmethod
    method csr_misa_c=misa_c;
    method curr_priv=pack(rg_prv);
    method Bit#(XLEN) csr_mstatus;
      `ifdef RV64
        return {sd, 27'd0, sxl, uxl, 9'd0, tsr, tw, tvm, mxr, sum, rg_mprv, xs, fs, rg_mpp,
                  hpp, spp, rg_mpie, hpie, spie, rg_upie, rg_mie, hie, sie, rg_uie};

      `else
        return {'d0, sd, 8'd0, tsr, tw, tvm, mxr, sum, rg_mprv, xs, fs, rg_mpp, hpp, spp, rg_mpie,
                hpie, spie, rg_upie, rg_mie, hie, sie, rg_uie};
      `endif
    endmethod
  `ifdef cache_control
    method mv_cacheenable = rg_cachecontrol;
  `endif
  endmodule
endpackage
