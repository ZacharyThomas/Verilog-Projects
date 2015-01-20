`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:56:09 01/20/2015
// Design Name:   debounce_module
// Module Name:   C:/Verilog Projects/lab1_embedded/tb_db.v
// Project Name:  lab1_embedded
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: debounce_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_db;

	// Inputs
	reg clk;
	reg btn;

	// Outputs
	wire debounce;
	wire [3:0] led_driver;

	// Instantiate the Unit Under Test (UUT)
	debounce_module uut (
		.clk(clk), 
		.btn(btn), 
		.debounce(debounce), 
		.led_driver(led_driver)
	);
	always begin
		clk = ~clk;
		#1;
	end
	
	initial begin
		// Initialize Inputs
		clk = 0;
		btn = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		btn = 1;
		#10;
		btn = 0;
		#4;
		btn = 1;
		#4;
		btn = 0;
		#2;
		btn = 1;
		#2; 
		btn = 0;
	end
      
endmodule

