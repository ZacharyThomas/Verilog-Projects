`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:27:11 10/27/2014
// Design Name:   twobit_adder
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_twobit_adder.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: twobit_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_twobit_adder;

	// Inputs
	reg [1:0] in_1;
	reg [1:0] in_2;
	reg c_in;

	// Outputs
	wire [1:0] out;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	twobit_adder uut (
		.in_1(in_1), 
		.in_2(in_2), 
		.c_in(c_in), 
		.out(out), 
		.c_out(c_out)
	);

	initial begin
		// Initialize Inputs
		in_1 = 0;
		in_2 = 0;
		c_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
      in_1 = 2'b11;
		in_2 = 2'b11;
		#2;
		in_1 = 2'b00;
		in_2 = 2'b01;
		#2;
		in_1 = 2'b01;
		in_2 = 2'b01;
		#2;
		in_1 = 2'b11;
		in_2 = 2'b01;
		#2;
		in_1 = 2'b01;
		in_2 = 2'b10;
		#2;		
		in_1 = 2'b10;
		in_2 = 2'b10;
		#2;		
		// Add stimulus here

	end
      
endmodule

