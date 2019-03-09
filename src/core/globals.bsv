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
package globals;

  // structure defining the request packet for the instruction cache.
  typedef struct{
      Bit#(addr)  address;
      Bit#(esize) epochs;
    `ifdef icache
      Bool        fence;
    `endif
  } ICache_request#(numeric type addr, numeric type esize) deriving(Bits,Eq,FShow);
  
  // entire fetch packet request to Imem
  typedef struct{
    ICache_request#(addr,esize) icache_req;
  `ifdef supervisor
    Bool sfence;
  `endif
  `ifdef branch_speculation
    Bool discard;
  `endif
  } FetchRequest#(numeric type addr, numeric type esize) deriving(Bits,Eq,FShow);


  typedef enum {Hit, Miss, None} RespState deriving(Eq,Bits,FShow);
  // ---------------------- Instruction Cache types ---------------------------------------------//
                 // word , trap, cause , epoch
  typedef Tuple4#(Bit#(data), Bool, Bit#(6), Bit#(esize)) ICore_response#(numeric type data, 
                                                                          numeric type esize);
                // addr ,  burst len, burst_size 
  typedef Tuple3#(Bit#(addr),  Bit#(8), Bit#(3)) ICache_read_request#(numeric type addr);
                    // data,  last , err
  typedef Tuple3#(Bit#(data), Bool, Bool) ICache_read_response#(numeric type data);
// -------------------------------------------------------------------------------------------//

// ------ Structures related to Branch Prediction -------//
  typedef struct{
    Bit#(2) prediction;
    Bit#(`vaddr) target_pc;
  } PredictionToStage0 deriving(Bits, Eq, FShow);

endpackage

