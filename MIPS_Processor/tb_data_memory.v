`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:03:10 12/14/2014
// Design Name:   data_memory
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_data_memory.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: data_memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_data_memory;

	// Inputs
	reg [31:0] address;
	reg [31:0] write_data;
	reg MemWrite;
	reg MemRead;

	// Outputs
	wire [31:0] read_data;

	// Instantiate the Unit Under Test (UUT)
	data_memory uut (
		.address(address), 
		.write_data(write_data), 
		.MemWrite(MemWrite), 
		.MemRead(MemRead), 
		.read_data(read_data)
	);

	initial begin
		// Initialize Inputs
		address = 0;
		write_data = 0;
		MemWrite = 0;
		MemRead = 0;

		// Wait 100 ns for global reset to finish
		#100;
      MemWrite = 1;
		write_data = 10;
		#10;
		address = 1;
		write_data = 20;
		#10;
		address = 2;
		write_data = 30;
		#10; 
		MemWrite = 0;
		MemRead = 1;
		#10;
		address = 1;
		#10;
		address = 0;
		// Add stimulus here

	end
      
endmodule

