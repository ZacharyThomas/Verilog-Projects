`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:13:22 11/01/2014 
// Design Name: 
// Module Name:    register_file 
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
module register_file(
    input [4:0] read_reg1,
    input [4:0] read_reg2,
    input [4:0] write_reg,
    input [31:0] write_data,
	 input write_en,
	 input clk,
	 output [31:0] read_data1,
	 output [31:0] read_data2
    );
	// Define 32 register workspace, 32 bits wide
	reg [31:0] gp_regs [31:0];
	integer x;
	// Initialize register values
	initial begin
		for (x = 0; x<32; x=x+1) begin
			gp_regs[x] = 0;
		end
	end
	// Write logic
	always @(posedge clk) begin
		if (write_en) begin
		gp_regs[write_reg] <= write_data;
		end
	end

	assign read_data1 = gp_regs[read_reg1];
	assign read_data2 = gp_regs[read_reg2];
	
endmodule
