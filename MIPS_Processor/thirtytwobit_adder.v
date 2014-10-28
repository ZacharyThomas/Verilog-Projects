`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:25:34 10/27/2014 
// Design Name: 
// Module Name:    thirtytwobit_adder 
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
module thirtytwobit_adder(
    input [31:0] in_1,
    input [31:0] in_2,
    input c_in,
    output [31:0] sum,
    output c_out
    );

	wire carry_wire;
	// Instantiate sixteen bit adder 1
	sixteenbit_adder inst_1(
								.in_1(in_1[15:0]),
								.in_2(in_2[15:0]),
								.c_in(c_in),
								.c_out(carry_wire),
								.sum(sum[15:0])
								);
	// Instantiate sixteen bit adder 2
	sixteenbit_adder inst_2(
								.in_1(in_1[31:16]),
								.in_2(in_2[31:16]),
								.c_in(carry_wire),
								.c_out(c_out),
								.sum(sum[31:16])
								);

endmodule

