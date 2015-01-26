`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:34:04 01/22/2015 
// Design Name: 
// Module Name:    out_mux 
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
module out_mux(
    input [7:0] sw,
	 input [3:0] ones,
	 input [3:0] tens,
	 input [3:0] hundos,
	 output reg [3:0] led_data
    );

   always @(sw, ones,tens,hundos)
      case (sw)
         1: led_data = ones;
         2: led_data = tens;
         4: led_data = hundos;
         default: led_data = 0;
      endcase
		
endmodule
