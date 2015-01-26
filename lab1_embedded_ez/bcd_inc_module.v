`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:12:46 01/22/2015 
// Design Name: 
// Module Name:    bcd_inc_module 
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
module bcd_inc_module(
    input inc_flag,
    input hold_flag,
    input rst_flag,
    output [7:0] binary
    );
	reg [31:0] counter=0; 
	reg [7:0] new_bin = 0; 
	assign binary = new_bin; 
	always @(inc_flag,hold_flag,rst_flag) begin
		if (inc_flag) begin
			if (counter == 200000000) begin
				counter = 0; 
				new_bin = new_bin + 1; 
			end
			else
				counter = counter + 1; 
		end
		else if (hold_flag) begin 
			new_bin = new_bin;
		end
		else if (rst_flag) begin
			new_bin = 0; 
		end
	end

endmodule
