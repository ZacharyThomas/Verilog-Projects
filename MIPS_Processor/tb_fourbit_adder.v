`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:16:56 10/27/2014
// Design Name:   fourbit_adder
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_fourbit_adder.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fourbit_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_fourbit_adder;

	// Inputs
	reg [3:0] in_1;
	reg [3:0] in_2;
	reg c_in;

	// Outputs
	wire [3:0] sum;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	fourbit_adder uut (
		.in_1(in_1), 
		.in_2(in_2), 
		.c_in(c_in), 
		.sum(sum), 
		.c_out(c_out)
	);

	initial begin
		// Initialize Inputs
		in_1 = 0;
		in_2 = 0;
		c_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
      in_1 = 4'b1011;
		in_2 = 4'b1011;
		#2;
      in_1 = 4'b1111;
		in_2 = 4'b1111;
		#2;
      in_1 = 4'b0011;
		in_2 = 4'b1110;
		#2;
      in_1 = 4'b0010;
		in_2 = 4'b1000;
		#2;
      in_1 = 4'b1010;
		in_2 = 4'b0101;
		#2;		
      in_1 = 4'b0111;
		in_2 = 4'b0011;
		#2;		
		// Add stimulus here

	end
      
endmodule

