module minicpu_top (
    input wire clk,    //时钟信号
    input wire resetn, //复位信号,低电平有效——板载是低电平

    //指令存储器、数据存储器的写信号、地址信号、写数据信号、读数据信号
    output wire        inst_sram_we,     //指令存储器不需要写，设置为0
    output wire [31:0] inst_sram_addr,
    output wire [31:0] inst_sram_wdata,  //写数据可以是任意值
    input  wire [31:0] inst_sram_rdata,

    output wire        data_sram_we,
    output wire [31:0] data_sram_addr,
    output wire [31:0] data_sram_wdata,
    input  wire [31:0] data_sram_rdata
);

  reg valid;  //?valid是做什么的
  always @(posedge clk) begin  //同步复位
    if (!resetn) begin
      valid <= 1'b0;
    end else begin
      valid <= 1'b1;
    end
  end

  reg  [31:0] pc;  //当前指令的地址
  wire [31:0] nextpc;  //下一条指令的地址

  wire [31:0] inst;  //32位指令

  //这里也可以不需要译码直接比对
  wire [ 5:0] op_31_26;  //指令的26位到31位
  wire [ 3:0] op_25_22;  //指令的22位到25位
  wire [ 1:0] op_21_20;  //指令的20位到21位
  wire [ 4:0] op_19_15;  //指令的15位到19位
  wire [63:0] op_31_26_d;  //6-64译码
  wire [15:0] op_25_22_d;  //4-16译码
  wire [ 3:0] op_21_20_d;  //2-4译码
  wire [31:0] op_19_15_d;  //5-32译码
  wire [ 4:0] rd;  //目的寄存器编号
  wire [ 4:0] rj;  //源寄存器1编号
  wire [ 4:0] rk;  //源寄存器2编号
  wire [11:0] i12;  //指令中的12位立即数
  wire [15:0] i16;  //指令中的16位立即数

  wire        inst_add_w;  //是否是add_w指令
  wire        inst_addi_w;  //是否是addi_w指令
  wire        inst_ld_w;  //是否是ld_w指令
  wire        inst_st_w;  //是否是st_w指令
  wire        inst_bne;  //是否是bne指令

  wire        src2_is_imm;  //表示是否alu的第二个操作数是立即数
  wire        res_from_mem;  //表示是否结果是来自存储器——Load
  wire        gr_we;  //是否要写通用寄存器
  wire        mem_we;  //是否要写存储——st
  wire        src_reg_is_rd;  //rd位也是一个源寄存器
  wire [31:0] rj_value;  //寄存器编号rj读出的值
  wire [31:0] rkd_value;  //寄存器编号rk/rd读出的值

  wire [ 4:0] rf_raddr1;  //读寄存器地址1
  wire [ 4:0] rf_raddr2;  //读寄存器地址2
  wire [31:0] rf_wdata;  //写寄存器数据

  wire        br_taken;  //是否采用分支
  wire        rj_eq_rd;  //rj和rd读出的值是否相等
  wire [31:0] br_offs;  //分支偏移值
  wire [31:0] br_target;  //分支目标地址

  wire [31:0] imm;  //立即数
  wire [31:0] alu_src1;  //alu操作数1
  wire [31:0] alu_src2;  //alu操作数2
  wire [31:0] alu_result;  //alu运算结果


  always @(posedge clk) begin  //初始化以及迭代pc
    if (!resetn) begin
      pc <= 32'h1bfffffc;  //trick: to make nextpc be 0x1c000000 during reset 
    end else begin
      pc <= nextpc;
    end
  end

  assign inst_sram_we    = 1'b0;  //禁止写指令存储
  assign inst_sram_addr  = pc;  //读指令地址
  assign inst_sram_wdata = 32'b0;  //写指令存储值这里设置为0
  assign inst            = inst_sram_rdata;  //指令inst即为指令存储读出的值

  //对指令划分各个字段
  assign op_31_26        = inst[31:26];
  assign op_25_22        = inst[25:22];
  assign op_21_20        = inst[21:20];
  assign op_19_15        = inst[19:15];
  assign rd              = inst[4:0];
  assign rj              = inst[9:5];
  assign rk              = inst[14:10];
  assign i12             = inst[21:10];
  assign i16             = inst[25:10];

  //调用译码单元进行译码
  decoder_6_64 u_dec0 (
      .in(op_31_26),
      .co(op_31_26_d)
  );
  decoder_4_16 u_dec1 (
      .in(op_25_22),
      .co(op_25_22_d)
  );
  decoder_2_4 u_dec2 (
      .in(op_21_20),
      .co(op_21_20_d)
  );
  decoder_5_32 u_dec3 (
      .in(op_19_15),
      .co(op_19_15_d)
  );

  //ADDW 31-26值为0,25-22值为0,21-20是1,19-15是0 rj+rk->rd
  //ADDIW 31-26值为0,25-22值是10即十六进制a rj+立即数->rd
  //LDW 31-26值为10即a,25-22值为2 mem(rj+立即数)->rd
  //STW 31-26值为10即a,25-22值为6 rd->mem(rj+立即数)
  //BNE 31-26值为6'h17 rj!=rd->jump 

  assign inst_add_w = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h00];
  assign inst_addi_w = op_31_26_d[6'h00] & op_25_22_d[4'ha];
  assign inst_ld_w = op_31_26_d[6'h0a] & op_25_22_d[4'h2];
  assign inst_st_w   = op_31_26_d[6'h0a] & op_25_22_d[4'h6]; //在这里实现inst_st_w指令的译码
  assign inst_bne = op_31_26_d[6'h17];

  assign src2_is_imm   = inst_addi_w | inst_ld_w | inst_st_w;  //实现立即数选择信号 ADDIW、LDW、STW的第二个操作数需要是立即数
  assign res_from_mem = inst_ld_w;  //实现寄存器结果的标识信号 只有LDW指令的寄存器结果是来自于存储器的
  assign gr_we = inst_add_w | inst_ld_w | inst_addi_w;  //写寄存器信号 ADD ADDIW LDW需要写寄存器
  assign mem_we = inst_st_w;  //写存储器信号 STW需要写存储器 
  assign src_reg_is_rd = inst_bne | inst_st_w;  //第二个源操作数来自于rd BNE,STW

  assign rf_raddr1 = rj;
  assign rf_raddr2 = src_reg_is_rd ? rd : rk;
  regfile u_regfile (
      .clk   (clk),
      .raddr1(rf_raddr1),  //补充读寄存器1编号地址
      .rdata1(rj_value),
      .raddr2(rf_raddr2),  //补充读寄存器2编号地址
      .rdata2(rkd_value),
      .we    (gr_we),
      .waddr (rd),         //写地址
      .wdata (rf_wdata)
  );  //在空出的括号里完成引脚匹配

  assign br_offs = {
    {14{i16[15]}}, i16, 2'b0
  };  //在这里完成br_offs信号的生成 低位补2位0再符号扩展 SignExtend({offs16, 2'b0}, 32)
  assign br_target = pc + br_offs;
  assign rj_eq_rd = (rj_value == rkd_value);
  assign br_taken = valid && inst_bne && !rj_eq_rd;  //valid的作用，只有复位无效时才执行跳转
  assign nextpc = br_taken ? br_target : pc + 4;  //在这里实现nextpc信号的生成

  assign imm = {{20{i12[11]}}, i12[11:0]};  //SignExtend(si12, 32)
  assign alu_src1 = rj_value;
  assign alu_src2 = src2_is_imm ? imm : rkd_value;  //在这里实现alu_src2信号

  assign alu_result = alu_src1 + alu_src2;  //这5条指令，除BNE外都使用加法

  assign data_sram_we = mem_we;
  assign data_sram_addr = alu_result;  //访存地址是通过alu计算得到的
  assign data_sram_wdata = rkd_value;  //写存存储器的LDW是将rd写入存储

  assign rf_wdata = res_from_mem ? data_sram_rdata : alu_result;//在这里完成写回寄存器值的选择

endmodule
