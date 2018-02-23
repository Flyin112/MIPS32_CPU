# MIPS32_CPU
使用ISE Design Suite 14.7开发，开发语言为Verilog  
五段流水线，支持13条指令：  
    R型：ADD、SUB、AND、OR、XOR、NOR、SLL、SRL、JR  
    I型：LW、SW、BEQ  
    J型：JUMP  
    分支跳转指令的地址计算提前至译码段执行。  
![架构图](https://github.com/Flyin112/MIPS32_CPU/blob/master/MIPSCPU.jpg)
