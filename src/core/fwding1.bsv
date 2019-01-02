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
package fwding1;
  import common_types::*;
  `include "common_params.bsv"
  import Vector::*;
  import GetPut::*;

  interface Ifc_fwding;
    method Action fwd_from_pipe3 (FwdType fwd);
    method Action fwd_from_pipe4_first (FwdType fwd);
  `ifdef PIPE2
    method Action fwd_from_pipe4_second (FwdType fwd);
  `endif
    method Action latest_commit(CommitData c);
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs1(Bit#(ELEN) val, Bit#(5) addr 
                                                  `ifdef spfpu , RFType rftype `endif );
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs2(Bit#(ELEN) val, Bit#(5) addr 
                                                  `ifdef spfpu , RFType rftype `endif );
  `ifdef spfpu
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs3(Bit#(ELEN) val, Bit#(5) addr, RFType rftype);
  `endif
  endinterface

  (*synthesize*)
  module mkfwding(Ifc_fwding);
    let verbosity = `VERBOSITY ;
    Wire#(Maybe#(FwdType)) wr_from_pipe3        <- mkDWire(tagged Invalid );
    Wire#(Maybe#(FwdType)) wr_from_pipe4_first  <- mkDWire(tagged Invalid );
    Reg#(CommitData) rg_recent_commit <-mkReg(tuple3(0,0,IRF));
    Reg#(CommitData) rg_recentm1_commit <-mkReg(tuple3(0,0,IRF));
  `ifdef PIPE2
    Wire#(Maybe#(FwdType)) wr_from_pipe4_second <- mkDWire(tagged Invalid );
    Reg#(CommitData) rg_recentm2_commit <-mkReg(tuple3(0,0,IRF));
  `endif
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs1(Bit#(ELEN) val, Bit#(5) addr 
                                                              `ifdef spfpu , RFType rftype `endif );
      Bool available = True;
      Bit#(ELEN) rs1val = val;
      let {p3_avail, p3_addr, p3_val, p3_rf} = fromMaybe(tuple4(False,0,0,IRF),wr_from_pipe3);
    `ifdef PIPE2
      let {p4_avail, p4_addr, p4_val, p4_rf} = fromMaybe(tuple4(False,0,0,IRF),wr_from_pipe4_second);
      let p4valid = isValid(wr_from_pipe4_second);
    `endif
      let {p5_avail, p5_addr, p5_val, p5_rf} = fromMaybe(tuple4(False,0,0,IRF),wr_from_pipe4_first);
      let {p6_addr,p6_val,p6_rf}=rg_recent_commit;
      let {p7_addr,p7_val,p7_rf}=rg_recentm1_commit;
    `ifdef PIPE2
      let {p8_addr,p8_val,p8_rf}=rg_recentm2_commit;
    `endif
      let p3valid = isValid(wr_from_pipe3);
      let p5valid = isValid(wr_from_pipe4_first);
      if(addr!=0 || rftype==FRF)begin
        if(p3_addr==addr && p3valid `ifdef spfpu && p3_rf==rftype `endif )
          rs1val=p3_val;
      `ifdef PIPE2
        else if(p4_addr==addr && p4valid `ifdef spfpu && p4_rf == rftype `endif )
          rs1val=p4_val;
      `endif
        else if(p5_addr==addr && p5valid `ifdef spfpu && p5_rf == rftype `endif )
          rs1val=p5_val;
        else if(p6_addr==addr `ifdef spfpu && p6_rf == rftype `endif )
          rs1val=p6_val;
        else if(p7_addr==addr `ifdef spfpu && p7_rf == rftype `endif )
          rs1val=p7_val;
      `ifdef PIPE2
        else if(p8_addr==addr `ifdef spfpu && p8_rf == rftype `endif )
          rs1val=p8_val;
      `endif
      end

      if(addr!=0 || rftype==FRF)begin
        if(p3_addr==addr && p3valid && !p3_avail `ifdef spfpu && p3_rf==rftype `endif )
          available=False;
      `ifdef PIPE2
        else if(p4_addr==addr && p4valid && !p4_avail `ifdef spfpu && p4_rf==rftype `endif )
          available=False;
      `endif
        else if(p5_addr==addr && p5valid && !p5_avail `ifdef spfpu && p5_rf==rftype `endif )
          available=False;
      end
      if(verbosity>2)begin
        $display($time,"\tFWDING: Returning RS1 Avail: %b Val: %h",available,rs1val);
        $display($time,"\tFWDING: rg_recent_commit: ",fshow(rg_recent_commit));
        $display($time,"\tFWDING: rg_recentm1_commit: ",fshow(rg_recentm1_commit));
      end
      return tuple2(available,rs1val);
    endmethod
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs2(Bit#(ELEN) val, Bit#(5) addr, RFType rftype);
      Bool available = True;
      Bit#(ELEN) rs2val = val;
      let {p3_avail, p3_addr, p3_val, p3_rf} = fromMaybe(tuple4(False,0,0,IRF),wr_from_pipe3);
    `ifdef PIPE2
      let {p4_avail, p4_addr, p4_val, p4_rf} = fromMaybe(tuple4(False,0,0,IRF),wr_from_pipe4_second);
      let p4valid = isValid(wr_from_pipe4_second);
    `endif
      let {p5_avail, p5_addr, p5_val, p5_rf} = fromMaybe(tuple4(False,0,0,IRF),wr_from_pipe4_first);
      let {p6_addr,p6_val,p6_rf}=rg_recent_commit;
      let {p7_addr,p7_val,p7_rf}=rg_recentm1_commit;
    `ifdef PIPE2
      let {p8_addr,p8_val,p8_rf}=rg_recentm2_commit;
    `endif
      let p3valid = isValid(wr_from_pipe3);
      let p5valid = isValid(wr_from_pipe4_first);
      if(addr!=0 || rftype==FRF)begin
        if(p3_addr==addr && p3valid `ifdef spfpu && p3_rf==rftype `endif )
          rs2val=p3_val;
      `ifdef PIPE2
        else if(p4_addr==addr && p4valid `ifdef spfpu && p4_rf == rftype `endif )
          rs2val=p4_val;
      `endif
        else if(p5_addr==addr && p5valid `ifdef spfpu && p5_rf == rftype `endif )
          rs2val=p5_val;
        else if(p6_addr==addr `ifdef spfpu && p6_rf == rftype `endif )
          rs2val=p6_val;
        else if(p7_addr==addr `ifdef spfpu && p7_rf == rftype `endif )
          rs2val=p7_val;
      `ifdef PIPE2
        else if(p8_addr==addr `ifdef spfpu && p8_rf == rftype `endif )
          rs2val=p8_val;
      `endif
      end

      if(addr!=0 || rftype==FRF)begin
        if(p3_addr==addr && p3valid && !p3_avail `ifdef spfpu && p3_rf==rftype `endif )
          available=False;
      `ifdef PIPE2
        else if(p4_addr==addr && p4valid && !p4_avail `ifdef spfpu && p4_rf==rftype `endif )
          available=False;
      `endif
        else if(p5_addr==addr && p5valid && !p5_avail `ifdef spfpu && p5_rf==rftype `endif )
          available=False;
      end
      if(verbosity>2)
        $display($time,"\tFWDING: Returning RS2 Avail: %b Val: %h",available,rs2val);
      return tuple2(available,rs2val);
    endmethod
  `ifdef spfpu
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs3(Bit#(ELEN) val, Bit#(5) addr, RFType rftype);
      Bool available = True;
      Bit#(ELEN) rs3val = val;
      let {p3_avail, p3_addr, p3_val, p3_rf} = fromMaybe(tuple4(False,0,0,IRF),wr_from_pipe3);
    `ifdef PIPE2
      let {p4_avail, p4_addr, p4_val, p4_rf} = fromMaybe(tuple4(False,0,0,IRF),wr_from_pipe4_second);
      let p4valid = isValid(wr_from_pipe4_second);
    `endif
      let {p5_avail, p5_addr, p5_val, p5_rf} = fromMaybe(tuple4(False,0,0,IRF),wr_from_pipe4_first);
      let {p6_addr,p6_val,p6_rf}=rg_recent_commit;
      let {p7_addr,p7_val,p7_rf}=rg_recentm1_commit;
    `ifdef PIPE2
      let {p8_addr,p8_val,p8_rf}=rg_recentm2_commit;
    `endif
      let p3valid = isValid(wr_from_pipe3);
      let p5valid = isValid(wr_from_pipe4_first);
      if(addr!=0 || rftype==FRF)begin
        if(p3_addr==addr && p3valid && p3_rf == FRF )
          rs3val=p3_val;
      `ifdef PIPE2
        else if(p4_addr==addr && p4valid && p4_rf == FRF )
          rs3val=p4_val;
      `endif
        else if(p5_addr==addr && p5valid && p5_rf == FRF )
          rs3val=p5_val;
        else if(p6_addr==addr && p6_rf == FRF )
          rs3val=p6_val;
        else if(p7_addr==addr && p7_rf == FRF )
          rs3val=p7_val;
      `ifdef PIPE2
        else if(p8_addr==addr && p8_rf == FRF )
          rs3val=p8_val;
      `endif
      end

      if(addr!=0 || rftype==FRF)begin
        if(p3_addr==addr && p3valid && !p3_avail      && p3_rf==FRF )
          available=False;
      `ifdef PIPE2
        else if(p4_addr==addr && p4valid && !p4_avail && p4_rf==FRF )
          available=False;
      `endif
        else if(p5_addr==addr && p5valid && !p5_avail && p5_rf==FRF )
          available=False;
      end
      if(verbosity>2)
        $display($time,"\tFWDING: Returning RS3 Avail: %b Val: %h",available,rs3val);
      return tuple2(available,rs3val);
    endmethod
  `endif
    method Action fwd_from_pipe3 (FwdType fwd);
      wr_from_pipe3 <= tagged Valid fwd;
    endmethod
    method Action fwd_from_pipe4_first (FwdType fwd);
      wr_from_pipe4_first<= tagged Valid fwd;
    endmethod
  `ifdef PIPE2
    method Action fwd_from_pipe4_second (FwdType fwd);
      wr_from_pipe4_second <= tagged Valid fwd;
    endmethod
  `endif
    method Action latest_commit(CommitData c);
      rg_recent_commit<=c;
      rg_recentm1_commit<=rg_recent_commit;
  `ifdef PIPE2
      rg_recentm2_commit<=rg_recentm1_commit;
  `endif
    endmethod
  endmodule

endpackage
