`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:33:46 10/27/2014 
// Design Name: 
// Module Name:    twobit_adder 
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
module twobit_adder(
    input [1:0] in_1,
    input [1:0] in_2,
    input c_in,
    output [1:0] sum,
    output c_out
    );
	// Declare wire to connect both adders
	wire carry_wire;
	// Instantiate adder 1
	onebit_adder inst_1(
								.in_1(in_1[0]),
								.in_2(in_2[0]),
								.c_in(c_in),
								.c_out(carry_wire),
								.sum(sum[0])
								);
	// Instantiate adder 2
	onebit_adder inst_2(
								.in_1(in_1[1]),
								.in_2(in_2[1]),
								.c_in(carry_wire),
								.c_out(c_out),
								.sum(sum[1])
								);

endmodule
