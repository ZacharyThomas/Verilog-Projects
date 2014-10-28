`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:11:34 10/27/2014
// Design Name:   eightbit_adder
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_eightbit_adder.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: eightbit_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_eightbit_adder;

	// Inputs
	reg [7:0] in_1;
	reg [7:0] in_2;
	reg c_in;

	// Outputs
	wire [7:0] sum;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	eightbit_adder uut (
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
		in_1 = 16'hFF;
		in_2 = 16'hFF;
		#2;
      in_1 = 16'hAB;
		in_2 = 16'hAA;
		#2;
      in_1 = 16'hBE;
		in_2 = 16'h82;
		#2;
      in_1 = 16'h10;
		in_2 = 16'h10;
		#2;
      in_1 = 16'h8A;
		in_2 = 16'h82;
		#2;		
      in_1 = 16'h00;
		in_2 = 16'h0B;
		#2;	       
		// Add stimulus here

	end
      
endmodule

