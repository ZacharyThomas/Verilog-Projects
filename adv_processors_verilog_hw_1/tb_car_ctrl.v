`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:25:59 09/14/2014
// Design Name:   car_ctrl
// Module Name:   C:/Verilog Projects/adv_processors_verilog_hw_1/tb_car_ctrl.v
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

module tb_car_ctrl;

	// Inputs
	reg accelerator;
	reg brake;
	reg clk;
	reg[1:0] current_state = 0;
	// Outputs
	wire [1:0] speed;

	// Instantiate the Unit Under Test (UUT)
	car_ctrl uut (
		.accelerator(accelerator), 
		.brake(brake), 
		.clk(clk), 
		.speed(speed)
	);
	// Create Clock
	always begin
		#1 clk = ~clk;
	end
	
	initial begin
		// Initialize Inputs
		accelerator = 0;
		brake = 0;
		clk = 0;
		#5;  
		// Add stimulus here
		accelerator = 1;
		#10;
		brake = 1;
		#10;
		accelerator = 0; brake = 0;
		
		begin: speed_block
			while (1) begin
				accelerator = 1;
				@(negedge clk) begin
					if (current_state != speed) begin
						current_state = current_state+1;
						accelerator = 0;
						#2;
					end
					if (current_state == 2'b11) begin
						#2;
						accelerator = 0;
						disable speed_block;
					end
				end
			end
		end
		
		begin: slow_block
			while (1) begin
				brake = 1;
				@(negedge clk) begin
					if (current_state != speed) begin
						current_state = current_state-1;
						brake = 0;
						#2;
					end
					if (current_state == 0) begin
						#2;
						brake = 0;
						disable slow_block;
					end
				end
			end
		end
	end
endmodule

