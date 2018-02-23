`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:53:46 01/18/2018
// Design Name:   Top
// Module Name:   F:/Documents/Verilog HDL/MIPS_CPU/Top_tb.v
// Project Name:  MIPS_CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
`include "defines.v"
module Top_tb;

	// Inputs
	reg CLOCK;
	reg rst;

	// Instantiate the Unit Under Test (UUT)
	Top uut (
		.clk(CLOCK), 
		.rst(rst)
	);

	initial begin
		CLOCK = 0;
		forever #10 CLOCK = ~CLOCK;
	end
	
	initial begin
    rst = `True_v;
    #195 rst= `False_v;
    #1000 $stop;
  end
      
endmodule

