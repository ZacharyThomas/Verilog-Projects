`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:37:34 12/14/2014 
// Design Name: 
// Module Name:    alu_complete 
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
module alu_complete(
    input [31:0] A,
    input [31:0] B,
    input [5:0] funct,
    input [1:0] alu_op,
    output [31:0] alu_res,
    output zero
    );
	 // Instantiate instruction memory, ALU, and PC
	wire [3:0] alu_sel_out;
	wire [31:0] alu_res_out;
	// Wire up ALU so that it gets A, B, alu_sel inputs, and outputs alu_res and zero
	alu_module alu (
		.A(A), 
		.B(B), 
		.alu_sel(alu_sel_out), 
		.zero(zero), 
		.alu_res(alu_res_out)
	);
	// Wire up control module to take funct and ALU inputs and output alu_sel to ALU
	alu_control_module alu_ctrl (
	 .funct(funct),
    .alu_op(alu_op),
    .alu_sel(alu_sel_out)
	);
	// Assign outputs
	
	assign alu_res = alu_res_out;
	

endmodule
