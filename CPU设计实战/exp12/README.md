本实验新增了部分CSR寄存器和CSR指令，实现了syscall异常：
- 实现了CSR模块和本实验要求的CSR寄存器
- 使用`excp_flush`表示例外清空流水线，`ertn_flush`表示ertn指令提交清空流水线，`refetch_flush`表示其他情况清空流水线。在WB级生成这些信号，IF级根据这些信号生成`nextpc`，其他流水级根据这些信号清空并不发出各类控制信号
- 为新增指令添加译码逻辑，修改控制信号；在ID级增加CSR读取逻辑；在EXE级进行CSR读取结果和ALU运算结果的二选一，并生成CSR写入数据；在WB级增加CSR写入逻辑
- EXE级需要知晓MEM级和WB级是否有发生例外的指令以生成data sram的使能信号

注意事项：
- flush信号为高的后一拍各流水级的valid信号才会拉低，但flush信号只维持一拍，为确保flush后的第一条指令进入流水线，flush信号为高时置起fs_allowin
- 与教材不同，使用了CSR寄存器修改后清空流水线的方式解决了CSR寄存器的写后读相关
- CSR模块的代码风格和教材略有不同
