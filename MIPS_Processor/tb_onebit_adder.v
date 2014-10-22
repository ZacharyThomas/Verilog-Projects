`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:32:30 10/22/2014
// Design Name:   onebit_adder
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_onebit_adder.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: onebit_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_onebit_adder;

	// Inputs
	reg in_1;
	reg in_2;
	reg c_in;

	// Outputs
	wire sum;
	wire c_out;

	parameter cols = 5, rows = 8;
	reg [col-1:0] in_file [0:rows-1];

	// Instantiate the Unit Under Test (UUT)
	onebit_adder uut (
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
        
		// Add stimulus here

	end
      
endmodule

