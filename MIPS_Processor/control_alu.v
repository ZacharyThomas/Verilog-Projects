`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:04:03 12/15/2014 
// Design Name: 
// Module Name:    control_alu 
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
module control_alu(
    input [5:0] opcode,
    input [31:0] A,
    input [31:0] B,
    output [31:0] alu_res,
    output zero,
    input [5:0] funct
    );
	 wire [1:0] ctrl_out;
	 wire [3:0] alu_sel_out;
	 wire [31:0] alu_res_out;
	 
	// Instantiate Controller
	control_module control (
		.opcode(opcode), 
		.RegDst(RegDst), 
		.Branch(Branch), 
		.MemRead(MemRead), 
		.MemtoReg(MemtoReg), 
		.ALUOp(ctrl_out), 
		.MemWrite(MemWrite), 
		.ALUSrc(ALUSrc), 
		.RegWrite(RegWrite)
	);
	
	alu_control_module alu_ctrl (
	 .funct(funct),
    .alu_op(ctrl_out),
    .alu_sel(alu_sel_out)
	);

	alu_module alu (
		.A(A), 
		.B(B), 
		.alu_sel(alu_sel_out), 
		.zero(zero), 
		.alu_res(alu_res_out)
	);
	
	assign alu_res = alu_res_out; 
	
endmodule
