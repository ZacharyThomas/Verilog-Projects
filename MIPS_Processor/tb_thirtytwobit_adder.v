`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:23:42 10/27/2014
// Design Name:   thirtytwobit_adder
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_thirtytwobit_adder.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: thirtytwobit_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_thirtytwobit_adder;

	// Inputs
	reg [31:0] in_1;
	reg [31:0] in_2;
	reg c_in;

	// Outputs
	wire [31:0] sum;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	thirtytwobit_adder uut (
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
      in_1[15:0] = 16'hFFFF;
		in_1[31:16]= 16'hFFFF;
		in_2[15:0] = 16'hFFFF;
		in_2[31:16]= 16'hFFFF;
		#2;
		in_1[15:0] = 16'hABCD;
		in_1[31:16]= 16'hABCD;
		in_2[15:0] = 16'hAAAA;
		in_2[31:16]= 16'hAAAA;
		#2;
		in_1[15:0] = 16'hABCD;
		in_1[31:16]= 16'hBEFA;
		in_2[15:0] = 16'hAAAA;
		in_2[31:16]= 16'h82A6;
		#2;
		in_1[15:0] = 16'hABCD;
		in_1[31:16]= 16'h1010;
		in_2[15:0] = 16'h1010;
		in_2[31:16]= 16'h82A6;
		#2;
		in_1[15:0] = 16'h8ABC;
		in_1[31:16]= 16'h1010;
		in_2[15:0] = 16'h8234;
		in_2[31:16]= 16'h82A6;
		#2;		
		in_1[15:0] = 16'h8ABC;
		in_1[31:16]= 16'h00A0;
		in_2[15:0] = 16'h0B8E;
		in_2[31:16]= 16'h82A6;
		#2;	
		// Add stimulus here

	end
      
endmodule

