`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:43:18 12/14/2014
// Design Name:   alu_complete
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_alu_complete.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu_complete
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_alu_complete;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [5:0] funct;
	reg [1:0] alu_op;

	// Outputs
	wire [31:0] alu_res;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	alu_complete uut (
		.A(A), 
		.B(B), 
		.funct(funct), 
		.alu_op(alu_op), 
		.alu_res(alu_res), 
		.zero(zero)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		funct = 0;
		alu_op = 0;

		// Wait 100 ns for global reset to finish
		#100;
      A = 10;
		B = 10;
		#10; 
		// Set alu_op but leave unmapped funct
		alu_op = 2'b10;
		#10; 
		// Implement And, Or, Add, Mul, Div, Sub
		// Implemented Instructions: MULT (0x18), DIV (0x1A), ADD (0x20), SUB (0x22), AND (0x24), OR (0x25)
		funct = 6'h18;
		#10; 
		funct = 6'h1A;
		#10;
		funct = 6'h20;
		#10;
		funct = 6'h22;
		#10;
		funct = 6'h24;
		#10;
		funct = 6'h25;
		#10;
		// Add stimulus here

	end
      
endmodule

