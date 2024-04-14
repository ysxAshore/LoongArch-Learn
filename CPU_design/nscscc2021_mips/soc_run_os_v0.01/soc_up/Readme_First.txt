//---------------------------------------------------------------------------------------------------------------------
//---龙芯
//---体系结构教学试验箱3.0（Artix-7）
//---------------------------------------------------------------------------------------------------------------------
本目录提供基于开源GS232搭建的SoC_up的源码和vivado工程（基于体系结构教学试验箱3.0）。

1. 目录结构介绍
  +--rtl/   : GS232源码和soc各类外设控制器源码
  |  |--cpu232/    : GS232源码，高校老师可通过龙芯开源渠道申请到
  |  |--AMBA/      : axi_mux_1x5 和 axi2apb_sbridge 
  |  |--APB_DEV/   : apb设备,nand控制器和uart控制器
  |  |    |--NAND/         ：nand控制器源码
  |  |    |--URT/          ：uart控制器源码
  |  |    |--apb_dev_top.v ：apb设备顶层
  |  |    |--apb_mux2.v    ：apb_mux_1x2
  |  |    |--nand_module.v ：nand控制器顶层封装一次
  |  |--CONFREG/   : confreg模块，8个32位内存映射读写寄存器和一个dma的order_addr_in寄存器
  |  |--DMA/       : 一路dma模块，仅用于内存和nand间交互数据
  |  |--MAC/       : 网口控制器源码
  |  |--SPI/       : spi flash控制器模块
  |  |--TOP/       : soc的顶层
  |
  |--simu/   : 功能仿真相关目录及文件
  |  |--run/       : 使用ncverilog仿真的目录
  |  |--soft/      : 测试func的源码和编译目录
  |  |--testbench/ : 仿真顶层和各外设模型
  |     |--vmac/                : 网口的虚拟端仿真源码
  |     |--MX25L6405D.v         : spi flash仿真颗粒
  |     |--ejtag_virtual_host.v : ejtag 虚拟主机 仿真源码
  |     |--nand_sim.v           : nand仿真颗粒
  |     |--uart_dev.v           : uart虚拟设备的仿真源码
  |     |--godson_system.v      : soc的仿真顶层
  |
  |--vivado_xpr/     : vivado2017.1创建的SoC_up的工程脚本，用vivado2018.1打开后请升级其中的xilinx ip
  |
  |--pmon_and_linux/ : pmon、linux和清华的ucore编译目录，包含源码
  |
  |--soc_up介绍.pdf  : soc_up的介绍文档
  |        
  |--Readme_First.txt: 本文档
