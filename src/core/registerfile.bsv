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
This module implements the integer and floating point register files. They are currently implemented
as RegFile. The integer register file requires 2 read and 1 write ports.
The floating point registerfile however will require 3 read ports and 1 write ports

On system reset,  the register files are initialized to 0. This phase will take 32 cycles total.
Only after the initialization phase can the 

the debug interface allows the debugger to read/write from/to either of the registerfiles. 
This interface should be made mutually exclusive with respect to the other rules accessing the
register files,  otherwise they will require dedicated extra ports. This scheduling is done
implicitly by bluespec owing to the sequence in which the methods have been written,  The debugger
however cannot read the values in the initialization phase.

--------------------------------------------------------------------------------------------------
*/
package registerfile;
	/*==== Project Imports === */
	import common_types::*;
	`include "common_params.bsv"
	/*======================== */
	/*===== Package Imports ==== */
	import RegFile::*;
	import ConfigReg::*;
  import GetPut::*;
	/*===========================*/

	interface Ifc_registerfile;
	  method ActionValue#(Operands) opaddress( Bit#(5) rs1addr, Bit#(5) rs2addr, Bit#(5) rd,
        Bit#(TLog#(PRFDEPTH)) rd_index  `ifdef spfpu , Op1type rs1type , Op2type rs2type , 
        Bit#(5) rs3addr , Op3type rs3type , Op3type rdtype `endif );

		`ifdef Debug
      method ActionValue#(Bit#(XLEN)) read_write_gprs(Bit#(5) r, Bit#(XLEN) data, Bool rw 
          `ifdef spfpu ,Op3type rfselect `endif );
		`endif
		method Action commit_rd (Maybe#(CommitData) commit);
    method Action reset_renaming;
	endinterface

	(*synthesize*)
  (*preempts="reset_renaming, opaddress"*)
  (*conflict_free="opaddress, commit_rd"*)
  (*conflict_free="reset_renaming, commit_rd"*)
	module mkregisterfile(Ifc_registerfile);
    Integer verbosity = `VERBOSITY ;
		RegFile#(Bit#(5),Bit#(XLEN)) integer_rf <-mkRegFileWCF(0,31);
    Reg#(Maybe#(Bit#(TLog#(PRFDEPTH)))) arr_rename_int [32];
	`ifdef spfpu 
		RegFile#(Bit#(5),Bit#(FLEN)) floating_rf <-mkRegFileWCF(0,31);
    Reg#(Maybe#(Bit#(TLog#(PRFDEPTH)))) arr_rename_float [32];
	`endif
		Reg#(Bool) initialize<-mkReg(True);
		Reg#(Bit#(5)) rg_index<-mkReg(0);
  `ifdef spfpu
    Wire#(Tuple2#(Op3type, Bit#(5))) wr_rename_reg<- mkDWire(tuple2(IRF, 0));
  `else
    Wire#(Bit#(5)) wr_rename_reg<- mkDWire(0);
  `endif

    for (Integer i=0;i<32;i=i+1) begin
      arr_rename_int[i]<- mkConfigReg(tagged Invalid);
      `ifdef spfpu
        arr_rename_float[i]<- mkConfigReg(tagged Invalid);
      `endif
    end


    // The following rule is fired on system reset and writes all the register values to "0". This
    // rule will never fire otherwise
		rule initialize_regfile(initialize);
		  `ifdef spfpu
			  floating_rf.upd(rg_index,0);
		  `endif
			integer_rf.upd(rg_index,0);
			rg_index<=rg_index+1;
			if(rg_index=='d31)
				initialize<=False;
      if(verbosity>0)
        $display($time,"\tRF: Initialization phase. Count: %d",rg_index);
		endrule

	  method ActionValue#(Operands) opaddress( Bit#(5) rs1addr, Bit#(5) rs2addr, Bit#(5) rd,
        Bit#(TLog#(PRFDEPTH)) rd_index  `ifdef spfpu , Op1type rs1type , Op2type rs2type , 
        Bit#(5) rs3addr , Op3type rs3type , Op3type rdtype `endif ) if(!initialize);
			
			Bit#(XLEN) rs1irf=integer_rf.sub(rs1addr);
			Bit#(XLEN) rs2irf=integer_rf.sub(rs2addr);
      `ifdef spfpu
  			Bit#(FLEN) rs1frf=floating_rf.sub(rs1addr);
	  		Bit#(FLEN) rs2frf=floating_rf.sub(rs2addr);
		  	Bit#(FLEN) rs3frf=floating_rf.sub(rs3addr);
      `endif

      Bit#(TMax#(XLEN,FLEN)) rs1, rs2;
    `ifdef spfpu 
      Bit#(FLEN) rs3; 
    `endif 
      
      Bit#(3) rs1index=5;
      if(arr_rename_int[rs1addr] matches tagged Valid .r1index 
          `ifdef spfpu &&& rs1type!=FloatingRF `endif ) 
        rs1index=zeroExtend(r1index);
      `ifdef spfpu
        else if(arr_rename_float[rs1addr] matches tagged Valid .r1index 
            `ifdef spfpu &&& rs1type==FloatingRF `endif ) 
        rs1index=zeroExtend(r1index);
      `endif
      Bit#(3) rs2index=5; 
      `ifdef spfpu
        if(arr_rename_float[rs2addr] matches tagged Valid .r2index 
          `ifdef spfpu &&& rs2type==FloatingRF `endif ) begin
          rs2index=zeroExtend(r2index);
        end
        else
      `endif
        if(arr_rename_int[rs2addr] matches tagged Valid .r2index
            `ifdef spfpu &&& rs2type!=FloatingRF `endif ) begin
          rs2index=zeroExtend(r2index);
        end

      `ifdef spfpu
        Bit#(3) rs3index=5;
        if(rs3type==FRF &&& arr_rename_float[rs3addr] matches tagged Valid .r3index)
          rs3index=r3index;

        if(rs1type==FloatingRF)begin
          rs1=zeroExtend(rs1frf);
        end
        else 
      `endif
        rs1=zeroExtend(rs1irf);

      `ifdef spfpu
        if(rs2type==FloatingRF)begin
          rs2=zeroExtend(rs2frf);
        end
        else
      `endif
        rs2=zeroExtend(rs2irf);

      `ifdef spfpu
        rs3=rs3frf;
        if(rdtype==FRF)begin
          if(verbosity>1)
            $display($time, "\tRF: Renaming FL Register: %d with index: %d", rd, rd_index);
          arr_rename_float[rd]<= tagged Valid rd_index; 
        end
        else
      `endif
      if(rd!=0) begin
        if(verbosity>1)
          $display($time, "\tRF: Renaming Register: %d with index: %d", rd, rd_index);
        arr_rename_int[rd]<= tagged Valid rd_index; 
      end
      `ifdef spfpu
        wr_rename_reg<= tuple2(rdtype, rd);
      `else
        wr_rename_reg<= rd;
      `endif
        
      `ifdef spfpu
        return tuple6(rs1, rs2, rs1index, rs2index, rs3, rs3index);
      `else
        return tuple4(rs1, rs2, rs1index, rs2index);
      `endif
		endmethod

    // Here we invaildate the renaming regifile on each commit. This is done to make sure that
    // we avoid reading into the wrong renamed-register in the next stage. 
		method Action commit_rd (Maybe#(CommitData) commit) if(!initialize);
      if(commit matches tagged Valid .in)begin
        `ifdef spfpu
          let{r, d, index, rdtype}=in;
        `else
          let{r, d, index}=in;
        `endif
			  if(verbosity>0)begin
          $display($time,"\tRF: Writing Rd: %d(%h) index: %d ",r,d, index `ifdef spfpu 
              , fshow(rdtype) `endif );
          `ifdef spfpu
            $display($time,"\tRF: arr_rename_float: ",fshow(arr_rename_float[r]));
          `endif
        end

        `ifdef spfpu
          Bool donot_invalidate = (tpl_2(wr_rename_reg)==r && tpl_1(wr_rename_reg)==rdtype);
        `endif

        `ifdef spfpu
          if(rdtype==FRF)begin
			  	  floating_rf.upd(r,truncate(d));
            if(arr_rename_float[r] matches tagged Valid .x &&& x == index &&&  !donot_invalidate)
            begin
              if(verbosity>1)
                $display($time, "\tRF: Commit rename Floating index: %d rd: %d wr_rename_reg: %d", x, r,

              wr_rename_reg);
              arr_rename_float[r]<= tagged Invalid;
            end
          end
          else
        `endif
			  if(r!=0)begin
			  	integer_rf.upd(r,truncate(d));
          `ifdef spfpu
            if(arr_rename_int[r] matches tagged Valid .x &&& x == index &&&  !donot_invalidate) begin
          `else
            if(arr_rename_int[r] matches tagged Valid .x &&& x == index &&& wr_rename_reg!=r)begin
          `endif
            if(verbosity>1)
              $display($time, "\tRF: Commit rename index: %d rd: %d wr_rename_reg: %d", x, r,
              wr_rename_reg);
              arr_rename_int[r]<= tagged Invalid;
          end
			  end
      end
		endmethod
		`ifdef Debug
      method ActionValue#(Bit#(XLEN)) read_write_gprs(Bit#(5) r, Bit#(XLEN) data, Bool rw 
          `ifdef spfpu ,Op3type rfselect `endif ) if(!initialize);
          Bit#(XLEN) resultop=0;
          if(rw) begin // write_operation
            `ifdef spfpu
              if(rfselect==FRF)
                floating_rf.upd(r, data);
              else
            `endif
                integer_rf.upd(r, data);
          end
          else begin // read operation
            `ifdef spfpu
              if(rfselect==FRF)
                resultop=floating_rf.sub(r);
              else
            `endif
                resultop=integer_rf.sub(r);
          end
        return resultop;
      endmethod
		`endif
    method Action reset_renaming;
      if(verbosity>1)
        $display($time, "\tRF: flushing all renaming");
      for (Integer i=0;i<32;i=i+1) begin
        arr_rename_int[i]<= tagged Invalid;
        `ifdef spfpu
          arr_rename_float[i]<= tagged Invalid;
        `endif
      end
    endmethod

	endmodule
endpackage
