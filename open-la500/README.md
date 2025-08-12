# openLA500
## 前言
openLA500是一款实现了龙芯架构32位精简版指令集（loongarch32r）的处理器核。其结构为单发射五级流水，分为取指、译码、执行、访存、写回五个流水级。并且含有两路组相连结构的指令和数据cache；32项tlb；以及简易的分支预测器。此外，处理器核对外为AXI接口，容易集成。

OpenLA500已经过流片验证，.13工艺下频率为100M，dhrystone，coremark分数分别为0.78 DMIPS/MHz(指令数有点高)，2.75 coremark/Mhz。软件方面，uboot、linux 5.14、ucore、rt-thread等常用工具及内核已完成对openLA500的适配。

详细设计报告见doc目录。
