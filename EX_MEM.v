`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:18:55 01/18/2018 
// Design Name: 
// Module Name:    EX_MEM 
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
module EX_MEM(
    input Clk,
    input Rst,
	 
	 input EX_RegWrite,
	 input EX_MemToReg,
	 input EX_MemWrite,
	 input [31:0] EX_ALUOut,
	 input [31:0] EX_WriteToMemData,
	 input [4:0] EX_WriteRegAddr,
	 
	 output reg MEM_RegWrite,
	 output reg MEM_MemToReg,
	 output reg MEM_MemWrite,
	 output reg [31:0] MEM_ALUOut,
	 output reg [31:0] MEM_WriteToMemData,
	 output reg [4:0] MEM_WriteRegAddr
    );

always @(posedge Clk)
begin
	if(Rst == `False_v)
	begin
		MEM_RegWrite <= EX_RegWrite;
	   MEM_MemToReg <= EX_MemToReg;
	   MEM_MemWrite <= EX_MemWrite;
	   MEM_ALUOut <= EX_ALUOut;
	   MEM_WriteToMemData <= EX_WriteToMemData;
	   MEM_WriteRegAddr <= EX_WriteRegAddr;
	end else 
	begin
		MEM_RegWrite <= 1'b0;
	   MEM_MemToReg <= 1'b0;
	   MEM_MemWrite <= 1'b0;
	   MEM_ALUOut <= 32'h00000000;
	   MEM_WriteToMemData <= 32'h00000000;
	   MEM_WriteRegAddr <= 5'b00000;
	end
end

endmodule
