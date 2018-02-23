`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:24:02 01/17/2018 
// Design Name: 
// Module Name:    BranchJumpAddr 
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
module BranchJumpAddr(
    input [31:0] rs_Reg,
    input [31:0] rt_Reg,
    input [31:0] Imm16Ext,
    input [31:0] PCPlus4,
    input [25:0] Imm26,
    input [1:0] OpCtr,
    output reg [31:0] PC
    );

always @(*)
begin
	case(OpCtr)
		`BEQ_BJAOp:  PC = (rs_Reg == rt_Reg) ? (PCPlus4 + Imm16Ext << 2) : PCPlus4; //分支指令
		`Jump_BJAOp: PC = {PCPlus4[31:28], (Imm26 << 2)};                //Jump指令
		`JR_BJAOp:   PC = rs_Reg;                                        //JR指令
	endcase
end

endmodule
