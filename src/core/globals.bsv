/* 
Copyright (c) 2018, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.  
* Redistributions in binary form must reproduce the above copyright notice, this list of 
  conditions and the following disclaimer in the documentation and / or other materials provided 
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

Author : Neel Gala
Email id : neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
package globals;
  import GetPut::*;
  // ---------------------- Types for IMem and Core interaction ------------------------------- //
  // structure defining the request packet for the instruction cache.
  typedef struct{
      Bit#(addr)  address;
      Bit#(esize) epochs;
    `ifdef icache
      Bool        fence;
    `endif
    `ifdef supervisor
      Bool        sfence;
    `endif
  } ICache_request#(numeric type addr, numeric type esize) deriving(Bits, Eq, FShow);
  
  // entire fetch packet request to Imem
  typedef struct{
    ICache_request#(addr, esize) icache_req;
  `ifdef compressed
    Bool discard;
  `endif
  } FetchRequest#(numeric type addr, numeric type esize) deriving (Bits, Eq, FShow);

 // response packet from the Instruction cache
  typedef struct{
    Bit#(iwidth) instr;
    Bool  trap;
    Bit#(`causesize) cause;
    Bit#(esize) epochs;
  } FetchResponse#(numeric type iwidth, numeric type esize) deriving (Bits, Eq, FShow); 
  // -------------------------------------------------------------------------------------------//

  // ---------------------- Types for DMem and Core interaction ------------------------------- //
  typedef struct{
    Bit#(addr)    address;
    Bit#(esize)   epochs;
    Bit#(3)       size;
`ifdef dcache
    Bool          fence;
    Bit#(2)       access;
    Bit#(data)    writedata;
  `ifdef atomic
    Bit#(5)       atomic_op;
  `endif
  `ifdef supervisor
    Bool          sfence;
    Bool          ptwalk_req;
    Bool          ptwalk_trap;
  `endif
`endif
  } DMem_request#(numeric type addr, 
                  numeric type data, 
                  numeric type esize ) deriving(Bits, Eq, FShow);
  
  typedef struct{
    Bit#(data)        word;
    Bool              trap;
    Bit#(`causesize)  cause;
    Bit#(esize)       epochs;
  } DMem_core_response#( numeric type data, numeric type esize) deriving (Bits, Eq, FShow);
  // -------------------------------------------------------------------------------------------//

  typedef enum {Hit, Miss, None} RespState deriving(Eq, Bits, FShow);
// ------ Structures related to Branch Prediction -------//
  typedef struct{
    Bit#(2)       prediction;
    Bit#(`vaddr)  target_pc;
    Bit#(2)       epochs;
  `ifdef compressed
    Bool          edgecase;
  `endif
  
  } PredictionToStage0 deriving(Bits, Eq, FShow);

  typedef struct{
    Bit#(`vaddr) pc;
    Bool         fence;
    Bit#(2)      epochs;
  `ifdef compressed
    Bool         discard;
  `endif
  } PredictionRequest deriving(Bits, Eq, FShow);

  typedef struct{
`ifdef branch_speculation
  `ifdef compressed
    Bit#(2)       prediction0;
    Bool          hit0;
    Bit#(2)       prediction1;
    Bool          hit1;
  `else
    Bit#(2)       prediction;
    Bool          hit;
  `endif
`endif
  `ifdef compressed
    Bool          discard;
  `endif
    Bit#(`vaddr)  va;
  } NextPC deriving(Bits, Eq, FShow);

  typedef enum {Branch, JAL, Call, Ret} ControlInsn deriving(Bits, Eq, FShow);

  typedef struct {
      Bit#(`vaddr)  pc;
      Bit#(`vaddr)  target;
      Bit#(2)       state;
      Bool          mispredict;
      ControlInsn   ci;
      Bool          btbhit;
    `ifdef compressed
      Bool          edgecase;
    `endif
  } Training_data deriving (Bits, Eq, FShow);


  typedef struct {
    Bit#(`vaddr) pc;
  `ifdef compressed
    Bool          edgecase;
  `endif
  } RASTraining deriving (Bits, Eq, FShow);

  interface Ifc_bpu;
    // method to receive the new pc for which prediction is to be looked up.
		method Action prediction_req(PredictionRequest req);

    // method to respond to stage0 with prediction state and new target address on hit
		interface Get#(NextPC) next_pc; 

    // method to training the BTB and BHT tables
		method Action train_bpu (Training_data td);

    // method to send the next-pc to stage0
    method PredictionToStage0 predicted_pc;

    // method to push the return address on a Call instruction
    method Action ras_push(Bit#(`vaddr) pc);

    // method to enable/disable bpu at run-time
    method Action bpu_enable(Bool e);
  endinterface

endpackage

