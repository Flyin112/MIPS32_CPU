`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:23:46 01/18/2018 
// Design Name: 
// Module Name:    MUX2_5 
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
module MUX2_5(
	 input [4:0] Port0,
    input [4:0] Port1,
    input Select,
    output [4:0] Output
    );
	 
assign Output = Select ? Port1 : Port0;

endmodule
