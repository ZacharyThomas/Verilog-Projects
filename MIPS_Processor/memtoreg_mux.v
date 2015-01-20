`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:14:08 12/15/2014 
// Design Name: 
// Module Name:    memtoreg_mux 
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
module memtoreg_mux(
    input [31:0] alu_res,
    input [31:0] data_mem,
    input memtoreg_ctrl,
    output reg [31:0] write_data_out
    );

always @(alu_res,data_mem,memtoreg_ctrl) begin
	if (memtoreg_ctrl) write_data_out = data_mem;
	else write_data_out = alu_res;
	end
endmodule
