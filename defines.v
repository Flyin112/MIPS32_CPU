`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:33:11 01/17/2018 
// Design Name: 
// Module Name:    defines 
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
//全局宏定义
`define ZeroWord 32'h00000000 //32位0
`define True_v 1'b1 //逻辑真
`define False_v 1'b0 //逻辑假

//ALU宏定义
`define ADD_ALUCtr 4'b0000 //加
`define SUB_ALUCtr 4'b0001 //减
`define AND_ALUCtr 4'b0010 //与
`define OR_ALUCtr  4'b0011 //或
`define XOR_ALUCtr 4'b0100 //异或
`define NOR_ALUCtr 4'b0101 //或非
`define SLL_ALUCtr 4'b0110 //逻辑左移
`define SRL_ALUCtr 4'b0111 //逻辑右移
`define BEQ_ALUCtr 4'b1000 //等于分支

//Ctr宏定义
`define RType_Op  6'b000000 //R型指令
`define LW_Op     6'b100011 //Load指令
`define SW_Op     6'b101011 //Store指令
`define BEQ_Op    6'b000100 //等于分支
`define JUMP_Op   6'b000010 //无条件跳转
`define ADD_Funct 6'b100000 //R型指令，ADD指令的Funct
`define SUB_Funct 6'b100010 //R型指令，SUB指令的Funct
`define AND_Funct 6'b100100 //R型指令，AND指令的Funct
`define OR_Funct  6'b100101 //R型指令，OR指令的Funct
`define XOR_Funct 6'b100110 //R型指令，XOR指令的Funct
`define NOR_Funct 6'b100111 //R型指令，NOR指令的Funct
`define SLL_Funct 6'b000000 //R型指令，SLL指令的Funct
`define SRL_Funct 6'b000010 //R型指令，SRL指令的Funct
`define JR_Funct  6'b001000 //R型指令，JR指令的Funct
`define NOP_Funct 6'b000000 //R型指令，NOP指令的Funct
`define rd_mux 1
`define rt_mux 0
`define rsData_mux 0
`define shamt_mux  1
`define rtData_mux  0
`define immExtData_mux 1
`define ALURes_mux        0
`define DataMemRdData_mux 1
`define Jump_BJAOp   2'b00
`define JR_BJAOp     2'b01
`define BEQ_BJAOp    2'b10