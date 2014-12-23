`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:01:09 10/29/2014
// Design Name:   fetch_module
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_fetch_module.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fetch_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_fetch_module;

	// Inputs
	reg clk;

	// Outputs
	wire [31:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	fetch_module uut (
		.data_out(data_out), 
		.clk(clk)
	);
	always begin
	clk = ~clk;
	#1;
	end
	
	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

