/* 
see license at: https://gitlab.com/incoresemi/common_bsv/blob/master/LICENSE
--------------------------------------------------------------------------------------------------

Author: Neel Gala
Email id: neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/

package device_common;

  import BUtils::*;

  typedef enum {Byte=0, HWord=1, Word=2, DWord=3} AccessSize deriving(Bits,Eq,FShow);
  instance Ord#(AccessSize);
  	function \< (e1,e2);
  		return (pack(e1)<pack(e2));
  	endfunction
  	function \<= (e1,e2);
  		return (pack(e1)<=pack(e2));
  	endfunction
  	function \> (e1,e2);
  		return (pack(e1)>pack(e2));
  	endfunction
  	function \>= (e1,e2);
  		return (pack(e1)>=pack(e2));
  	endfunction
  endinstance
	
  function Bit#(awidth) axi4burst_addrgen(Bit#(8) arlen, Bit#(3) arsize, Bit#(2) arburst, 
                                                                            Bit#(awidth) address);

		// this variable will decide the index above which part of the address should
		// not change in WRAP mode. Bits below this index value be incremented according
		// to the value of arlen and arsize;
		Bit#(3) wrap_size;
		case(arlen)
			3: wrap_size= 2;
			7: wrap_size= 3;
			15: wrap_size=4;
			default:wrap_size=1;
		endcase
  
    // this is address will directly be used for INCR mode
		Bit#(awidth) new_address=address+(('b1)<<arsize);
		Bit#(awidth) mask;
		mask=('1)<<(zeroExtend(arsize)+wrap_size);	// create a mask for bits which will remain constant in WRAP.
		Bit#(awidth) temp1=address& mask;	  // capture the constant part of the addr in WRAP.
		Bit#(awidth) temp2=new_address& (~mask);//capture the incremental part of the addr in WRAP.

		if(arburst==0) // FIXED
			return address;
		else if(arburst==1) // INCR
			return new_address;
		else // WRAP
			return temp1|temp2; // create the new address in the wrap mode by ORing the masked values.
	endfunction

  function Bit#(dwidth) data_shift(Bit#(dwidth) data, AccessSize size, 
                                                            Bit#(TAdd#(1,TDiv#(dwidth,32))) offset)
    provisos(Mul#(8, a__, dwidth),
             Mul#(16, b__, dwidth),
             Mul#(32, c__, dwidth));
    let shift_amount = {3'b0, offset}<<3;
    Bit#(dwidth) return_data=data>>shift_amount;
    if(size==Byte)
      return duplicate(return_data[7:0]);
    else if(size==HWord)
      return duplicate(return_data[15:0]);
    else if(size==Word)
      return duplicate(return_data[31:0]);
    else 
      return return_data;
  endfunction
endpackage: device_common
