`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:34:00 01/18/2018 
// Design Name: 
// Module Name:    MEM_WB 
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
module MEM_WB(
    input Clk,
    input Rst,
	 
	 input MEM_RegWrite,
	 input MEM_MemToReg,
	 input [31:0] MEM_ALUOut,
	 input [31:0] MEM_ReadMemData,
	 input [4:0] MEM_WriteRegAddr,
	 
	 output reg WB_RegWrite,
	 output reg WB_MemToReg,
	 output reg [31:0] WB_ALUOut,
	 output reg [31:0] WB_ReadMemData,
	 output reg [4:0] WB_WriteRegAddr
    );

always @(posedge Clk)
begin
	if(Rst == `False_v)
	begin
		WB_RegWrite <= MEM_RegWrite;
	   WB_MemToReg <= MEM_MemToReg;
	   WB_ALUOut <= MEM_ALUOut;
	   WB_ReadMemData <= MEM_ReadMemData;
	   WB_WriteRegAddr <= MEM_WriteRegAddr;
	end else 
	begin
		WB_RegWrite <= 1'b0;
	   WB_MemToReg <= 1'b0;
	   WB_ALUOut <= 32'h00000000;
	   WB_ReadMemData <= 32'h00000000;
	   WB_WriteRegAddr <= 5'b00000;
	end
end

endmodule
