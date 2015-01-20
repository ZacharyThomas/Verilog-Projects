`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:32:33 12/14/2014 
// Design Name: 
// Module Name:    mult_module 
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
module mult_module(
    input  [31:0] A,
    input  [31:0] B,
    output reg [31:0] hi,
    output reg [31:0] lo
    );
	reg [63:0] product = 0;
	reg [31:0] A_wire, B_wire;

	always@(A,B) begin
	// Defaults
	A_wire = A;
	B_wire = B;
	product = 0; hi = 0; lo = 0;
	while (A_wire != 0 || B_wire != 0) begin
			if (A_wire[0] == 1) begin
				product = product + B_wire;
			end
			B_wire = B_wire << 1;
			A_wire = A_wire >> 1;
		end
	hi = product[63:32];
	lo = product[31:0];		
	end
	
endmodule
