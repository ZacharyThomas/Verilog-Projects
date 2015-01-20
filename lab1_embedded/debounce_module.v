`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:49:30 01/19/2015 
// Design Name: 
// Module Name:    debounce_module 
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
module debounce_module(
    input clk,
	 input btn,
	 output debounce
    );
	 
	reg [3:0] counter;
	reg sync_btn,next_debounce;
	
	assign debounce = next_debounce;
	
	// sync clk to btn
	always @(posedge clk) begin
		sync_btn <= btn;
	end
	
	always @(posedge clk) begin
			counter <= counter << 1;
			counter[0] <= sync_btn;
			if (counter == 0) begin
				next_debounce <= 0;
			end
			else if (counter == 15) begin
				next_debounce <= 1;
			end
			else begin
				next_debounce <= debounce;
			end
			
	end
	
endmodule
