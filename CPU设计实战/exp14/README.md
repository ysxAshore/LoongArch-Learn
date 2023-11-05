本实验实现了类SRAM接口：
- 将IF级取指操作改为类SRAM接口，新增`pfs_ready_go`信号
- 新增寄存器`fs_inst_r`用于存储inst_sram返回的指令
- 新增控制信号`wait_data_ok`用于舍弃被cancel的inst sram请求返回的的`data_ok`
- 删除原有的br_taken_cancel信号，新增br_stall信号
- 将EXE级访存操作改为类SRAM接口，新增寄存器用于存储data_sram返回的数据

注意事项：
- br_taken和三类清空流水线的信号只会维持一拍，而pre-IF流水级可能不能在这拍收到addr_ok，所以我们需要寄存器缓存这些信号
- 教材中提及的“例外发生时inst_sram的请求正好被接收的情况”是不存在的，因为各类重新取指的pc会通过组合逻辑更新nextpc
- 在发出取指请求时，需要确保IF级的`wait_data_ok`为低，因为在`data_ok`返回清空`wait_data_ok`前，我们目前发出的取指请求可能被接收并又被取消，这时我们就需要舍弃两个`data_ok`信号，增加代码复杂度
- 因为精确例外的要求，load和store指令不会被取消，因此无需考虑`data_ok`的取消逻辑
