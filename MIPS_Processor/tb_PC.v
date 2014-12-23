`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:49:38 10/29/2014
// Design Name:   PC
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_PC.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_PC;

	// Inputs
	reg [31:0] data_in;
	reg clk;
	// Outputs
	wire [31:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.data_in(data_in), 
		.data_out(data_out),
		.clk(clk)
	);
	integer index = 0;
	always begin
	clk = ~clk;
	#1;
	end
	initial begin
		// Initialize Inputs
		data_in = 0;
		clk = 0;
		// Wait 100 ns for global reset to finish
		#100;
      for (index=0; index<32;index = index + 1) begin
		data_in = index;
		#2;
		end
		// Add stimulus here

	end
      
endmodule

