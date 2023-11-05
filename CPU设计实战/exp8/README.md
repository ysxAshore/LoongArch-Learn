本实验使用阻塞的方式解决了控制相关和寄存器写后读相关：
- 分支指令在ID级被阻塞时不能发出`br_taken_cancel`信号，故使用`ds_allowin`作为分支指令未被阻塞的标志，参与`br_taken_cancel`信号的生成
