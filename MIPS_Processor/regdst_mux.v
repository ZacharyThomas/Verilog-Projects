`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:50:37 12/15/2014 
// Design Name: 
// Module Name:    regdst_mux 
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
module regdst_mux(
    input [4:0] addr_1,
    input [4:0] addr_2,
	 input RegDst,
    output reg [4:0] write_addr
    );
	always @(addr_1, addr_2, RegDst) begin
		if (RegDst) write_addr = addr_2;
		else write_addr = addr_1;
	end
endmodule
