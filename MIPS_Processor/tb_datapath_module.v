`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:03:34 12/15/2014
// Design Name:   datapath_module
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_datapath_module.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: datapath_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_datapath_module;

	// Inputs
	reg clk;
	wire [31:0] alu_res_out_final;
	wire [31:0] instruction_out_final;
	// Instantiate the Unit Under Test (UUT)
	datapath_module uut (
		.clk(clk),
		.alu_res_out_final(alu_res_out_final),
		.instruction_out_final(instruction_out_final)
	);
	
	always begin
	clk = ~clk;
	#1;
	end
	initial begin
		// Initialize Inputs
		clk = 0;
//		for (x=0; x<2; x=x+1) begin
//		#1; 
//		clk = ~clk;
//		end
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

