`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:52:46 12/15/2014
// Design Name:   regdst_mux
// Module Name:   C:/Verilog Projects/MIPS_Processor/tb_regdst.v
// Project Name:  MIPS_Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: regdst_mux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_regdst;

	// Inputs
	reg [5:0] addr_1;
	reg [5:0] addr_2;
	reg RegDst;

	// Outputs
	wire [5:0] write_addr;

	// Instantiate the Unit Under Test (UUT)
	regdst_mux uut (
		.addr_1(addr_1), 
		.addr_2(addr_2), 
		.RegDst(RegDst), 
		.write_addr(write_addr)
	);

	initial begin
		// Initialize Inputs
		addr_1 = 0;
		addr_2 = 0;
		RegDst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

