
  function Bit#(`xlen) fn_probe_csr (Bit#(12) csr_addr);
    case (csr_addr)

        `MISA : return zeroExtend(soc.sbread.mv_csr_misa);
        `MVENDORID : return zeroExtend(soc.sbread.mv_csr_mvendorid);
        `STVEC : return zeroExtend(soc.sbread.mv_csr_stvec);
        `MTVEC : return zeroExtend(soc.sbread.mv_csr_mtvec);
        `MSTATUS : return zeroExtend(soc.sbread.mv_csr_mstatus);
        `MARCHID : return zeroExtend(soc.sbread.mv_csr_marchid);
        `MIMPID : return zeroExtend(soc.sbread.mv_csr_mimpid);
        `MHARTID : return zeroExtend(soc.sbread.mv_csr_mhartid);
        `MIP : return zeroExtend(soc.sbread.mv_csr_mip);
        `SIP : return zeroExtend(soc.sbread.mv_csr_sip);
        `MIE : return zeroExtend(soc.sbread.mv_csr_mie);
        `SIE : return zeroExtend(soc.sbread.mv_csr_sie);
        `MSCRATCH : return zeroExtend(soc.sbread.mv_csr_mscratch);
        `SSCRATCH : return zeroExtend(soc.sbread.mv_csr_sscratch);
        `SEPC : return zeroExtend(soc.sbread.mv_csr_sepc);
        `STVAL : return zeroExtend(soc.sbread.mv_csr_stval);
        `SCAUSE : return zeroExtend(soc.sbread.mv_csr_scause);
        `MEPC : return zeroExtend(soc.sbread.mv_csr_mepc);
        `MTVAL : return zeroExtend(soc.sbread.mv_csr_mtval);
        `MCAUSE : return zeroExtend(soc.sbread.mv_csr_mcause);
        `MCYCLE : return zeroExtend(soc.sbread.mv_csr_mcycle);
        `MINSTRET : return zeroExtend(soc.sbread.mv_csr_minstret);
        `TIME : return zeroExtend(soc.sbread.mv_csr_time);
        `MIDELEG : return zeroExtend(soc.sbread.mv_csr_mideleg);
        `MEDELEG : return zeroExtend(soc.sbread.mv_csr_medeleg);
        `PMPCFG0 : return zeroExtend(soc.sbread.mv_csr_pmpcfg0);
        `PMPADDR0 : return zeroExtend(soc.sbread.mv_csr_pmpaddr0);
        `PMPADDR1 : return zeroExtend(soc.sbread.mv_csr_pmpaddr1);
        `PMPADDR2 : return zeroExtend(soc.sbread.mv_csr_pmpaddr2);
        `PMPADDR3 : return zeroExtend(soc.sbread.mv_csr_pmpaddr3);
        `SATP : return zeroExtend(soc.sbread.mv_csr_satp);
        `MCOUNTINHIBIT : return zeroExtend(soc.sbread.mv_csr_mcountinhibit);
        `CUSTOMCONTROL : return zeroExtend(soc.sbread.mv_csr_customcontrol);
    default: return 0;
    endcase
  endfunction
