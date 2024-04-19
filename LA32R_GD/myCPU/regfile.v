module regfile (
    input         clk,     //寄存器文件的写时钟
    // READ PORT 1
    input  [ 4:0] raddr1,  //端口A地址
    output [31:0] rdata1,  //寄存器端口A读出的数据
    // READ PORT 2
    input  [ 4:0] raddr2,  //端口B地址
    output [31:0] rdata2,  //寄存器端口B读出的数据
    // WRITE PORT
    input         we,      //寄存器文件的写使能端，高有效
    input  [ 4:0] waddr,   //写地址端口
    input  [31:0] wdata    //写数据
    `ifdef DIFFTEST_EN
    ,
    output [31:0] rf_o [31:0]   // difftest
    `endif 
);
  reg [31:0] rf[31:0];  //定义寄存器文件

  //写数据
  always @(posedge clk) begin  //clk上升沿写
    if (we) rf[waddr] <= wdata;  //同步写
  end

  //读A端口数据
  assign rdata1 = (raddr1 == 5'b0) ? 32'b0 : 
                ((raddr1 == waddr) & we) ? wdata : 
                                          rf[raddr1];

  //读B端口数据
  assign rdata2 = (raddr2 == 5'b0) ? 32'b0 :                 
                  ((raddr2==waddr) & we) ? wdata :
                                          rf[raddr2];

  // difftest
  `ifdef DIFFTEST_EN
  assign rf_o[0] = 32'h0;
      genvar i;
      generate
        for (i = 1; i < 32 ; i = i+1) begin
          assign rf_o[i] = waddr == i[4:0] & we ? wdata : rf[i];
        end
      endgenerate
  `endif
endmodule
