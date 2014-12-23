`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:38:59 12/14/2014 
// Design Name: 
// Module Name:    data_memory 
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
module data_memory(
    input [31:0] address,
    input [31:0] write_data,
    input MemWrite,
    input MemRead,
    output reg [31:0] read_data
    );
	 // Define bank of 1024 registers 32 bits wide
	reg [31:0] data_regs [1023:0];
	integer x;
	// Initialize register values
	initial begin
		for (x = 0; x<1024; x=x+1) begin
			data_regs[x] = 0;
		end
	end
	
always@(address,write_data,MemWrite,MemRead) begin
	// Handle any writes
	if (MemWrite) begin
		data_regs[address] = write_data;
	end
	
	// Output is the result of reading the value in current address
	if (MemRead) begin
		read_data = data_regs[address];
	end
	else begin
		read_data = 0;
	end
end

endmodule
