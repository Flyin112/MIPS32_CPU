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
//ȫ�ֺ궨��
`define ZeroWord 32'h00000000 //32λ0
`define True_v 1'b1 //�߼���
`define False_v 1'b0 //�߼���

//ALU�궨��
`define ADD_ALUCtr 4'b0000 //��
`define SUB_ALUCtr 4'b0001 //��
`define AND_ALUCtr 4'b0010 //��
`define OR_ALUCtr  4'b0011 //��
`define XOR_ALUCtr 4'b0100 //���
`define NOR_ALUCtr 4'b0101 //���
`define SLL_ALUCtr 4'b0110 //�߼�����
`define SRL_ALUCtr 4'b0111 //�߼�����
`define BEQ_ALUCtr 4'b1000 //���ڷ�֧

//Ctr�궨��
`define RType_Op  6'b000000 //R��ָ��
`define LW_Op     6'b100011 //Loadָ��
`define SW_Op     6'b101011 //Storeָ��
`define BEQ_Op    6'b000100 //���ڷ�֧
`define JUMP_Op   6'b000010 //��������ת
`define ADD_Funct 6'b100000 //R��ָ�ADDָ���Funct
`define SUB_Funct 6'b100010 //R��ָ�SUBָ���Funct
`define AND_Funct 6'b100100 //R��ָ�ANDָ���Funct
`define OR_Funct  6'b100101 //R��ָ�ORָ���Funct
`define XOR_Funct 6'b100110 //R��ָ�XORָ���Funct
`define NOR_Funct 6'b100111 //R��ָ�NORָ���Funct
`define SLL_Funct 6'b000000 //R��ָ�SLLָ���Funct
`define SRL_Funct 6'b000010 //R��ָ�SRLָ���Funct
`define JR_Funct  6'b001000 //R��ָ�JRָ���Funct
`define NOP_Funct 6'b000000 //R��ָ�NOPָ���Funct
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