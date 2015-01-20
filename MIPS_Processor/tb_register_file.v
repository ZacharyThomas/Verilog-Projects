`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:15:42 11/01/2014
// Design Name:   register_file
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_register_file.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: register_file
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_register_file;

	// Inputs
	reg [4:0] read_reg1;
	reg [4:0] read_reg2;
	reg [4:0] write_reg;
	reg [31:0] write_data;
	reg write_en;
	reg clk;

	// Outputs
	wire [31:0] read_data1;
	wire [31:0] read_data2;

	// Instantiate the Unit Under Test (UUT)
	register_file uut (
		.read_reg1(read_reg1), 
		.read_reg2(read_reg2), 
		.write_reg(write_reg), 
		.write_data(write_data), 
		.write_en(write_en), 
		.clk(clk), 
		.read_data1(read_data1), 
		.read_data2(read_data2)
	);
	
	always begin
		clk = ~clk;
		#1;
	end
	
	initial begin
		// Initialize Inputs
		read_reg1 = 0;
		read_reg2 = 1;
		write_reg = 0;
		write_data = 0;
		write_en = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		// Add stimulus here
		// Write data to things
		write_en = 1;
		write_data = 32'd7200;
		write_reg = 5'd0;
		#2;
		write_data = 32'd5400;
		write_reg = 5'd1;
		#2;
		write_data = 32'd3600;
		write_reg = 5'd2;
		#2;
		write_data = 32'd1800;
		write_reg = 5'd3;
		#2;		
		// Disable write
		write_en = 0;
		write_data = 32'd9000;
		write_reg = 5'd3;
		#2;
		read_reg1 = 2;
		read_reg2 = 3;
		#2;
		read_reg1 = 0;
		read_reg2 = 1;
	end
      
endmodule

