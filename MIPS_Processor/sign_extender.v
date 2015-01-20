`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:25:09 12/14/2014 
// Design Name: 
// Module Name:    sign_extender 
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
module sign_extender(
    input [15:0] data_in,
    output reg [31:0] data_out
    );
	
	always@(data_in) begin
		data_out[31:0] = { {16{data_in[15]}},data_in[15:0] };
	end

endmodule
