`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:40:31 12/15/2014
// Design Name:   control_module
// Module Name:   C:/Verilog Projects/MIPS_Processor/ctr.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: control_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ctr;

	// Inputs
	reg [5:0] opcode;

	// Outputs
	wire RegDst;
	wire Branch;
	wire MemRead;
	wire MemtoReg;
	wire [1:0] ALUOp;
	wire MemWrite;
	wire ALUSrc;
	wire RegWrite;

	// Instantiate the Unit Under Test (UUT)
	control_module uut (
		.opcode(opcode), 
		.RegDst(RegDst), 
		.Branch(Branch), 
		.MemRead(MemRead), 
		.MemtoReg(MemtoReg), 
		.ALUOp(ALUOp), 
		.MemWrite(MemWrite), 
		.ALUSrc(ALUSrc), 
		.RegWrite(RegWrite)
	);

	initial begin
		// Initialize Inputs
		opcode = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

