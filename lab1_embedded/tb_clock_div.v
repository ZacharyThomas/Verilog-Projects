`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:46:13 01/19/2015
// Design Name:   clock_divider
// Module Name:   C:/Verilog Projects/lab1_embedded/tb_clock_div.v
// Project Name:  lab1_embedded
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clock_divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_clock_div;

	// Inputs
	reg clk;

	// Outputs
	wire clk_div;

	// Instantiate the Unit Under Test (UUT)
	clock_divider uut (
		.clk(clk), 
		.clk_div(clk_div)
	);
	always begin
	clk = ~clk;
	end
	initial begin


	end
      
endmodule

