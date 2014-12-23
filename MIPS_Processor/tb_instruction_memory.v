`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:13:32 10/29/2014
// Design Name:   instruction_memory
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_instruction_memory.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: instruction_memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_instruction_memory;

	// Inputs
	reg [31:0] instr_addr;

	// Outputs
	wire [31:0] instr;

	// Instantiate the Unit Under Test (UUT)
	instruction_memory uut (
		.instr_addr(instr_addr), 
		.instr(instr)
	);
	integer index=0;
	reg [31:0] in_file [15:0];
	initial begin
		// Initialize Inputs
		// Instructions loaded in to instruction memory
		$readmemb("instructions.txt",in_file);
		instr_addr = 0;
		// Wait 100 ns for global reset to finish
		#100;
		for (index = 0; index < 16; index = index + 1) begin
      instr_addr = index;
		$display("in_file index is %d, in_file is %b", index, in_file[index]);
		#2;
		end

	end
      
endmodule

