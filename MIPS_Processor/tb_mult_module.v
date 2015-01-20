`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:52:32 12/14/2014
// Design Name:   mult_module
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_mult_module.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mult_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_mult_module;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;

	// Outputs
	wire [31:0] hi;
	wire [31:0] lo;

	// Instantiate the Unit Under Test (UUT)
	mult_module uut (
		.A(A), 
		.B(B), 
		.hi(hi), 
		.lo(lo)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
      A = 10;
		B = 10;
		#10;
		A = 5;
		B = 3;
		#10;
		A = 0; 
		B = 10;
		#10;
		B = 5;
		A = 4;
		#10;
		B = 32'hFFFFFFFF;
		A = 5;
		// Add stimulus here

	end
      
endmodule

