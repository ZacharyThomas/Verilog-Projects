`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:25:48 01/18/2015 
// Design Name: 
// Module Name:    top_module 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top_module(
	 input clk,
	 input up,
    input down,
    input right,
    input [2:0] sw,
    output [7:0] led
    );
	 
	 // Clock handler
	 wire clk_ibufg;
    wire clk_int;
    IBUFG clk_ibufg_inst (.I(clk), .O(clk_ibufg));
	 wire clk_div;
	 clock_divider M1 (
		.clk(clk_ibufg),
		.clk_div(clk_div)
	 );
	 
    BUFG clk_bufg_inst (.I(clk_div), .O(clk_int));
	
	// Debounce module
	wire up_out, down_out, right_out;
	wire [3:0] last_leds;
	debounce_module M2(
		.clk(clk_int),
		.btn(up),
		.debounce(up_out)
		);
//	debounce_module M3(
//		.clk(clk_int),
//		.btn(down),
//		.debounce(down_out)
//		);
//	

// Counter module
	wire [3:0] led_out;
	
	counter_module M4(
		.up_press(up_out),
		.clk(clk_int),
		.led_disp(led_out)
		);


assign led[3:0] = led_out;
assign led[7:4] = {up_out,3'b000};

endmodule
