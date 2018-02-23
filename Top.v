`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:09:15 01/18/2018 
// Design Name: 
// Module Name:    Top 
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
module Top(
    input clk,
    input rst
    );
	 


wire [31:0] _pc;
wire [31:0] pc;
PC_Reg pc_reg(
	.Clk(clk),
	.Rst(rst),
	._PC(_pc),
	.PC(pc));

wire [31:0] pcplus4;
PCADD pcadd(
	.PC(pc),
	.PCPlus4(pcplus4));

wire [31:0] ifinst;
Instruction_memory instmem(
	.ce(~rst),
	.ImemRdAddr(pc),
	.Instruction(ifinst));

wire [31:0] idpc;
wire [31:0] idinst;
IF_ID ifid(
	.Clk(clk),
	.Rst(rst),
	.Stall(branchjump),
	.IF_PC(pcplus4),
	.IF_Inst(ifinst),
	.ID_PC(idpc),
	.ID_Inst(idinst));

wire regdst;
wire alusrca;
wire alusrcb;
wire regwrite;
wire memwrite;
wire memtoreg;
wire branchjump;
wire [1:0] bjaop;
wire [3:0] alucontrol;
Ctr cu(
	.OpCode(idinst[31:26]),
	.Funct(idinst[5:0]),
	.RegDst(regdst),
	.ALUSrcA(alusrca),
	.ALUSrcB(alusrcb),
	.RegWrite(regwrite),
	.MemWrite(memwrite),
	.MemToReg(memtoreg),
	.BranchJump(branchjump),
	.BJAOp(bjaop),
	.ALUControl(alucontrol));

wire wbregwrite;
wire [4:0] regwraddr;
wire [31:0] regwrdata;
wire [31:0] idrega;
wire [31:0] idregb;
register regs(
	.Clk(clk),
	.Rst(rst),
	.RegARdAddr(idinst[25:21]),
	.RegBRdAddr(idinst[20:16]),
	.RegWrAddr(regwraddr),
	.RegWrData(regwrdata),
	.RegWrite(wbregwrite),
	.RegARdData(idrega),
	.RegBRdData(idregb));

wire [31:0] signimm;
Sign_Ext signext(
	.Imm(idinst[15:0]),
	.SignImm(signimm));

wire [31:0] branchjumppc;
BranchJumpAddr branchjumpaddr(
	.rs_Reg(idrega),
	.rt_Reg(idregb),
	.Imm16Ext(signimm),
	.PCPlus4(idpc),
	.Imm26(idinst[25:0]),
	.OpCtr(bjaop),
	.PC(branchjumppc));

wire exregdst;
wire exalusrca;
wire exalusrcb;
wire exregwrite;
wire exmemwrite;
wire exmemtoreg;
wire [3:0] exalucontrol;
wire [31:0] exshamt;
wire [31:0] exrega;
wire [31:0] exregb;
wire [4:0] exregrt;
wire [4:0] exregrd;
wire [31:0] eximmext;
ID_EX idex(
	.Clk(clk),
	.Rst(rst),
	.ID_RegDst(regdst),
	.ID_ALUSrcA(alusrca),
	.ID_ALUSrcB(alusrcb),
	.ID_RegWrite(regwrite),
	.ID_MemWrite(memwrite),
	.ID_MemToReg(memtoreg),
	.ID_ALUControl(alucontrol),
	.ID_Shamt(idinst[10:6]),
	.ID_RegA(idrega),
	.ID_RegB(idregb),
	.ID_Regrt(idinst[20:16]),
	.ID_Regrd(idinst[15:11]),
	.ID_ImmExt(signimm),
	.EX_RegDst(exregdst),
	.EX_ALUSrcA(exalusrca),
	.EX_ALUSrcB(exalusrcb),
	.EX_RegWrite(exregwrite),
	.EX_MemWrite(exmemwrite),
	.EX_MemToReg(exmemtoreg),
	.EX_ALUControl(exalucontrol),
	.EX_Shamt(exshamt),
	.EX_RegA(exrega),
	.EX_RegB(exregb),
	.EX_Regrt(exregrt),
	.EX_Regrd(exregrd),
	.EX_ImmExt(eximmext));

wire [4:0] exwriteregaddr;
MUX2_5 mux2(
	.Port0(exregrt),
	.Port1(exregrd),
	.Select(exregdst),
	.Output(exwriteregaddr));

wire [31:0] alusrcbdata;
MUX2_32 mux3(
	.Port0(exregb),
	.Port1(eximmext),
	.Select(exalusrcb),
	.Output(alusrcbdata));

wire [31:0] alusrcadata;
MUX2_32 muxalua(
	.Port0(exrega),
	.Port1(exshamt),
	.Select(exalusrca),
	.Output(alusrcadata));

wire [31:0] exaluout;
ALU alu(
	.Rst(rst),
	.SrcA(alusrcadata),
	.SrcB(alusrcbdata),
	.ALUCtr(exalucontrol),
	.ALURes(exaluout));

wire memregwrite;
wire memmemtoreg;
wire memmemwrite;
wire [31:0] memaluout;
wire [31:0] memwritetomemdata;
wire [4:0] memwriteregaddr;
EX_MEM exmem(
	.Clk(clk),
	.Rst(rst),
	.EX_RegWrite(exregwrite),
	.EX_MemToReg(exmemtoreg),
	.EX_MemWrite(exmemwrite),
	.EX_ALUOut(exaluout),
	.EX_WriteToMemData(exregb),
	.EX_WriteRegAddr(exwriteregaddr),
	.MEM_RegWrite(memregwrite),
	.MEM_MemToReg(memmemtoreg),
	.MEM_MemWrite(memmemwrite),
	.MEM_ALUOut(memaluout),
	.MEM_WriteToMemData(memwritetomemdata),
	.MEM_WriteRegAddr(memwriteregaddr));

wire [31:0] memreadmemdata;
Data_memory datamem(
	.Clk(clk),
	.DmemAddr(memaluout),
	.DmemWrData(memwritetomemdata),
	.DmemWrite(memmemwrite),
	.DmemRdData(memreadmemdata));

wire wbmemtoreg;
wire [31:0] wbaluout;
wire [31:0] wbreadmemdata;
MEM_WB memwb(
	.Clk(clk),
	.Rst(rst),
	.MEM_RegWrite(memregwrite),
	.MEM_MemToReg(memmemtoreg),
	.MEM_ALUOut(memaluout),
	.MEM_ReadMemData(memreadmemdata),
	.MEM_WriteRegAddr(memwriteregaddr),
	.WB_RegWrite(wbregwrite),
	.WB_MemToReg(wbmemtoreg),
	.WB_ALUOut(wbaluout),
	.WB_ReadMemData(wbreadmemdata),
	.WB_WriteRegAddr(regwraddr));

MUX2_32 mux4(
	.Port0(wbaluout),
	.Port1(wbreadmemdata),
	.Select(wbmemtoreg),
	.Output(regwrdata));
	
MUX2_32 mux1(
	.Port0(pcplus4),
	.Port1(branchjumppc),
	.Select(branchjump),
	.Output(_pc));

endmodule
