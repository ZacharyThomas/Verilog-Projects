`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:53:08 12/14/2014 
// Design Name: 
// Module Name:    control_module 
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
module control_module(
    input [5:0] opcode,
    output reg RegDst,
    output reg Branch,
    output reg MemRead,
    output reg MemtoReg,
    output reg [1:0] ALUOp,
    output reg MemWrite,
    output reg ALUSrc,
    output reg RegWrite
    );
// Let's only implement the instructions I care about - ALU R-type and Load
// Opcode for R-type is 0; Opcode for lui is 0x0F
always @(opcode) begin
	// Defaults (set for R-type)
	ALUOp = 2'b10;
	RegDst = 1;
	RegWrite = 1;
	MemRead = 0; Branch = 0; MemtoReg = 0; ALUSrc = 0; MemWrite = 0; 
	case (opcode)
	// Makeshift LUI instruction
	6'h0x0F: begin
	RegDst = 0; 
	ALUSrc = 1;
	MemtoReg = 0;
	RegWrite = 1;
	MemRead = 0;
	MemWrite = 0;
	Branch = 0; 
	ALUOp = 11;
	end
	endcase
end

endmodule
