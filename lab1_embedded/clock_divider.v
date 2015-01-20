`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:34:15 01/19/2015 
// Design Name: 
// Module Name:    clock_divider 
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
module clock_divider(
    input clk,
    output reg clk_div
    );
	reg [31:0] value = 0;
	wire [31:0] next_value;
	
	assign next_value = value + 1;
	
	always @(posedge clk) begin
		if (value >= 10000000) begin
		clk_div <= ~clk_div;
		value <= 0;
		end
		else begin
			value <= next_value; 
		end
	end

endmodule
