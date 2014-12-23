`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:33:26 12/14/2014
// Design Name:   sign_extender
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_sign_extender.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sign_extender
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_sign_extender;

	// Inputs
	reg [15:0] data_in;

	// Outputs
	wire [31:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	sign_extender uut (
		.data_in(data_in), 
		.data_out(data_out)
	);

	initial begin
		// Initialize Inputs
		data_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
       data_in = 10;
		 #10;
		 data_in = 16'hFFFF;
		 #10;
		 data_in = 16'h0FFF;
		// Add stimulus here

	end
      
endmodule

