`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:06:54 12/14/2014 
// Design Name: 
// Module Name:    alu_control_module 
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
module alu_control_module(
    input [5:0] funct,
    input [1:0] alu_op,
    output reg [3:0] alu_sel
    );
	// parameter ALU_AND = 0, ALU_OR = 1, ALU_ADD = 2, ALU_MULT = 3, ALU_DIV = 4, ALU_SUB = 6, ALU_SLT = 7;
	always @(funct,alu_op) begin
	// defaults -> set alu_sel to unmapped instruction (result should be 0)
	alu_sel = 8;
		case(alu_op)
			// Load/Store Instructions
			2'b00: begin
			
			end
			// Branch Instructions
			2'b01: begin
			
			end
			// R-Type Instructions
			2'b10: begin
				// Implemented Instructions: MULT (0x18), DIV (0x1A), ADD (0x20), SUB (0x22), AND (0x24), OR (0x25)
				case (funct)
				// Multiply
				6'h18: begin
					alu_sel = 3;
				end
				// Div
				6'h1A: begin
					alu_sel = 4;
				end
				// Add
				6'h20: begin
					alu_sel = 2;
				end
				// Sub
				6'h22: begin
					alu_sel = 6;
				end
				// And
				6'h24: begin
					alu_sel = 0;
				end
				// Or
				6'h25: begin
					alu_sel = 1;
				end
				
				endcase
			end
			// Shift Left Instruction (LUI only)
			2'b11: begin
				alu_sel = 5;
		
			end
		
		endcase
	end

endmodule
