`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:22:23 09/15/2014
// Design Name:   car_ctrl
// Module Name:   C:/Verilog Projects/adv_processors_verilog_hw_1/uut.v
// Project Name:  adv_processors_verilog_hw_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: car_ctrl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module uut;

	// Inputs
	reg accelerator;
	reg brake;
	reg clk;

	// Outputs
	wire [1:0] speed;

	// Instantiate the Unit Under Test (UUT)
	car_ctrl uut (
		.accelerator(accelerator), 
		.brake(brake), 
		.clk(clk), 
		.speed(speed)
	);

	initial begin
		// Initialize Inputs
		accelerator = 0;
		brake = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

