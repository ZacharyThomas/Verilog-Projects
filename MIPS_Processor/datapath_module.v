`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:31:46 12/15/2014 
// Design Name: 
// Module Name:    datapath_module 
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
module datapath_module(
    input clk,
	 output [31:0] alu_res_out_final,
	 output [31:0] instruction_out_final
    );
	wire [31:0] instruction_out,extender_out,alusrc_mux_out,memtoreg_mux_out,read1_out,read2_out,data_read_out,alu_res_out;
	wire [4:0] regdst_mux_out;
	wire [3:0] alu_sel_out;
	wire [1:0] ALUOp_out;
	wire RegDst_out, Branch_out,MemRead_out,MemtoReg_out,MemWrite_out,ALUSrc_out,RegWrite_out;
	
	// Instantiate fetch module, might have to mess with PC
	fetch_module fetch (
		.data_out(instruction_out), 
		.add_out(add_out), 
		.clk(clk)
	);
	
	// Instruction goes to control, Reg File, Sign Extender, ALU Control, Data Memory - so instantiate those :(	
	// Controller takes top 6 bits of instruction, outputs to a lot of muxes...
	control_module controller (
		.opcode(instruction_out[31:26]), 
		.RegDst(RegDst_out), 
		.Branch(Branch_out), 
		.MemRead(MemRead_out), 
		.MemtoReg(MemtoReg_out), 
		.ALUOp(ALUOp_out), 
		.MemWrite(MemWrite_out), 
		.ALUSrc(ALUSrc_out), 
		.RegWrite(RegWrite_out)
	);
	
	// Instantiate RegDst mux, takes instruction[20:16] and [15:11] and regdst out, output to reg_file write register
	regdst_mux regdstmux (
		.addr_1(instruction_out[20:16]), 
		.addr_2(instruction_out[15:11]), 
		.RegDst(RegDst_out), 
		.write_addr(regdst_mux_out)
	);
	// Instantiate ALUSrc mux, takes output of reg_File and extender, output to ALU_B
	alusrc_mux alusrcmux (
		.read_reg(read2_out), 
		.extend(extender_out), 
		.ALUSrc(ALUSrc_out), 
		.alu_B(alusrc_mux_out)
	);
	// Instantiate MemtoReg mux, takes output of data_mem and ALU, output to reg_file's write_data
	// data_read_out
	memtoreg_mux memtoregmux (
		.alu_res(alu_res_out), 
		.data_mem(data_read_out), 
		.memtoreg_ctrl(MemtoReg_out), 
		.write_data_out(memtoreg_mux_out)
	);
	// Sign extender takes in lower 15 bits, outputs to a mux
	sign_extender extender (
		.data_in(instruction_out[15:0]), 
		.data_out(extender_out)
	);
	// Instantiate Reg File
	register_file reg_file (
		.read_reg1(instruction_out[25:21]), 
		.read_reg2(instruction_out[20:16]), 
		.write_reg(regdst_mux_out), 
		.write_data(memtoreg_mux_out), 
		.write_en(RegWrite_out), 
		.clk(clk), 
		.read_data1(read1_out), 
		.read_data2(read2_out)
	);
	// Instantiate ALU Controller 
	alu_control_module alu_ctrl(
    .funct(instruction_out[5:0]),
	 .alu_op(ALUOp_out),
    .alu_sel(alu_sel_out)
    );	
	// Instantiate ALU
	alu_module alu (
		.A(read1_out), 
		.B(alusrc_mux_out), 
		.alu_sel(alu_sel_out), 
		.zero(zero), 
		.alu_res(alu_res_out)
	);
	// Instantiate Data Memory
	data_memory dataMem (
		.address(alu_res_out), 
		.write_data(read2_out), 
		.MemWrite(MemWrite_out), 
		.MemRead(MemRead_out), 
		.read_data(data_read_out)
	);
	assign alu_res_out_final = alu_res_out;
	assign instruction_out_final = instruction_out;
endmodule
