`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:07:00 10/27/2014 
// Design Name: 
// Module Name:    fourbit_adder 
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
module fourbit_adder(
    input [3:0] in_1,
    input [3:0] in_2,
    input c_in,
    output [3:0] sum,
    output c_out
    );

	wire carry_wire;
	// Instantiate two bit adder 1
	twobit_adder inst_1(
								.in_1(in_1[1:0]),
								.in_2(in_2[1:0]),
								.c_in(c_in),
								.c_out(carry_wire),
								.sum(sum[1:0])
								);
	// Instantiate two bit adder 2
	twobit_adder inst_2(
								.in_1(in_1[3:2]),
								.in_2(in_2[3:2]),
								.c_in(carry_wire),
								.c_out(c_out),
								.sum(sum[3:2])
								);
endmodule
