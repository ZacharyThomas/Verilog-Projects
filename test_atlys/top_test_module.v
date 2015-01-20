`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:22:14 01/14/2015 
// Design Name: 
// Module Name:    top_test_module 
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
module top_test_module(
    input clk,
	 input SW[7:0],
    output reg [7:0] LED
    );
	integer counter;
	initial begin
		 counter = 0;
		LED = 0;
	end
	
	always @(posedge clk)
	begin
		if (SW[7] == 0) begin
			counter <= counter;
			end
		else begin
			counter <= counter+1;
		end
		if (counter > 50000000)
			begin
				counter <= 0;
				LED <= LED + 1; 
			end
	end
endmodule
