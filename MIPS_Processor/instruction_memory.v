`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:19:38 10/29/2014 
// Design Name: 
// Module Name:    instruction_memory 
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
module instruction_memory(
    input [31:0] instr_addr,
    output reg [31:0] instr
    );
	// Declare memory space, 32 bits wide, 16 registers deep
	reg [31:0] in_file [15:0];
	initial begin
		// Initialize address
		instr = 32'd0;
		// Load instructions in to memory 
		$readmemb("instructions.txt",in_file);
	end
	
	always @(instr_addr) begin
		instr = in_file[instr_addr];
	end
	
endmodule
