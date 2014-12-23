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
	integer x;
	// Inputs
	reg in_1;
	reg in_2;
	reg c_in;

	// Outputs
	wire sum;
	wire c_out;

	parameter cols = 5, rows = 8;			// Number of rows and columns in the test bench text file
	reg [cols-1:0] in_file [0:rows-1]; 	// In file register column bits wide, row bits deep
	reg [cols-1:0] in_row; 					// Row reader file
	// Instantiate the Unit Under Test (UUT)
	onebit_adder uut (
		.in_1(in_1), 
		.in_2(in_2), 
		.c_in(c_in), 
		.sum(sum), 
		.c_out(c_out)
	);

	initial begin
		// Read in test bench
		$readmemb("tb_onebit_adder.txt",in_file);
		// Iterate over each row
		for (x=0; x<rows;x=x+1) 
		begin
			in_row = in_file[x];
			// Grab relevant variables:
			
			// Feed row input in to UUT
			in_1 = in_row[4];
			in_2 = in_row[3];
			c_in = in_row[2];
			// Compare UUT output to tb output
			#10;
			if ( sum != in_row[1]) begin
				$display("ERROR: SUM OF %d DOES NOT MATCH CALCULATION OF %d IN ROW %d", sum, in_row[1],x);
				end
			else if ( c_out != in_row[0]) begin
				$display("ERROR: COUT OF %d DOES NOT MATCH CALCULATION OF %d IN ROW %d", sum, in_row[0],x);
				end
		end

	end
      
endmodule

