`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:43:24 10/29/2014 
// Design Name: 
// Module Name:    fetch_module 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module fetch_module(
    output [31:0] data_out,
	 output  [31:0] add_out,
	 input clk
    );
	 // Instantiate instruction memory, ALU, and PC
	wire [31:0] adder_out, PC_out, instruction_out;
	wire c_out;
	 // Connect program counter input to Adder output, output to wire PC_out
	PC PC_1 (
	.data_in(adder_out), 
	.data_out(PC_out),
	.clk(clk));
	// Instantiate thirty two bit adder with inputs PC_out, and constant 1
	thirtytwobit_adder adder (
		.in_1(PC_out), 
		.in_2(32'd1), 
		.c_in(1'b0), 
		.sum(adder_out), 
		.c_out(c_out)
	);
	// Instantiate instruction memory with input from PC, output to data_out
	instruction_memory IM (
		.instr_addr(PC_out), 
		.instr(instruction_out)
	);
	// Assign outputs
	assign data_out = instruction_out;
	assign add_out = adder_out;
	

endmodule
