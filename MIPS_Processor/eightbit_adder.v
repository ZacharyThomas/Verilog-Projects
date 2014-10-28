`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:21:41 10/27/2014 
// Design Name: 
// Module Name:    eightbit_adder 
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
module eightbit_adder(
    input [7:0] in_1,
    input [7:0] in_2,
    input c_in,
    output [7:0] sum,
    output c_out
    );

	wire carry_wire;
	// Instantiate four bit adder 1
	fourbit_adder inst_1(
								.in_1(in_1[3:0]),
								.in_2(in_2[3:0]),
								.c_in(c_in),
								.c_out(carry_wire),
								.sum(sum[3:0])
								);
	// Instantiate four bit adder 2
	fourbit_adder inst_2(
								.in_1(in_1[7:4]),
								.in_2(in_2[7:4]),
								.c_in(carry_wire),
								.c_out(c_out),
								.sum(sum[7:4])
								);

endmodule
