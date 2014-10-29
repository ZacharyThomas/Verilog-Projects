`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:06:04 10/29/2014 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input [31:0] data_in,
    output reg [31:0] data_out,
	 input clk
    );
	 initial begin
	 data_out = 0;
	 end
	// Data_out = data in 
	always @(posedge clk) begin
	data_out <= data_in;
	end
endmodule
