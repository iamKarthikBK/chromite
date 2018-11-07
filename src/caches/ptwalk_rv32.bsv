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
package ptwalk_rv32;
  import Vector::*;
  import FIFOF::*;
  import DReg::*;
  import SpecialFIFOs::*;
  import BRAMCore::*;
  import FIFO::*;
  import GetPut::*;

  import common_types::*;

  interface Ifc_ptwalk_rv32#(numeric type asid_width,
                        numeric type ptesize);
    interface Put#(Tuple2#(Bit#(ptesize),Bit#(2))) from_tlb;
                          // ppn   , levels , trap
    interface Get#(Tuple3#(Bit#(ptesize),Bit#(1),Trap_type)) to_tlb;
    interface Put#(Bit#(32)) satp_from_csr;
    interface Put#(Bit#(2)) curr_priv;
    interface Get#(Bit#(34)) request_to_cache;
                          // data , err, epoch
    interface Put#(Tuple3#(Bit#(32),Bit#(1),Bit#(1))) response_frm_cache;
  endinterface

  module mkptwalk_rv32(Ifc_ptwalk_rv32#(asid_width,ptesize));
    let v_asid_width = valueOf(asid_width);
    let pagesize=12;

    FIFOF#(Tuple2#(Bit#(ptesize),Bit#(2))) ff_req_queue<-mkSizedFIFOF(2);
    FIFOF#(Tuple3#(Bit#(ptesize),Bit#(1),Trap_type)) ff_response<-mkSizedFIFOF(2);
    FIFOF#(Bit#(34)) ff_memory_req<-mkSizedFIFOF(2);
    FIFOF#(Tuple3#(Bit#(32),Bit#(1),Bit#(1))) ff_memory_response<-mkSizedFIFOF(2);

    // wire which hold the inputs from csr
    Wire#(Bit#(32)) wr_satp <- mkWire();
    Wire#(Bit#(2)) wr_priv <- mkWire();
    
    Bit#(22) satp_ppn = truncate(wr_satp);
    Bit#(asid_width) satp_asid = wr_satp[v_asid_width-1+22:22];
    Bit#(1) satp_mode = wr_satp[31];

    // register to hold the level number
    Reg#(Bit#(1)) rg_levels <- mkReg(1);

    interface from_tlb=interface Put
      method Action put(Tuple2#(Bit#(ptesize),Bit#(2)) req);
        ff_req_queue.enq(req);
      endmethod
    endinterface;

    interface to_tlb=interface Get
      method ActionValue#(Tuple3#(Bit#(ptesize),Bit#(1),Trap_type)) get;
        ff_response.deq;
        return ff_response.first();
      endmethod
    endinterface;

    interface satp_from_csr=interface Put
      method Action put (Bit#(32) satp);
        wr_satp<=satp;
      endmethod
    endinterface;

    interface curr_priv = interface Put
      method Action put (Bit#(2) priv);
        wr_priv<=priv;
      endmethod
    endinterface;
    interface request_to_cache=interface Get
      method ActionValue#(Bit#(34)) get;
        ff_memory_req.deq;
        return ff_memory_req.first();
      endmethod
    endinterface;

    interface response_frm_cache=interface Put
      method Action put (Tuple3#(Bit#(32),Bit#(1),Bit#(1)) resp);
        ff_memory_response.enq(resp);
      endmethod
    endinterface;
  endmodule

  (*synthesize*)
  module mkinstance(Ifc_ptwalk_rv32#(9,32));
    let ifc();
    mkptwalk_rv32 _temp(ifc);
    return (ifc);
  endmodule
endpackage

