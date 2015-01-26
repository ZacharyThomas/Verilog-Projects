`timescale 1ns / 1ps
// Crystal Clock Oscillator  clock.v
// c 2012 Embedded Design using Programmable Gate Arrays  Dennis Silage

module clock(input CLK, input [31:0] clkscale, output reg clk);
									// CLK crystal clock oscillator 100 MHz
reg [31:0] clkq = 0;			// clock register, initial value of 0
	
always@(posedge CLK)
	begin
		clkq=clkq+1;			// increment clock register
			if (clkq>=clkscale)  	// clock scaling
				begin
					clk=~clk;	// output clock
					clkq=0;		// reset clock register
				end
	 end

endmodule
