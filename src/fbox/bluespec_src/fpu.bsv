/*
Copyright (c) 2019, IIT Madras All rights reserved.

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

Author: Arjun Menon, Neel Gala
Email id: c.arjunmenon@gmail.com, neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
package fpu;
  import FIFO           :: * ;
  import FIFOF          :: * ;
  import SpecialFIFOs   :: * ;
  import DReg           :: * ;
  import wrapper_fma    :: * ;
  import wrapper_ftoi   :: * ;
  import wrapper_itof   :: * ;
  import wrapper_ftof   :: * ;
  import bsvmkdiv_sqrt  :: * ;
  import comparision    :: * ;
  import fclass         :: * ;
  import sign_inject    :: * ;
  import TxRx           :: * ;

  `include "ccore_params.defines"
  `include "fpu.defines"
  `include "Logger.bsv"
  
  (*synthesize*)
  module mkspfma_instance(Ifc_wrapper_fma#(8,24));
    let ifc();
    mkwrapper_fma fma(ifc);
    return (ifc);
  endmodule

  (*synthesize*)
  module mkspdiv_sqrt_instance(Ifc_div_sqrt#(8,24));
    let ifc();
    mkdiv_sqrt div_sqrt(ifc);
    return (ifc);
  endmodule

  (*synthesize*)
  module mkitosp_instance(Ifc_wrapper_itof#(8,24,`elen));
    let ifc();
    mkwrapper_itof itof(ifc);
    return (ifc);
  endmodule

  (*synthesize*)
  module mksptoi_instance(Ifc_wrapper_ftoi#(8,24,`elen));
    let ifc();
    mkwrapper_ftoi ftoi(ifc);
    return (ifc);
  endmodule

  (*synthesize*)
  module mkspcmp_instance(Ifc_comparision#(8,24));
    let ifc();
    mkcomparision cmp(ifc);
    return (ifc);
  endmodule

  (*synthesize*)
  module mkspfclass_instance(Ifc_fclass#(8,24));
    let ifc();
    mkfclass fclass(ifc);
    return (ifc);
  endmodule

  (*synthesize*)
  module mkspsign_inject_instance(Ifc_sign_inject#(8,24));
    let ifc();
    mksign_inject sign_inject(ifc);
    return (ifc);
  endmodule
`ifdef dpfpu
  (*synthesize*)
  module mkdpfma_instance(Ifc_wrapper_fma#(11,53));
    let ifc();
    mkwrapper_fma fma(ifc);
    return (ifc);
  endmodule

  (*synthesize*)
  module mkdpdiv_sqrt_instance(Ifc_div_sqrt#(11,53));
    let ifc();
    mkdiv_sqrt div_sqrt(ifc);
    return (ifc);
  endmodule

  (*synthesize*)
  module mkitodp_instance(Ifc_wrapper_itof#(11,53,`elen));
    let ifc();
    mkwrapper_itof itof(ifc);
    return (ifc);
  endmodule

  (*synthesize*)
  module mkdptoi_instance(Ifc_wrapper_ftoi#(11,53,`elen));
    let ifc();
    mkwrapper_ftoi ftoi(ifc);
    return (ifc);
  endmodule

  (*synthesize*)
  module mksptodp_instance(Ifc_wrapper_ftof#(8,24,11,53));
    let ifc();
    mkwrapper_ftof ftof(ifc);
    return (ifc);
  endmodule

  (*synthesize*)
  module mkdptosp_instance(Ifc_wrapper_ftof#(11,53,8,24));
    let ifc();
    mkwrapper_ftof ftof(ifc);
    return (ifc);
  endmodule

  (*synthesize*)
  module mkdpcmp_instance(Ifc_comparision#(11,53));
    let ifc();
    mkcomparision cmp(ifc);
    return (ifc);
  endmodule

  (*synthesize*)
  module mkdpfclass_instance(Ifc_fclass#(11,53));
    let ifc();
    mkfclass fclass(ifc);
    return (ifc);
  endmodule

  (*synthesize*)
  module mkdpsign_inject_instance(Ifc_sign_inject#(11,53));
    let ifc();
    mksign_inject sign_inject(ifc);
    return (ifc);
  endmodule
`endif
  interface Ifc_fpu;
    method Action ma_inputs(FBoxIn in);
      method Bool mv_ready;
      method TXe#(Tuple2#(Bit#(`elen), Bit#(5))) tx_output;
  endinterface:Ifc_fpu

  typedef struct{
    Bit#(`elen) op1;
    Bit#(`elen) op2;
    Bit#(`elen) op3;
    Bit#(4) opcode;
    Bit#(7) f7;
    Bit#(3) f3;
    Bit#(2) imm;
    Bit#(3) fsr;
    Bool    issp;
  }FBoxIn deriving (Bits,Eq);

  (*synthesize*)
  module mkfpu(Ifc_fpu);

    let spfma <- mkspfma_instance;
    let spdiv_sqrt <- mkspdiv_sqrt_instance;
    let itosp <- mkitosp_instance;
    let sptoi <- mksptoi_instance;
    let spcmp <- mkspcmp_instance;
    let spfclass <- mkspfclass_instance;
    let spsign_inject <- mkspsign_inject_instance;

  `ifdef dpfpu
    let dpfma <- mkdpfma_instance;
    let dpdiv_sqrt <- mkdpdiv_sqrt_instance;
    let itodp <- mkitodp_instance;
    let dptoi <- mkdptoi_instance;
    let dpcmp <- mkdpcmp_instance;
    let dpfclass <- mkdpfclass_instance;
    let dpsign_inject <- mkdpsign_inject_instance;
    let sptodp <- mksptodp_instance;
    let dptosp <- mkdptosp_instance;
  `endif

    Reg#(FBoxIn) rg_input <- mkReg(unpack(0));
    Reg#(Bool) rg_valid <- mkDReg(False);
    TX#(Tuple2#(Bit#(`elen), Bit#(5))) tx_fbox_out <- mkTX;
    //Reg#(Tuple3#(Bool, Bit#(`elen), Bit#(5))) rg_output <- mkDReg(unpack(0));

    function Tuple2#(Bit#(`elen), Bit#(5)) compensate_for_32bit_int (Bit#(1) oprnd_sign, Bit#(`elen) out, Bit#(5) flag, Bit#(1) is_signed);
    `ifdef RV64
      if (is_signed == 0) begin
        if (flag[4] == 0 && out[valueOf(`elen) - 1 : valueOf(`elen) - 32] == 32'd0) begin
          return tuple2(signExtend(out[31:0]), flag);  
        end
        else begin
          if (oprnd_sign == 0) begin
            out = zeroExtend(32'hFFFFFFFF);
          end
          else begin
            out = zeroExtend(32'h00000000);
          end
          flag = 5'b10000;
          return tuple2(out, flag);
        end
      end
      else begin
        if (flag[4] == 0 && (oprnd_sign == out[valueOf(`elen) - 33] || ( oprnd_sign != out[valueOf(`elen) - 33] && out == 64'h0000000000000000/*out[valueOf(`elen) - 33 : valueOf(`elen) - 64] == 32'h00000000*/)) && (out[valueOf(`elen) - 1 : valueOf(`elen) - 32] == 32'h00000000 || out[valueOf(`elen) - 1 : valueOf(`elen) - 32] == 32'hFFFFFFFF)) begin
          return tuple2(out, flag);  
        end
        
        else begin
          if (oprnd_sign == 0) begin
          out = zeroExtend(32'h7FFFFFFF);
          end

          else begin
            out = signExtend(32'h80000000);
          end

          flag = 5'b10000;
          return tuple2(out, flag);
        end
      end
    `else
      if (is_signed == 0) begin
        if (flag[4] == 0) begin
          return tuple2(out, flag);
        end
        else begin
          if (oprnd_sign == 0) begin
            out = zeroExtend(32'hFFFFFFFF);
          end
          else begin
            out = zeroExtend(32'h00000000);
          end
          return tuple2(out, flag);
        end
      end
      else begin
        if (flag[4] == 0) begin
          return tuple2(out, flag);
        end
        else begin
          if (oprnd_sign == 0) begin
            out = zeroExtend(32'h7FFFFFFF);
          end
          else begin
            out = signExtend(32'h80000000);
          end
          return tuple2(out, flag);
        end
      end
    `endif
    endfunction
  `ifdef RV64
    function Tuple2#(Bit#(`elen), Bit#(5)) compensate_for_64bit_int (Bit#(1) oprnd_sign, Bit#(`elen) out, Bit#(5) flag, Bit#(1) is_signed);
      if (is_signed == 0) begin
        if (flag[4] == 0) begin
          return tuple2(out, flag);  
        end
        else begin
          if (oprnd_sign == 0) begin
            out = 64'hFFFFFFFFFFFFFFFF;
          end
          else begin
            out = 64'h0000000000000000;
          end
          return tuple2(out, flag);
        end
      end
      else begin

        if (flag[4] == 0) begin
          return tuple2(out, flag);  
        end
        
        else begin
          if (oprnd_sign == 0) begin
          out = 64'h7FFFFFFFFFFFFFFF;
          end

          else begin
            out = 64'h8000000000000000;
          end
          return tuple2(out, flag);
        end
      end
    endfunction
  `endif

    function Tuple3#(Bool, Bit#(n), Bit#(5)) fn_ExtendFpuRes (Tuple3#(Bool, Bit#(m), Bit#(5)) inp, Bool zeroextend)
          provisos (Add#(m, a__, n));
      Bit#(n) lv2= (zeroextend) ? zeroExtend(tpl_2(inp)) : {'1,tpl_2(inp)};
      return tuple3(tpl_1(inp), lv2, tpl_3(inp));
    endfunction: fn_ExtendFpuRes

  `ifdef dpfpu
    function Bool isNaNBox(Bit#(64) op);
      return (&(op[63:32])==1);
    endfunction: isNaNBox
  `endif

    function Tuple3#(Bit#(`elen),Bit#(`elen),Bit#(`elen)) setCanonicalNaN (Bit#(`elen) op1, Bit#(`elen) op2, Bit#(`elen) op3);
    `ifdef dpfpu
      return tuple3(isNaNBox(op1)? truncate(op1) : zeroExtend(32'h7fc00000),
                      isNaNBox(op2)? truncate(op2) : zeroExtend(32'h7fc00000),
                      isNaNBox(op3)? truncate(op3) : zeroExtend(32'h7fc00000));
   `else
      return tuple3(truncate(op1),truncate(op2),truncate(op3));
   `endif
    endfunction: setCanonicalNaN


    Wire#(Bit#(1)) wr_inValid <- mkDWire(0);
    Wire#(Bit#(1)) wr_sqrtop  <- mkDWire(0);
    Wire#(Bit#(3)) wr_f3      <- mkDWire(0);
    Wire#(Bit#(`elen)) wr_op1  <- mkDWire(0);
    Wire#(Bit#(`elen)) wr_op2  <- mkDWire(0);
    Wire#(Bool) wr_issp       <- mkDWire(True);
    Reg#(Bool)  rg_issp       <- mkReg(False);

  `ifdef dpfpu
    (*conflict_free="rl_start, rl_output_spfma, rl_output_dpfma, rl_output_spdiv_sqrt, rl_output_dpdiv_sqrt, rl_output_sptoi, rl_output_dptoi, rl_output_itosp, rl_output_itodp, rl_output_sptodp, rl_output_dptosp"*)
  `else
    (*conflict_free="rl_start, rl_output_spfma, rl_output_spdiv_sqrt, rl_output_sptoi, rl_output_itosp"*)
  `endif

    rule rl_send_spdiv_sqrt_inputs(wr_issp && spdiv_sqrt.oinReady `ifdef dpfpu && dpdiv_sqrt.oinReady `endif );
      if(wr_inValid==1) `logLevel( fpu, 0, $format("FPU: SP DIV/SQRT"))
      spdiv_sqrt.request(1'b1, wr_inValid,  wr_sqrtop,  wr_f3,  truncate(wr_op1), truncate(wr_op2));
      rg_issp<= True;
    endrule:rl_send_spdiv_sqrt_inputs

  `ifdef dpfpu
    rule rl_send_dpdiv_sqrt_inputs(!wr_issp && spdiv_sqrt.oinReady `ifdef dpfpu && dpdiv_sqrt.oinReady `endif );
      if(wr_inValid==1) `logLevel( fpu, 0, $format("FPU: DP DIV/SQRT, wr_issp =%b", wr_issp))
      dpdiv_sqrt.request(1'b1, wr_inValid,  wr_sqrtop,  wr_f3,  wr_op1, wr_op2);
      rg_issp<= False;
    endrule:rl_send_dpdiv_sqrt_inputs
  `endif

    rule rl_start(rg_valid);
      Bit#(`elen) op1  = rg_input.op1;
      Bit#(`elen) op2  = rg_input.op2;
      Bit#(`elen) op3  = rg_input.op3;
      Bit#(4) opcode   = rg_input.opcode;
      Bit#(7) f7       = rg_input.f7;
      Bit#(3) f3       = rg_input.f3;
      Bit#(2) imm      = rg_input.imm;
      Bit#(3) fsr      = rg_input.fsr;
      Bool issp        = rg_input.issp;

      f3 = (f3 == 'b111) ? fsr : f3;
      `logLevel( fpu, 0, $format("FPU: Input op1:%h, op2:%h, op3:%h", op1, op2, op3))
      `logLevel( fpu, 0, $format("FPU: opcode:%b, funct7:%b, funct3:%b issp: %b imm:%b",opcode, f7,
                                                                                    f3, issp, imm))
    `ifdef dpfpu
      `logLevel( fpu, 0, $format("FPU: DPFPU Initialized"))
    `endif
      if( (issp && !(f7[6:2] ==`FCVT_F_I_f5 && opcode == `FP_OPCODE) && 	//Except int to fp and fmv, rest of SP ops
            !(((f7 == `FMV_X_S_f7 || f7 == `FMV_S_X_f7 `ifdef dpfpu || f7 == `FMV_X_D_f7 || f7 == `FMV_D_X_f7 `endif )
            && f3 == 'b000) && opcode == `FP_OPCODE) && !((f7[6:2] == `FCVT_S_D_f5) && opcode == `FP_OPCODE)) ||	//Except DPTOSP
            (!issp && ((f7[6:2] == `FCVT_S_D_f5) && opcode == `FP_OPCODE)) ) begin	//or if it is a SPtoDP op
        {op1, op2, op3} = setCanonicalNaN(op1,op2,op3);
        `logLevel( fpu, 0, $format("FPU: After NaN boxing: op1: %h, op2: %h, op3: %h", op1, op2, op3))
      end
      //Compare Operations
      if((f7[6:2]==`FCMP_f5 || f7[6:2] == `FMMAX_f5) && opcode == `FP_OPCODE) begin
        `logLevel( fpu, 0, $format("FPU: Input Comparision: op1: %h, op2: %h, f3: %b, f7: %b",op1, op2, f3, f7[2]))
        if(issp) begin
          let x <- spcmp.request(truncate(op1), truncate(op2), f3, f7[2]);
          Bit#(`elen) out;
          Bool valid;
          Bit#(5) flags;
          {valid, out, flags} = fn_ExtendFpuRes(x, `ifdef dpfpu (f7[2]==0) `else True `endif );
          tx_fbox_out.u.enq(tuple2(out, flags));
        end
      `ifdef dpfpu
        else begin
          let x <- dpcmp.request(op1, op2, f3, f7[2]);
          rg_output <= x;
          tx_fbox_out.u.enq(tuple2(tpl_2(x), tpl_3(x)));
        end
      `endif
      end
      //Convert INT to Floating Point
      else if(f7[6:2] ==`FCVT_F_I_f5 && opcode == `FP_OPCODE) begin
        //Check           long?              signed?
        Bit#(`elen) inp= (imm[1]==1) ? op1 : ((imm[0]==0) ? signExtend(op1[31:0]) : zeroExtend(op1[31:0]));
        if(issp) begin
          `logLevel( fpu, 0, $format("FPU: ITOF: op1: %h, f3: %b, imm[1:0]: %b", op1, f3, imm[1:0]))
          itosp.request(inp, f3, ~imm[0]);
        end
      `ifdef dpfpu
        else begin
          itodp.request(inp, f3, ~imm[0]);
        end
      `endif
      end

      //Sign Injection
      else if(f7[6:2] == `FSGNJN_f5 && opcode == `FP_OPCODE) begin
        if(issp) begin
          let out= spsign_inject.request(truncate(op1), op2[31], f3);
          `logLevel( fpu, 0, $format("FPU: SP sign injection: op1: %h, op2[31]: %b, f3: %b out: %h", op1, op2[31], f3, out))
          tx_fbox_out.u.enq(tuple2(`ifdef dpfpu {'1,out} `else zeroExtend(out) `endif , 0));
        end
      `ifdef dpfpu
        else begin
          let out= dpsign_inject.request(op1, op2[valueOf(`elen)-1], f3);
          `logLevel( fpu, 0, $format("FPU: DP sign injection: op1: %h, op2[31]: %b, f3: %b out: %h", op1, op2[valueOf(`elen)-1], f3, out))
          tx_fbox_out.u.enq(tuple2(out, 0));
        end
      `endif
      end
      //Convert to Integer
      else if(f7[6:2] == `FCVT_I_F_f5 && opcode == `FP_OPCODE) begin
        if(issp) begin
          `logLevel( fpu, 0, $format("FPU: FTOI: op1: %h, f3: %b, ~imm[0]: %b, imm[1] = %b", op1, f3, ~imm[0], imm[1]))
          sptoi.request(truncate(op1), f3, ~imm[0], imm[1]);
        end
      `ifdef dpfpu
        else begin
          dptoi.request(op1, f3, ~imm[0], imm[1]);
        end
      `endif
      end
      //FP to FP convert
    `ifdef dpfpu
      else if((f7[6:2] == `FCVT_S_D_f5) && opcode == `FP_OPCODE)begin
        if(!issp) begin
          `logLevel( fpu, 0, $format("FPU: Convert SP to DP: %x", op1))
          sptodp.request(truncate(op1), f3);
        end
        else begin
          `logLevel( fpu, 0, $format("FPU: Convert DP to SP: %x", op1))
          dptosp.request(op1, f3);
        end
      end
    `endif
      //FCLASS
      else if((f7[6:2] == `FCLASS_f5 && f3=='b001) && opcode == `FP_OPCODE) begin
        `logLevel( fpu, 0, $format("FPU: Classify: op1: %h", op1))
        if(issp) begin
          tx_fbox_out.u.enq(tuple2( zeroExtend(spfclass.request(truncate(op1))), 0));
        end
      `ifdef dpfpu
        else begin
          tx_fbox_out.u.enq(tuple2( dpfclass.request(op1), 0));
        end
      `endif
      end
      //Move
      else if(((f7 == `FMV_X_S_f7 || f7 == `FMV_S_X_f7 `ifdef dpfpu || f7 == `FMV_X_D_f7 || f7 == `FMV_D_X_f7 `endif )
                                                  && f3 == 'b000) && opcode == `FP_OPCODE) begin
        Bit#(`elen) final_result=0;
        if(f7==`FMV_X_S_f7) // sp to integer FMV.X.W
          final_result = signExtend(op1[31:0]);
        else if(f7==`FMV_S_X_f7) begin // integer to sp FMV.W.X
      `ifdef dpfpu
          final_result = {'1,op1[31:0]};
      `else
          final_result= zeroExtend(op1[31:0]);
      `endif
        end
      `ifdef dpfpu
        else begin
          final_result= op1;
        end
      `endif
        tx_fbox_out.u.enq(tuple2( final_result, 0));
      end
      //ADD SUB
      else if((f7[6:2] == `FADD_f5 || f7[6:2] == `FSUB_f5) && opcode == `FP_OPCODE) begin
        `logLevel( fpu, 0, $format("FPU: Add/Sub: f7[3:2]: %b, op1: %h, op2: %h, f3: %b",f7[3:2], op1, op2, f3))
        if(issp) begin
          Bit#(7) exp_ones = '1;
          Bit#(23) sig_zero = '0;
          Bit#(32) _op2 = {1'b0, 1'b0, exp_ones, sig_zero};
          spfma.request(f7[3:2], truncate(op1), _op2, truncate(op2), f3);
        end
      `ifdef dpfpu
        else begin
          Bit#(10) exp_ones = '1;
          Bit#(52) sig_zero = '0;
          Bit#(`elen) _op2 = {1'b0, 1'b0, exp_ones, sig_zero};
          dpfma.request(f7[3:2], op1, _op2, op2, f3);
        end
      `endif
      end
        //MUL
      else if(f7[6:2] == `FMUL_f5 && opcode == `FP_OPCODE) begin
        `logLevel( fpu, 0, $format("FPU: Mul: op1: %h, op2: %h, f3: %b", op1, op2, f3))
        if(issp) begin
          Bit#(`elen) _op3 = 0;
          _op3[31] = op1[31] ^ op2[31];
          spfma.request(2'b00, truncate(op1), truncate(op2), truncate(_op3), f3);
        end
      `ifdef dpfpu
        else begin
          Bit#(`elen) _op3 = 0;
          _op3[valueOf(`elen)-1] = op1[valueOf(`elen)-1] ^ op2[valueOf(`elen)-1];
          dpfma.request(2'b00, op1, op2, _op3, f3);
        end
      `endif
      end
        //Fused MUL ADD/SUB
      else if(opcode == `FMADD || opcode == `FMSUB || opcode == `FNMSUB || opcode == `FNMADD) begin
        `logLevel( fpu, 0, $format("FPU: FMA: op1: %h, op2: %h, op3: %h f3: %b", op1, op2, op3, f3))
        if(issp)
          spfma.request(opcode[1:0], truncate(op1), truncate(op2), truncate(op3), f3);
      `ifdef dpfpu
        else
          dpfma.request(opcode[1:0], op1, op2, op3, f3);
      `endif
      end
      //DIV SQRT
      else if((f7[6:2] == `FDIV_f5 || f7[6:2] == `FSQRT_f5) && opcode == `FP_OPCODE) begin
        wr_inValid <=  1;
        wr_f3 <=  f3;
        wr_op1 <=  op1;
        wr_op2 <=  op2;
        wr_issp <= issp;
        if(f7[6:2] == `FDIV_f5) begin
          wr_sqrtop <=  0;
          `logLevel( fpu, 0, $format("FPU: Division: op1: %h, op2: %h, f3: %b", op1, op2, f3))
        end
        else begin
          wr_sqrtop <=  1;
          `logLevel( fpu, 0, $format("FPU: Sqrt: op1: %h, f3: %b", op1, f3))
        end
      end
    endrule

    rule rl_output_spfma(spfma.resp_valid);
      let res = spfma.response;
      let flag= tpl_2(res);
      Bit#(`elen) out;
    `ifdef dpfpu
      out={'1,tpl_1(res)[31:0]};
    `else
      out=zeroExtend(tpl_1(res));
    `endif
      `logLevel( fpu, 0, $format("FPU: SPFMA: out: %h, flag: %b", out, flag))
      tx_fbox_out.u.enq(tuple2( out, flag));
    endrule:rl_output_spfma

  `ifdef dpfpu
    rule rl_output_dpfma(dpfma.resp_valid);
      let {out,flag} = dpfma.response;
      `logLevel( fpu, 0, $format("FPU: DPFMA: out: %h, flag: %b", out, flag))
      tx_fbox_out.u.enq(tuple2( out, flag));
    endrule:rl_output_dpfma
  `endif

    rule rl_output_spdiv_sqrt(spdiv_sqrt.ooutValid && rg_issp);
      let res = spdiv_sqrt.oout;
      let flag = spdiv_sqrt.oexceptionFlags;
      Bit#(`elen) out;
    `ifdef dpfpu
      out={'1,res[31:0]};
    `else
      out=zeroExtend(res);
    `endif
      `logLevel( fpu, 0, $format("FPU: SPDiv Sqrt: out: %h, flag: %b", out, flag))
      tx_fbox_out.u.enq(tuple2( out, flag));
    endrule:rl_output_spdiv_sqrt

  `ifdef dpfpu
    rule rl_output_dpdiv_sqrt(dpdiv_sqrt.ooutValid && !rg_issp);
      let out = dpdiv_sqrt.oout;
      let flag = dpdiv_sqrt.oexceptionFlags;
      `logLevel( fpu, 0, $format("FPU: DPDiv Sqrt: out: %h, flag: %b", out, flag))
      tx_fbox_out.u.enq(tuple2( out, flag));
    endrule:rl_output_dpdiv_sqrt
  `endif

    rule rl_output_sptoi(sptoi.resp_valid);
      let {lv_out, lv_flag, lv_meta}= sptoi.response;
      Bit#(`elen) out;
      Bit#(5) flag;
      `logLevel( fpu, 0, $format("FPU: from hardfloat: out: %h, flag: %b meta: %b", lv_out, lv_flag, lv_meta))
    `ifdef RV64
      if (lv_meta[0] == 0)
        {out, flag} = compensate_for_32bit_int(rg_input.op1[31], lv_out, lv_flag, lv_meta[1]);
      else
        {out, flag} = compensate_for_64bit_int(rg_input.op1[31], lv_out, lv_flag, lv_meta[1]);
    `else
      {out, flag} = compensate_for_32bit_int(rg_input.op1[31], lv_out, lv_flag, lv_meta[1]);
    `endif
      `logLevel( fpu, 0, $format("FPU: Output SPTOI: out: %h, flag: %b", out, flag))
      tx_fbox_out.u.enq(tuple2( out, flag));
    endrule:rl_output_sptoi

  `ifdef dpfpu
    rule rl_output_dptoi(dptoi.resp_valid);
      let {lv_out, lv_flag, lv_meta}= dptoi.response;
      `logLevel( fpu, 0, $format("FPU: from hardfloat: out: %h, flag: %b meta: %b", lv_out, lv_flag, lv_meta))
      Bit#(`elen) out;
      Bit#(5) flag;
      if (lv_meta[0] == 0)
        {out, flag} = compensate_for_32bit_int(rg_input.op1[63], lv_out, lv_flag, lv_meta[1]);
      else
        {out, flag} = compensate_for_64bit_int(rg_input.op1[63], lv_out, lv_flag, lv_meta[1]);
      `logLevel( fpu, 0, $format("FPU: DPTOI: out: %h, flag: %b", out, flag))
      tx_fbox_out.u.enq(tuple2( out, flag));
    endrule:rl_output_dptoi
  `endif

    rule rl_output_itosp(itosp.resp_valid);
      let {out,flag} = itosp.response;
      `logLevel( fpu, 0, $format("FPU: ITOSP: out: %h, flag: %b", out, flag))
      tx_fbox_out.u.enq(tuple2( `ifdef dpfpu {'1,out} `else zeroExtend(out) `endif , flag));
    endrule:rl_output_itosp

  `ifdef dpfpu
    rule rl_output_itodp(itodp.resp_valid);
      let {out,flag} = itodp.response;
      `logLevel( fpu, 0, $format("FPU: ITODP: out: %h, flag: %b", out, flag))
      tx_fbox_out.u.enq(tuple2( out, flag));
    endrule:rl_output_itodp

    rule rl_output_sptodp(sptodp.resp_valid);
      let {out,flag} = sptodp.response;
      `logLevel( fpu, 0, $format("FPU: SPTODP: out: %h, flag: %b", out, flag))
      tx_fbox_out.u.enq(tuple2( out, flag));
    endrule:rl_output_sptodp

    rule rl_output_dptosp(dptosp.resp_valid);
      let {out,flag} = dptosp.response;
      `logLevel( fpu, 0, $format("FPU: DPTOSP: out: %h, flag: %b", out, flag))
      tx_fbox_out.u.enq(tuple2( {'1,out}, flag));
    endrule:rl_output_dptosp
  `endif

    method Action ma_inputs(FBoxIn in)if (spdiv_sqrt.oinReady() && !rg_valid);
      rg_valid <= True;
      rg_input <= in;
    endmethod: ma_inputs

    method mv_ready = spdiv_sqrt.oinReady() && !rg_valid;
    method tx_output = tx_fbox_out.e;

  endmodule:mkfpu

endpackage:fpu
