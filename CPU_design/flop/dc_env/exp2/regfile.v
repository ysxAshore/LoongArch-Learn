module regfile (
    input         clk,     //写时钟——只控制写
    input  [ 4:0] raddr1,  //读端口地址A
    output [31:0] rdata1,  //读端口数据A
    input  [ 4:0] raddr2,  //读端口地址B
    output [31:0] rdata2,  //读端口数据B
    input         we,      //同步写使能信号
    input  [ 4:0] waddr,   //写端口地址和写端口数据
    input  [31:0] wdata
);
  reg [31:0] rf[31:0];  //32个32位宽的寄存器
  // 写 0号寄存器不能写,实质上是硬连线到0
  always @(posedge clk) begin
    if (waddr != 5'b0) rf[waddr] <= wdata;
  end
  // 读A
  assign rdata1 = (raddr1 == 5'b0) ? 32'b0 : rf[raddr1];
  // 读B
  assign rdata2 = (raddr2 == 5'b0) ? 32'b0 : rf[raddr2];
endmodule
