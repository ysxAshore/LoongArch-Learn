本实验新增了分支指令和访存指令：
- 为新增指令添加译码逻辑，
- 为访存指令新增了控制信号`mem_size`、`mem_sign_ext`和`addr_low`并沿着流水级传递
- 为分支指令新增了控制信号`rj_lt_rd_unsign`，`rj_lt_rd_sign`
- 修改data sram的写使能、写数据和读出数据的处理逻辑
