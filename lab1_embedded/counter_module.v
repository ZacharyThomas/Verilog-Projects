`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:33:24 01/20/2015 
// Design Name: 
// Module Name:    counter_module 
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
module counter_module(
    input up_press,
	 input clk,
    output [3:0] led_disp
    );
	assign led_disp = next_led_disp;
	reg [3:0] next_led_disp;
	reg prev_state; 
	always @(posedge clk) begin
		prev_state <= up_press;
		next_led_disp <= (up_press && ~prev_state) ?  next_led_disp + 1 :  next_led_disp;
	end
endmodule
