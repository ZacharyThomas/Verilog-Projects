`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:23:35 10/27/2014 
// Design Name: 
// Module Name:    sixteenbit_adder 
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
module sixteenbit_adder(
    input [15:0] in_1,
    input [15:0] in_2,
    input c_in,
    output [15:0] sum,
    output c_out
    );

	wire carry_wire;
	// Instantiate eight bit adder 1
	eightbit_adder inst_1(
								.in_1(in_1[7:0]),
								.in_2(in_2[7:0]),
								.c_in(c_in),
								.c_out(carry_wire),
								.sum(sum[7:0])
								);
	// Instantiate eight bit adder 2
	eightbit_adder inst_2(
								.in_1(in_1[15:8]),
								.in_2(in_2[15:8]),
								.c_in(carry_wire),
								.c_out(c_out),
								.sum(sum[15:8])
								);

endmodule
