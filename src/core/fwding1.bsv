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
  import BUtils::*;

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
    Wire#(FwdType) wr_from_pipe3        <- mkWire();
    Wire#(FwdType) wr_from_pipe4_first  <- mkWire();
    Reg#(CommitData) rg_recent_commit <-mkReg(unpack(0));
    Reg#(CommitData) rg_recentm1_commit <-mkReg(unpack(0));
  `ifdef PIPE2
    Wire#(FwdType) wr_from_pipe4_second <- mkWire();
    Reg#(CommitData) rg_recentm2_commit <-mkReg(unpack(0));
  `endif
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs1(Bit#(ELEN) val, Bit#(5) addr 
                                                              `ifdef spfpu , RFType rftype `endif );
      Bool available = True;
      Bit#(ELEN) returnval=val;
      let {p3valid, p3_avail, p3_addr, p3_val `ifdef spfpu ,p3_rf `endif } = wr_from_pipe3;
    `ifdef PIPE2
      let {p4valid, p4_avail, p4_addr, p4_val `ifdef spfpu ,p4_rf `endif } = wr_from_pipe4_second;
    `endif
      let {p5valid, p5_avail, p5_addr, p5_val `ifdef spfpu , p5_rf `endif } =wr_from_pipe4_first;
      let {p6_addr,p6_val `ifdef spfpu ,p6_rf `endif }=rg_recent_commit;
      let {p7_addr,p7_val `ifdef spfpu ,p7_rf `endif }=rg_recentm1_commit;
    `ifdef PIPE2
      let {p8_addr,p8_val `ifdef spfpu ,p8_rf `endif }=rg_recentm2_commit;
    `endif
      Bool pick_p3 = p3_addr == addr && p3valid `ifdef spfpu && p3_rf==rftype `endif ;
      Bool pick_p4 = !pick_p3 && p4_addr == addr && p4valid `ifdef spfpu && p4_rf==rftype `endif ;
      Bool pick_p5 = !pick_p4 && !pick_p3 && p5_addr == addr && p5valid `ifdef spfpu && p5_rf==rftype `endif ;
      Bool pick_p6 = !pick_p5 && !pick_p3 && !pick_p4 && p6_addr == addr `ifdef spfpu && p6_rf==rftype `endif ;
      Bool pick_p7 = !pick_p6 && !pick_p3 && !pick_p4 && !pick_p5 && p7_addr == addr `ifdef spfpu && p7_rf==rftype `endif ;
      Bool pick_p8 = !pick_p7 && !pick_p3 && !pick_p4 && !pick_p5 && !pick_p6 && p8_addr == addr `ifdef spfpu && p8_rf==rftype `endif ;
      let d3 = duplicate(pack(pick_p3)) & p3_val;
      let d4 = duplicate(pack(pick_p4)) & p4_val;
      let d5 = duplicate(pack(pick_p5)) & p5_val;
      let d6 = duplicate(pack(pick_p6)) & p6_val;
      let d7 = duplicate(pack(pick_p7)) & p7_val;
      let d8 = duplicate(pack(pick_p8)) & p8_val;
      Bit#(6) pick = {pack(pick_p3), pack(pick_p4), pack(pick_p5), pack(pick_p6), pack(pick_p7),
                              pack(pick_p8)};
      if(addr!=0 `ifdef spfpu || rftype==FRF `endif )begin
        if(pick!=0)
          returnval = d3|d4|d5|d6|d7|d8;
      end

      if(addr!=0 `ifdef spfpu || rftype==FRF `endif )begin
        if(pick_p3 && !p3_avail)
          available=False;
      `ifdef PIPE2
        else if(pick_p4 && !p4_avail )
          available=False;
      `endif
        else if(pick_p5 && !p5_avail )
          available=False;
      end
      if(verbosity>2)begin
        $display($time,"\tFWDING: Returning RS1 Avail: %b Val: %h",available,returnval);
      end
      return tuple2(available,returnval);
    endmethod
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs2(Bit#(ELEN) val, Bit#(5) addr 
                                                              `ifdef spfpu , RFType rftype `endif );
      Bool available = True;
      Bit#(ELEN) returnval=val;
      let {p3valid, p3_avail, p3_addr, p3_val `ifdef spfpu ,p3_rf `endif } = wr_from_pipe3;
    `ifdef PIPE2
      let {p4valid, p4_avail, p4_addr, p4_val `ifdef spfpu ,p4_rf `endif } = wr_from_pipe4_second;
    `endif
      let {p5valid, p5_avail, p5_addr, p5_val `ifdef spfpu , p5_rf `endif } =wr_from_pipe4_first;
      let {p6_addr,p6_val `ifdef spfpu ,p6_rf `endif }=rg_recent_commit;
      let {p7_addr,p7_val `ifdef spfpu ,p7_rf `endif }=rg_recentm1_commit;
    `ifdef PIPE2
      let {p8_addr,p8_val `ifdef spfpu ,p8_rf `endif }=rg_recentm2_commit;
    `endif
      Bool pick_p3 = p3_addr == addr && p3valid `ifdef spfpu && p3_rf==rftype `endif ;
      Bool pick_p4 = !pick_p3 && p4_addr == addr && p4valid `ifdef spfpu && p4_rf==rftype `endif ;
      Bool pick_p5 = !pick_p4 && !pick_p3 && p5_addr == addr && p5valid `ifdef spfpu && p5_rf==rftype `endif ;
      Bool pick_p6 = !pick_p5 && !pick_p3 && !pick_p4 && p6_addr == addr `ifdef spfpu && p6_rf==rftype `endif ;
      Bool pick_p7 = !pick_p6 && !pick_p3 && !pick_p4 && !pick_p5 && p7_addr == addr `ifdef spfpu && p7_rf==rftype `endif ;
      Bool pick_p8 = !pick_p7 && !pick_p3 && !pick_p4 && !pick_p5 && !pick_p6 && p8_addr == addr `ifdef spfpu && p8_rf==rftype `endif ;
      let d3 = duplicate(pack(pick_p3)) & p3_val;
      let d4 = duplicate(pack(pick_p4)) & p4_val;
      let d5 = duplicate(pack(pick_p5)) & p5_val;
      let d6 = duplicate(pack(pick_p6)) & p6_val;
      let d7 = duplicate(pack(pick_p7)) & p7_val;
      let d8 = duplicate(pack(pick_p8)) & p8_val;
      Bit#(6) pick = {pack(pick_p3), pack(pick_p4), pack(pick_p5), pack(pick_p6), pack(pick_p7),
                              pack(pick_p8)};
      if(addr!=0 `ifdef spfpu || rftype==FRF `endif )begin
        if(pick!=0)
          returnval = d3|d4|d5|d6|d7|d8;
      end

      if(addr!=0 `ifdef spfpu || rftype==FRF `endif )begin
        if(pick_p3 && !p3_avail)
          available=False;
      `ifdef PIPE2
        else if(pick_p4 && !p4_avail )
          available=False;
      `endif
        else if(pick_p5 && !p5_avail )
          available=False;
      end
      if(verbosity>2)begin
        $display($time,"\tFWDING: Returning RS1 Avail: %b Val: %h",available,returnval);
      end
      return tuple2(available,returnval);
    endmethod
