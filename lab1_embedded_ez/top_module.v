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
    input [7:0] SW,
    output [7:0] led
    );

	 wire five_khz;
	 // Clock handler (.25 Hz)
//	 clock M1 (
//		.CLK(clk),
//		.clkscale(200000000),
//		.clk(quarter_hz)
//	 );
	 // 5khz? clk
	 clock M2 (
		.CLK(clk),
		.clkscale(10000),
		.clk(five_khz)
	 );
	 
	 wire up_out, down_out, right_out; 
	// Button Debouncer 
	 pbdebounce M3(
	 .clk(five_khz), 
	 .button(up), 
	 .pbreg(up_out)
	 );
	 
	 pbdebounce M4(
		.clk(five_khz), 
		.button(down), 
		.pbreg(down_out)
		);
	 	
	 pbdebounce M5(
		.clk(five_khz), 
		.button(right), 
		.pbreg(right_out)
		);
		
	 // BCD Controller
	 wire [7:0] bin_out; 
	 bcd_controller_module M6	(
		.inc(up_out),
		.hold(down_out),
		.rst(right_out),
		.clk(clk),
		.binary(bin_out)
		);

	 wire [3:0] hundreds_out,tens_out,ones_out;
	 shiftadd3 M7 (
		.bindata(bin_out),
		.msdigit(hundreds_out),
		.middigit(tens_out),
		.lsdigit(ones_out)
		);
	 
	 // Mux
	wire [3:0] led_out;
	out_mux M8 (
		.sw(SW),
		.ones(ones_out),
		.tens(tens_out),
		.hundos(hundreds_out),
		.led_data(led_out) 
		);
		
	 assign led[3:0] = led_out;
	 assign led[7:4] = {up_out,down_out, right_out,1'b0};	 
endmodule
