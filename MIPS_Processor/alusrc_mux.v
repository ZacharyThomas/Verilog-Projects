`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:57:46 12/15/2014 
// Design Name: 
// Module Name:    alusrc_mux 
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
module alusrc_mux(
    input ALUSrc,
    input [31:0] read_reg,
    input [31:0] extend,
    output reg [31:0] alu_B
    );
always@(read_reg,extend,ALUSrc) begin
	if (ALUSrc) alu_B = extend;
	else alu_B = read_reg;
end

endmodule