/*    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs2(Bit#(ELEN) val, Bit#(5) addr `ifdef spfpu
                                                                          , RFType rftype `endif );
      Bool available = True;
      Bit#(ELEN) rs2val = val;
      let {p3_avail, p3_addr, p3_val `ifdef spfpu ,p3_rf `endif } = fromMaybe(unpack(0),wr_from_pipe3);
    `ifdef PIPE2
      let {p4_avail, p4_addr, p4_val `ifdef spfpu .p4_rf `endif } = fromMaybe(unpack(0),wr_from_pipe4_second);
      let p4valid = isValid(wr_from_pipe4_second);
    `endif
      let {p5_avail, p5_addr, p5_val `ifdef spfpu , p5_rf `endif } = fromMaybe(unpack(0),wr_from_pipe4_first);
      let {p6_addr,p6_val `ifdef spfpu ,p6_rf `endif }=rg_recent_commit;
      let {p7_addr,p7_val `ifdef spfpu ,p7_rf `endif }=rg_recentm1_commit;
    `ifdef PIPE2
      let {p8_addr,p8_val `ifdef spfpu ,p8_rf `endif }=rg_recentm2_commit;
    `endif
      let p3valid = isValid(wr_from_pipe3);
      let p5valid = isValid(wr_from_pipe4_first);
      Bit#(1) pick_p3 = pack(p3_addr == addr && p3valid);
      Bit#(1) pick_p4 = pack(p4_addr == addr && p4valid);
      Bit#(1) pick_p5 = pack(p5_addr == addr && p5valid);
      Bit#(1) pick_p6 = pack(p6_addr == addr) ;
      Bit#(1) pick_p7 = pack(p7_addr == addr) ;
      Bit#(1) pick_p8 = pack(p8_addr == addr) ;
      Bit#(6) pick = {pick_p3, pick_p4, pick_p5, pick_p6, pick_p7, pick_p8};
      if(addr!=0 `ifdef spfpu || rftype==FRF `endif )begin
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

//      if(addr!=0 `ifdef spfpu || rftype==FRF `endif )begin
//        if(p3_addr==addr && p3valid && !p3_avail `ifdef spfpu && p3_rf==rftype `endif )
//          available=False;
//      `ifdef PIPE2
//        else if(p4_addr==addr && p4valid && !p4_avail `ifdef spfpu && p4_rf==rftype `endif )
//          available=False;
//      `endif
//        else if(p5_addr==addr && p5valid && !p5_avail `ifdef spfpu && p5_rf==rftype `endif )
//          available=False;
//      end
      if(verbosity>2)
        $display($time,"\tFWDING: Returning RS2 Avail: %b Val: %h",available,rs2val);
      return tuple2(available,rs2val);
    endmethod
*/
  `ifdef spfpu
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs3(Bit#(ELEN) val, Bit#(5) addr 
                                                              `ifdef spfpu , RFType rftype `endif );
      Bool available = True;
      Bit#(ELEN) returnval=val;
      let {p3valid, p3_avail, p3_addr, p3_val `ifdef spfpu ,p3_rf `endif } = wr_from_pipe3;
    `ifdef PIPE2
      let {p4valid, p4_avail, p4_addr, p4_val `ifdef spfpu ,p4_rf `endif } = wr_from_pipe4_second;
    `endif
      let {p5valid, p5_avail, p5_addr, p5_val `ifdef spfpu , p5_rf `endif } =wr_from_pipe4_first;
      let {p6_addr,p6_val `ifdef spfpu ,p6_rf `endif }=rg_recent_commit;
      let {p7_addr,p7_val `ifdef spfpu ,p7_rf `endif }=rg_recentm1_commit;
    `ifdef PIPE2
      let {p8_addr,p8_val `ifdef spfpu ,p8_rf `endif }=rg_recentm2_commit;
    `endif
      Bool pick_p3 = p3_addr == addr && p3valid `ifdef spfpu && p3_rf==FRF `endif ;
      Bool pick_p4 = !pick_p3 && p4_addr == addr && p4valid `ifdef spfpu && p4_rf==FRF `endif ;
      Bool pick_p5 = !pick_p4 && !pick_p3 && p5_addr == addr && p5valid `ifdef spfpu && p5_rf==FRF `endif ;
      Bool pick_p6 = !pick_p5 && !pick_p3 && !pick_p4 && p6_addr == addr `ifdef spfpu && p6_rf==FRF `endif ;
      Bool pick_p7 = !pick_p6 && !pick_p3 && !pick_p4 && !pick_p5 && p7_addr == addr `ifdef spfpu && p7_rf==FRF `endif ;
      Bool pick_p8 = !pick_p7 && !pick_p3 && !pick_p4 && !pick_p5 && !pick_p6 && p8_addr == addr `ifdef spfpu && p8_rf==FRF `endif ;
      let d3 = duplicate(pack(pick_p3)) & p3_val;
      let d4 = duplicate(pack(pick_p4)) & p4_val;
      let d5 = duplicate(pack(pick_p5)) & p5_val;
      let d6 = duplicate(pack(pick_p6)) & p6_val;
      let d7 = duplicate(pack(pick_p7)) & p7_val;
      let d8 = duplicate(pack(pick_p8)) & p8_val;
      Bit#(6) pick = {pack(pick_p3), pack(pick_p4), pack(pick_p5), pack(pick_p6), pack(pick_p7),
                              pack(pick_p8)};
      if(addr!=0 `ifdef spfpu || rftype==FRF `endif )begin
        if(pick!=0)
          returnval = d3|d4|d5|d6|d7|d8;
      end

      if(addr!=0 `ifdef spfpu || rftype==FRF `endif )begin
        if(pick_p3 && !p3_avail)
          available=False;
      `ifdef PIPE2
        else if(pick_p4 && !p4_avail )
          available=False;
      `endif
        else if(pick_p5 && !p5_avail )
          available=False;
      end
      if(verbosity>2)begin
        $display($time,"\tFWDING: Returning RS1 Avail: %b Val: %h",available,returnval);
      end
      return tuple2(available,returnval);
    endmethod
  `endif
    method Action fwd_from_pipe3 (FwdType fwd);
      wr_from_pipe3 <= fwd;
    endmethod
    method Action fwd_from_pipe4_first (FwdType fwd);
      wr_from_pipe4_first<= fwd;
    endmethod
  `ifdef PIPE2
    method Action fwd_from_pipe4_second (FwdType fwd);
      wr_from_pipe4_second <= fwd;
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
  
//  interface Ifc_Tb;
//    method Action fwd_from_pipe3 (FwdType fwd);
//    method Action fwd_from_pipe4_first (FwdType fwd);
//  `ifdef PIPE2
//    method Action fwd_from_pipe4_second (FwdType fwd);
//  `endif
//    method Action latest_commit(CommitData c);
//    method Action read_rs1(Bit#(ELEN) val, Bit#(5) addr 
//                                                  `ifdef spfpu , RFType rftype `endif );
////    method Action read_rs2(Bit#(ELEN) val, Bit#(5) addr 
////                                                  `ifdef spfpu , RFType rftype `endif );
//    method Bit#(ELEN) result_out;
//  `ifdef spfpu
//    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs3(Bit#(ELEN) val, Bit#(5) addr, RFType rftype);
//  `endif
//  endinterface
//
//  module mkTb(Ifc_Tb);
//    Ifc_fwding fwding <-mkfwding();
//    Reg#(FwdType) rg_pipe3 <- mkReg(?);
//    Reg#(FwdType) rg_pipe4 <- mkReg(?);
//    Reg#(FwdType) rg_pipe4_1 <- mkReg(?);
//    Reg#(Tuple2#(Bit#(ELEN),Bit#(5))) rg_req1 <- mkReg(unpack(0));
//    Reg#(Tuple2#(Bit#(ELEN),Bit#(5))) rg_req2 <- mkReg(unpack(0));
//    Reg#(CommitData) rg_commit <- mkReg(unpack(0));
//
//    Reg#(Bit#(ELEN)) rg_result<- mkReg(0);
//    rule connect;
//      fwding.fwd_from_pipe3(rg_pipe3);
//      fwding.fwd_from_pipe4_first(rg_pipe4);
//      fwding.fwd_from_pipe4_second(rg_pipe4_1);
//    endrule
//    rule read_operands;
//      let {val1,addr1} = rg_req1;
//      let {val2,addr2} = rg_req2;
//      let {avail1,op1} <- fwding.read_rs1(val1,addr1);
////      let {avail2,op2} <- fwding.read_rs2(val2,addr2);
//      if(avail1)
//        rg_result <= op1+op1;
//    endrule
//
//    rule rllatest_commit;
//      fwding.latest_commit(rg_commit);
//    endrule
//
//    method Action fwd_from_pipe3 (FwdType fwd);
//      rg_pipe3<=fwd;
//    endmethod
//    method Action fwd_from_pipe4_first (FwdType fwd);
//      rg_pipe4<=fwd;
//    endmethod
//  `ifdef PIPE2
//    method Action fwd_from_pipe4_second (FwdType fwd);
//      rg_pipe4_1<=fwd;
//    endmethod
//  `endif
//    method Action latest_commit(CommitData c);
//      rg_commit<=c;
//    endmethod
//    method Action read_rs1(Bit#(ELEN) val, Bit#(5) addr 
//                                                  `ifdef spfpu , RFType rftype `endif );
//      rg_req1<=tuple2(val,addr);
//    endmethod
////    method Action read_rs2(Bit#(ELEN) val, Bit#(5) addr 
////                                                  `ifdef spfpu , RFType rftype `endif );
////      rg_req2<=tuple2(val,addr);
////    endmethod
//    method result_out=rg_result;
//  endmodule

endpackage
