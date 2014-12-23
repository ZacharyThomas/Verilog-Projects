`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:33:13 12/14/2014
// Design Name:   alu_module
// Module Name:   C:/Verilog Projects/MIPS_Processor/alu_module_tb.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_module_tb;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [3:0] alu_sel;

	// Outputs
	wire zero;
	wire [31:0] alu_res;

	// Instantiate the Unit Under Test (UUT)
	alu_module uut (
		.A(A), 
		.B(B), 
		.alu_sel(alu_sel), 
		.zero(zero), 
		.alu_res(alu_res)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		alu_sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

