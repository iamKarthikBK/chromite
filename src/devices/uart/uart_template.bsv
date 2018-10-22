/* 
Copyright (c) 2018, InCore Semiconductors All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.  
* Redistributions in binary form must reproduce the above copyright notice, this list of 
  conditions and the following disclaimer in the documentation and/or other materials provided 
 with the distribution.  
* Neither the name of InCore Semiconductors Pvt. Ltd.  nor the names of its contributors may be used to endorse or 
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

mmap-start
slave_bound: 12 bytes

schema-start
module:
    type: string
    regex: ^uart$
type:
    type: string
    regex: ^device$
clusters:
    type: list
    schema:
        type: string
roles:
    type: dict
    schema:
        master:
            type: list
            schema:
                type: string
                regex: ^(null$
                nullable: True
        slave:
            type: list
parameters:
    type: dict
    schema:
        depth:
            type: integer
        baudrate:
            type: integer
        clock:
            type: integer
            max: 1
        memory_bytes:
            type: integer
schema-end
--------------------------------------------------------------------------------------------------
*/
package uart_template;
import uart::*;
`include "uart.defines"
import device_common::*;

(*synthesize*)
module mkdummy#(Clock uart_clock, Reset uart_reset)(Empty);
	let core_clock<-exposeCurrentClock;
	let core_reset<-exposeCurrentReset;
	Ifc_uart_axi4lite#(32,16,0, 32) uart <- mkuart_axi4lite(uart_clock,uart_reset, 105);
	Ifc_uart_axi4#(32,16,0, 3) uart1 <- mkuart_axi4(uart_clock,uart_reset, 35);
endmodule

endpackage
