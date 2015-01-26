`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:09:15 01/22/2015 
// Design Name: 
// Module Name:    bcd_controller_module 
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
module bcd_controller_module(
    input inc,
    input hold,
    input rst,
	 input clk, 
	 output reg [7:0] binary
    );
	parameter INC = 0, HOLD = 1, RST = 2; 
	reg [1:0] state, next_state; 
	reg [31:0] counter=0; 
	// Sync Logic
	always @(posedge clk) begin
		if (rst) state <= RST; 
		else state <= next_state; 
	end
	// Output Logic
	always @(posedge clk) begin
		if (rst) binary <= 0; 
		else begin 
		case(state) 
			INC: begin
				if (counter == 400000000) begin 
					counter <= 0; 
					binary <= binary + 1; 
				end
				else begin
					counter <= counter + 1; 
				end
			end
			HOLD: begin 
				counter <= counter; 
				binary <= binary; 
			end
			RST: begin
				counter <= 0; 
				binary <= 0; 
			end
			default: begin
				counter <= counter; 
				binary <= binary; 
			end
		endcase
		end
	end
	// FSM Logic
	always @(inc,hold,rst,state) begin
		next_state = state; 
		if (inc) 
			next_state = INC; 
		if (hold) 
			next_state = HOLD;
		if (rst)
			next_state = RST; 
	end
		
endmodule
