# DIFFTEST使用说明

## 目录

-   [3.1 DPIC接口说明](#31-DPIC接口说明)

LA所使用的DIFFTEST框架三基于“一生一芯”提供的oscpu开发框架修改得到的

DIFFTEST的比对对象是两个核，一个是用户设计的核，一个是参考核。 比对原理是设计核在每提交一条指令的同时使参考核执行相同的指令，之后比对所有的通用寄存器和CSR[^注释1]寄存器的值，如果完全相同则认为设计核执行正确。 同时， DIFFTEST比对机制也实现了对于store指令的比对，一旦store指令中的物理地址和存储数据与参考核不同，也会立即暂停仿真，以此来尽早定位错误

本项目DIFFTEST所使用的参考核是经过移植后的`la32r-nemu`[^注释2]，只需要使用动态链接文件(`toolchains/nemu/la32r-nemu-interpreter-so`)即可进行difftest

## 3.1 DPIC接口说明

[^注释1]: Control and Status Register

[^注释2]: [https://gitee.com/wwt\_panache/la32r-nemu](https://gitee.com/wwt_panache/la32r-nemu "https://gitee.com/wwt_panache/la32r-nemu")
