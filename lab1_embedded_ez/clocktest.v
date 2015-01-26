// Nexys 3 Board and Atlys Board
// Clock Oscillator Test  clocktest.v
// c 2012 Embedded Design using Programmable Gate Arrays  Dennis Silage

module clocktest(input CLK, output [2:0]LED);
	
clock M0 (CLK, 50000000, LED[0]);	//1 Hz clock
clock M1 (CLK, 25000000, LED[1]);	//2 Hz clock
clock M2 (CLK, 12500000, LED[2]);	//4 Hz clock
	
endmodule
