`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:10:26 12/15/2014
// Design Name:   control_alu
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_control_alu.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: control_alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_control_alu;

	// Inputs
	reg [5:0] opcode;
	reg [31:0] A;
	reg [31:0] B;
	reg [5:0] funct;

	// Outputs
	wire [31:0] alu_res;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	control_alu uut (
		.opcode(opcode), 
		.A(A), 
		.B(B), 
		.alu_res(alu_res), 
		.zero(zero), 
		.funct(funct)
	);

	initial begin
		// Initialize Inputs
		opcode = 0;
		A = 0;
		B = 0;
		funct = 0;

		// Wait 100 ns for global reset to finish
		#100;
      // Assign A & B 
		A = 10; B = 10;
		#10;
		// Opcode set to 0, funct = 0, no OP
		#10;
		// Set funct to add
		funct = 6'h20;
		#10;
		// Div
		funct = 6'h1A;
		#10;
		// Mult
		funct = 6'h18;
		#10;
		// Sub
		funct = 6'h22;
		#10;	
		// Or
		funct = 6'h25;
		#10;
		// And
		funct = 6'h24;
		#10;
		// LLI
		opcode = 6'h0x0F;
		B = 32'h0x00000001;
		#10;
		// Add stimulus here

	end
      
endmodule

