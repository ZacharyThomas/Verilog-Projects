`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:49:52 09/14/2014 
// Design Name: 
// Module Name:    car_ctrl 
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
module car_ctrl(
    input accelerator,
    input brake,
    input clk,
    output reg [1:0] speed
    );
	reg [1:0] state,next_state,next_speed;
	parameter STOPPED=0,LOW=1,MEDIUM=2,HIGH=3;	
	
	initial begin
		state = STOPPED;
		speed = 0;
	end
	
	always@(posedge clk) begin
		state <= next_state;
		speed <= next_speed;
	end

	always@(accelerator,brake,state) begin
		// Set Defaults
		next_state = state;
		next_speed = speed;
		case(state)
			STOPPED: begin
				if (accelerator && ~brake) begin
					next_state = LOW;
					next_speed = 2'b01;
				end
			end
			
			LOW: begin
				if (accelerator && ~brake) begin
					next_state = MEDIUM;
					next_speed = 2'b10;
				end
			end 
			
			MEDIUM: begin
				if (accelerator && ~brake) begin
					next_state = HIGH;
					next_speed = 2'b11;
				end
			end
			
			HIGH: begin
				if (brake) begin
					next_state = MEDIUM;
					next_speed = 2'b10;
				end
			end	
		endcase	
		
		// Priority Logic
		if (brake && state!=0) begin
			next_state = state-1;
			next_speed=speed-1;
		end
		if (brake && state==0) begin
			next_state = state;
			next_speed = 0;
		end		
	end 
	
endmodule
