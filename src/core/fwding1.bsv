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
    method Action fwd_from_pipe4_second (FwdType fwd);
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs1(Bit#(ELEN) val, Bit#(5) addr 
                                                  `ifdef spfpu , RFType rftype `endif );
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs2(Bit#(ELEN) val, Bit#(5) addr 
                                                  `ifdef spfpu , RFType rftype `endif );
  `ifdef spfpu
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs3(Bit#(ELEN) val, Bit#(5) addr);
  `endif
  endinterface

  (*synthesize*)
  module mkfwding(Ifc_fwding);
    Wire#(FwdType) wr_from_pipe3 <- mkWire();
    Wire#(FwdType) wr_from_pipe4_first <- mkWire();
    Wire#(FwdType) wr_from_pipe4_second <- mkWire();
    method Action fwd_from_pipe3 (FwdType fwd);
      wr_from_pipe3<=fwd;
    endmethod
    method Action fwd_from_pipe4_first (FwdType fwd);
      wr_from_pipe4_first<=fwd;
    endmethod
    method Action fwd_from_pipe4_second (FwdType fwd);
      wr_from_pipe4_second<=fwd;
    endmethod
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs1(Bit#(ELEN) val, Bit#(5) addr 
                                                              `ifdef spfpu , RFType rftype `endif );
      Bool available = True;
      Bit#(ELEN) rs1val = val;
      let {p3_avail, p3_addr, p3_val, p3_rf} = wr_from_pipe3;
      let {p4_avail, p4_addr, p4_val, p4_rf} = wr_from_pipe4_first;
      let {p5_avail, p5_addr, p5_val, p5_rf} = wr_from_pipe4_second;
      if(addr==0 `ifdef spfpu && rftype==IRF `endif )
        rs1val=0;
      else if(p3_addr==addr `ifdef spfpu && p3_rf==rftype `endif )
        rs1val=p3_val;
      else if(p4_addr==addr `ifdef spfpu && p4_rf == rftype `endif )
        rs1val=p4_val;
      else if(p5_addr==addr `ifdef spfpu && p5_rf == rftype `endif )
        rs1val=p5_val;

      if(p3_addr==addr && !p3_avail `ifdef spfpu && p3_rf==rftype `endif )
        available=False;
      else if(p4_addr==addr && !p4_avail `ifdef spfpu && p4_rf==rftype `endif )
        available=False;
      else if(p5_addr==addr && !p5_avail `ifdef spfpu && p5_rf==rftype `endif )
        available=False;
      return tuple2(available,rs1val);
    endmethod
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs2(Bit#(ELEN) val, Bit#(5) addr, RFType rftype);
      Bool available = True;
      Bit#(ELEN) rs2val = val;
      let {p3_avail, p3_addr, p3_val, p3_rf} = wr_from_pipe3;
      let {p4_avail, p4_addr, p4_val, p4_rf} = wr_from_pipe4_first;
      let {p5_avail, p5_addr, p5_val, p5_rf} = wr_from_pipe4_second;
      if(addr==0 && rftype==IRF)
        rs2val=0;
      else if(p3_addr==addr && p3_rf==rftype)
        rs2val=p3_val;
      else if(p4_addr==addr && p4_rf == rftype)
        rs2val=p4_val;
      else if(p5_addr==addr && p5_rf == rftype)
        rs2val=p5_val;
      if(p3_addr==addr && p3_rf==rftype && !p3_avail)
        available=False;
      else if(p4_addr==addr && p4_rf == rftype && !p4_avail)
        available=False;
      else if(p5_addr==addr && p5_rf == rftype && !p4_avail)
        available=False;
      return tuple2(available,rs2val);
    endmethod
  `ifdef spfpu
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs3(Bit#(ELEN) val, Bit#(5) addr);
      Bool available = True;
      Bit#(ELEN) rs3val = val;
      let {p3_avail, p3_addr, p3_val, p3_rf} = wr_from_pipe3;
      let {p4_avail, p4_addr, p4_val, p4_rf} = wr_from_pipe4_first;
      let {p5_avail, p5_addr, p5_val, p5_rf} = wr_from_pipe4_second;
      if(p3_addr==addr && p3_rf==FRF)
        rs3val=p3_val;
      else if(p4_addr==addr && p4_rf == FRF)
        rs3val=p4_val;
      else if(p5_addr==addr && p5_rf == FRF)
        rs3val=p5_val;

      if(p3_addr==addr && p3_rf==FRF && !p3_avail)
        available=False;
      else if(p4_addr==addr && p4_rf == FRF && !p4_avail)
        available=False;
      else if(p5_addr==addr && p5_rf == FRF && !p4_avail)
        available=False;
      return tuple2(available,rs3val);
    endmethod
  `endif
  endmodule

endpackage
