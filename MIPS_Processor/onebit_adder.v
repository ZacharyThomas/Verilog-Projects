`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:50:37 10/22/2014 
// Design Name: 
// Module Name:    onebit_adder 
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
module onebit_adder(
    input in_1,
    input in_2,
    input c_in,
    output sum,
    output c_out
    );
	// Wire Assignments for sum of half adder
	wire ha_sum;
	// Add in_1 and in_2
	assign ha_sum = in_1^in_2;
	// Add ha_sum with c_in ( 3 bit add w/o carry)
	assign sum = ha_sum^c_in;
	// Implement carry logic (When A&B are high, or when C_in and ha_sum
	assign c_out = (in_1&in_2 || c_in&&ha_sum);

endmodule
