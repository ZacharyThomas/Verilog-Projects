`timescale 1ns / 1ps
// Push Button Debounce pbdebounce.v
// c 2012 Embedded Design using Programmable Gate Array  Dennis Silage

module pbdebounce(input clk, input button, output reg pbreg); 

reg [3:0] pbshift;
	
always@(posedge clk)
	begin
		pbshift=pbshift<<1;
		pbshift[0]=button;
	if (pbshift==0)
		pbreg=0;
	if (pbshift==15)
		pbreg=1;			
	end

endmodule

