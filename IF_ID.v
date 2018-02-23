`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:53:01 01/18/2018 
// Design Name: 
// Module Name:    IF_ID 
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
`include "defines.v"
module IF_ID(
    input Clk,
	 input Rst,
	 input Stall,
    input [31:0] IF_PC,
    input [31:0] IF_Inst,
    output reg [31:0] ID_PC,
    output reg [31:0] ID_Inst
    );

always @(posedge Clk)
begin
	if(Rst == `True_v)
	begin
		ID_PC <= `ZeroWord;
		ID_Inst <= `ZeroWord;
	end else if(Stall == `False_v)
	begin
		ID_PC <= IF_PC;
		ID_Inst <= IF_Inst;
	end else
	begin
		ID_PC <= ID_PC;
		//ID_Inst <= ID_Inst;
		ID_Inst <= 32'h0;
	end
end

endmodule
