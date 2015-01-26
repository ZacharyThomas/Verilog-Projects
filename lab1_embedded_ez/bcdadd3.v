`timescale 1ns / 1ps
// Binary to BCD Shift and Add 3 Conversion shiftadd3.v
// c 2012 Embedded Design using Programmable Gate Arrays  Dennis Silage

module shiftadd3(
						input [7:0] bindata, 
						output [3:0] msdigit,
						output [3:0] middigit,
						output [3:0] lsdigit
						);

wire [3:0] result1, result2, result3, result4, result5;
wire [3:0] result6, result7;
wire [3:0] value1, value2, value3, value4, value5; 
wire [3:0] value6, value7; 

assign value1={1'b0,bindata[7:5]};
assign value2={result1[2:0],bindata[4]};
assign value3={result2[2:0],bindata[3]};
assign value4={result3[2:0],bindata[2]};
assign value5={result4[2:0],bindata[1]};
assign value6={1'b0,result1[3],result2[3],result3[3]};
assign value7={result6[2:0],result4[3]};

shiftadd M1(value1,result1);
shiftadd M2(value2,result2);
shiftadd M3(value3,result3);
shiftadd M4(value4,result4);
shiftadd M5(value5,result5);
shiftadd M6(value6,result6);
shiftadd M7(value7,result7);

assign msdigit[1:0]={result6[3],result7[3]};
assign msdigit[3:2]=0;
assign middigit={result7[2:0],result5[3]};
assign lsdigit={result5[2:0],bindata[0]};

endmodule

module shiftadd(input [3:0] indata, output reg [3:0] outdata);

always@(indata)
	case(indata)
	0:	outdata=0;
	1:	outdata=1;
	2:	outdata=2;
	3:	outdata=3;
	4:	outdata=4;
	5:	outdata=8;
	6:	outdata=9;
	7:	outdata=10;
	8:	outdata=11;
	9:	outdata=12;
	default:	outdata=0;
	endcase
endmodule
