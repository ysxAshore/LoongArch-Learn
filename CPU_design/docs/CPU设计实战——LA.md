# CPU设计实战——LA

教程地址：[https://bookdown.org/loongson/\_book3/](https://bookdown.org/loongson/_book3/ "https://bookdown.org/loongson/_book3/")

Gitee仓库地址：

[ LoongsonEdu/CDP\_EDE\_local Gitee.com（码云） 是 OSCHINA.NET 推出的代码托管平台，支持 Git 和 SVN，提供免费的私有仓库托管。目前已有超过 1000 万的开发者选择 Gitee。 https://gitee.com/loongson-edu/cdp\_ede\_local](https://gitee.com/loongson-edu/cdp_ede_local " LoongsonEdu/CDP_EDE_local Gitee.com（码云） 是 OSCHINA.NET 推出的代码托管平台，支持 Git 和 SVN，提供免费的私有仓库托管。目前已有超过 1000 万的开发者选择 Gitee。 https://gitee.com/loongson-edu/cdp_ede_local")

[C1 CPU芯片研发过程概述](<C1 CPU芯片研发过程概述/C1 CPU芯片研发过程概述.md> "C1 CPU芯片研发过程概述")

[C2 硬件实验平台及FPGA设计流程](<C2 硬件实验平台及FPGA设计流程/C2 硬件实验平台及FPGA设计流程.md> "C2 硬件实验平台及FPGA设计流程")

[C3 数字逻辑电路设计基础](<C3 数字逻辑电路设计基础/C3 数字逻辑电路设计基础.md> "C3 数字逻辑电路设计基础")

[C4 单周期CPU设计](<C4 单周期CPU设计/C4 单周期CPU设计.md> "C4 单周期CPU设计")

[C5 五级流水CPU设计](<C5 五级流水CPU设计/C5 五级流水CPU设计.md> "C5 五级流水CPU设计")

[C6 五级流水CPU的精确中断异常实现](<C6 五级流水CPU的精确中断异常实现/C6 五级流水CPU的精确中断异常实现.md> "C6 五级流水CPU的精确中断异常实现")

[C7 五级流水MC CPU的AXI总线接口](<C7 五级流水MC CPU的AXI总线接口/C7 五级流水MC CPU的AXI总线接口.md> "C7 五级流水MC CPU的AXI总线接口")

[附录](附录/附录.md "附录")

上面是MIPS版本的教学设计，所采用的是之前学习李亚民教授《计算机原理与设计Verilog版》中使用的flop触发器控制流水方式。但是在设计C7 类SRAM总线接口遇到了很多问题——对类SRAM接口的不熟悉以及对flop结合类SRAM的机制了解不够，导致实现较为困难。因此为了更方便快速地学习以及实现，我决定放弃flop这种流水控制方式，转而按照下面《CPU设计实战（LoongArch版）》中的流水线ready\_go、valid的握手机制这种流水线控制方式

[CPU设计实战：LoongArch版.pdf](file/CPU设计实战：LoongArch版_A_Xcj5-w6Z.pdf "CPU设计实战：LoongArch版.pdf")

其中对于C1、C2、C3、C4的实现仍同前面的实现方式，下面从C5开始重新设计

[C3 LA数字逻辑电路设计基础](<C3 LA数字逻辑电路设计基础/C3 LA数字逻辑电路设计基础.md> "C3 LA数字逻辑电路设计基础")

[C5 LA简单流水线CPU设计](<C5 LA简单流水线CPU设计/C5 LA简单流水线CPU设计.md> "C5 LA简单流水线CPU设计")

[C6 在流水线中增加用户态指令](<C6 在流水线中增加用户态指令/C6 在流水线中增加用户态指令.md> "C6 在流水线中增加用户态指令")

[C7 异常和中断的支持](<C7 异常和中断的支持/C7 异常和中断的支持.md> "C7 异常和中断的支持")

[C8 AXI总线接口设计](<C8 AXI总线接口设计/C8 AXI总线接口设计.md> "C8 AXI总线接口设计")

[C9 存储管理单元设计](<C9 存储管理单元设计/C9 存储管理单元设计.md> "C9 存储管理单元设计")

[C10 高速缓存设计](<C10 高速缓存设计/C10 高速缓存设计.md> "C10 高速缓存设计")
