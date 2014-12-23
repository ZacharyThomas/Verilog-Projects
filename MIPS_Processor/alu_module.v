`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:37:30 12/13/2014 
// Design Name: 
// Module Name:    alu_module 
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
module alu_module(
    input [31:0] A,
    input [31:0] B,
    input [3:0] alu_sel,
    output reg zero,
    output reg [31:0] alu_res
    );
	wire [31:0] adder_out,hi_out,lo_out; 
	wire c_out;
	reg zero_temp;
	reg [31:0] A_wire,B_wire;
	parameter ALU_AND = 0, ALU_OR = 1, ALU_ADD = 2, ALU_MULT = 3, ALU_DIV = 4, ALU_SLL = 5, ALU_SUB = 6, ALU_SLT = 7;

	// Assign case statement to calculate output
	always @(A,B,alu_sel) begin
		// Deaults
		if (alu_res == 0) zero = 1;
		else zero = 0;
		B_wire = B;
		A_wire = A;
		//zero = 1;
		alu_res = 0;
		case(alu_sel)
		ALU_AND: begin
			assign alu_res = A & B;
		end
		ALU_OR: begin
			assign alu_res = A | B;
		end
		ALU_ADD: begin
			assign alu_res = adder_out; 
		end
		
		ALU_SUB: begin
			B_wire = ~B + 1;
			assign alu_res = adder_out;
		end
		
		ALU_MULT: begin
		assign alu_res = lo_out;
		end
		
		ALU_DIV: begin
		assign alu_res = A/B;

		end
		// Shift B 16 forward to get rid of sign bits, then 16 back because we don't actually want to load the upper bits. 
		ALU_SLL: begin
			B_wire = B << 16;
			assign alu_res = B_wire >> 16;
		end
		ALU_SLT: begin
		
		end
		default:
			assign alu_res = 0;
		endcase

//	else assign zero = 0;
	end
	// Instantiations
	thirtytwobit_adder adder (
		.in_1(A_wire), 
		.in_2(B_wire), 
		.c_in(1'b0), 
		.sum(adder_out), 
		.c_out(c_out)
	);
	mult_module mult (
		.A(A_wire), 
		.B(B_wire), 
		.hi(hi_out), 
		.lo(lo_out)
	);
endmodule
