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
package test_caches;
  import Vector::*;
  import FIFOF::*;
  import DReg::*;
  import SpecialFIFOs::*;
  import BRAMCore::*;
  import FIFO::*;
  import RegFile::*;

  interface Ifc_test_caches#(numeric type wordsize, 
                           numeric type blocksize,  
                           numeric type sets,
                           numeric type ways,
                           numeric type respwidth, 
                           numeric type paddr);
    method ActionValue#(Bit#(respwidth)) memory_operation(Bit#(paddr) addr,
        Bit#(2) access, Bit#(3) size, Bit#(respwidth) data);
  endinterface

  module mktest_caches(Ifc_test_caches#(wordsize, blocksize, sets, ways, respwidth, paddr))
    provisos(
            Add#(a__, 32, respwidth),
            Add#(b__, 16, respwidth),
            Add#(c__, 8, respwidth),
            Add#(d__, 19, paddr)

    );
    RegFile#(Bit#(19), Bit#(respwidth)) mem <- mkRegFileFullLoad("data.mem");

    method ActionValue#(Bit#(respwidth)) memory_operation(Bit#(paddr) addr,
        Bit#(2) access, Bit#(3) size, Bit#(respwidth) data);
        let v_wordbits = valueOf(TLog#(wordsize));
        Bit#(19) index = truncate(addr>>v_wordbits);
        let loaded_data=mem.sub(index);
        Bit#(respwidth) response_word = case (size)
            'b000: signExtend(loaded_data[7:0]);
            'b001: signExtend(loaded_data[15:0]);
            'b010: signExtend(loaded_data[31:0]);
            'b100: zeroExtend(loaded_data[7:0]);
            'b101: zeroExtend(loaded_data[15:0]);
            'b110: zeroExtend(loaded_data[31:0]);
            default: loaded_data;
          endcase;

        Bit#(respwidth) mask = size[1:0]==0?'hFF:size[1:0]==1?'hFFFF:size[1:0]==2?'hFFFFFFFF:'1;
        Bit#(TLog#(wordsize)) shift_amt=addr[v_wordbits-1:0];
        mask= mask<<shift_amt;
        Bit#(respwidth) write_word=~mask&loaded_data|mask&data;
        if(access==2)
          mem.upd(index,write_word);
        return response_word;
    endmethod
  endmodule
endpackage

