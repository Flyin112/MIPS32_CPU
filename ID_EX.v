`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:01:45 01/18/2018 
// Design Name: 
// Module Name:    ID_EX 
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
module ID_EX(
    input Clk,
    input Rst,
	 
	 input ID_RegDst,
	 input ID_ALUSrcA,
	 input ID_ALUSrcB,
	 input ID_RegWrite,
	 input ID_MemWrite,
	 input ID_MemToReg,
	 input [3:0] ID_ALUControl,
	 input [4:0] ID_Shamt,
	 input [31:0] ID_RegA,
	 input [31:0] ID_RegB,
	 input [4:0] ID_Regrt,
	 input [4:0] ID_Regrd,
	 input [31:0] ID_ImmExt,
	 
	 output reg EX_RegDst,
	 output reg EX_ALUSrcA,
	 output reg EX_ALUSrcB,
	 output reg EX_RegWrite,
	 output reg EX_MemWrite,
	 output reg EX_MemToReg,
	 output reg [3:0] EX_ALUControl,
	 output reg [31:0] EX_Shamt,
	 output reg [31:0] EX_RegA,
	 output reg [31:0] EX_RegB,
	 output reg [4:0] EX_Regrt,
	 output reg [4:0] EX_Regrd,
	 output reg [31:0] EX_ImmExt
    );

always @(posedge Clk)
begin
	if(Rst == `True_v)
	begin
		EX_RegDst <= 1'b0;
		EX_ALUSrcA <= 1'b0;
	   EX_ALUSrcB <= 1'b0;
	   EX_RegWrite <= 1'b0;
	   EX_MemWrite <= 1'b0;
	   EX_MemToReg <= 1'b0;
	   EX_ALUControl <= 4'b0000;
		EX_Shamt <= 32'h0;
	   EX_RegA <= 32'h00000000;
	   EX_RegB <= 32'h00000000;
	   EX_Regrt <= 5'b00000;
	   EX_Regrd <= 5'b00000;
	   EX_ImmExt <= 32'h00000000;
	end else 
	begin
		EX_RegDst <= ID_RegDst;
		EX_ALUSrcA <= ID_ALUSrcA;
	   EX_ALUSrcB <= ID_ALUSrcB;
	   EX_RegWrite <= ID_RegWrite;
	   EX_MemWrite <= ID_MemWrite;
	   EX_MemToReg <= ID_MemToReg;
	   EX_ALUControl <= ID_ALUControl;
		EX_Shamt <= {27'b0,ID_Shamt};
	   EX_RegA <= ID_RegA;
	   EX_RegB <= ID_RegB;
	   EX_Regrt <= ID_Regrt;
	   EX_Regrd <= ID_Regrd;
	   EX_ImmExt <= ID_ImmExt;
	end
end

endmodule
