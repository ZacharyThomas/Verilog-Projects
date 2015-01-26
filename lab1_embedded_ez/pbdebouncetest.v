// Nexys 3 Board and Atlys Boards
// Push Button Debounce Test pbdebouncetest.v
// c 2012 Embedded Design using Programmable Gate Arrays  Dennis Silage

module pbdebouncetest(input CLK, input BTNR, output [7:0] LED);

wire [3:0] leddata;
wire [3:0] dataled;

assign LED[7:4]=dataled[3:0];
assign LED[3:0]=leddata[3:0];

clock M0 (CLK, 1000000, clk);		//50 Hz clock
pbdebounce M1 (clk, BTNR, pbreg);
ledtest M2 (pbreg, BTNR, leddata, dataled);
	
endmodule

module ledtest(input pbreg, input button,
			output reg [3:0] leddata, output reg [3:0] dataled);
 
always@(posedge pbreg)
	begin
		leddata=leddata+1;
	end
	
always@(posedge button)
	begin
		dataled=dataled+1;
	end

endmodule
