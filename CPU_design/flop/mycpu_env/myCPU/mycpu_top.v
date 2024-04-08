module mycpu_top (
    input  wire        clk,               //系统时钟
    input  wire        resetn,            //复位信号、板载按下复位按钮低电平
    // inst sram interface
    output wire        inst_sram_we,      //指令存储器写信号，设置无效——低电平
    output wire [31:0] inst_sram_addr,    //读指令地址
    output wire [31:0] inst_sram_wdata,   //写指令地址——设置为0
    input  wire [31:0] inst_sram_rdata,   //读指令数据
    // data sram interface
    output wire        data_sram_we,      //写数据存储器信号，高电平有效
    output wire [31:0] data_sram_addr,    //读写数据存储器地址
    output wire [31:0] data_sram_wdata,   //写数据存储器数据
    input  wire [31:0] data_sram_rdata,   //读出的数据存储器数据
    // trace debug interface 用于和golden_trace对比
    output wire [31:0] debug_wb_pc,       //指令地址
    output wire [ 3:0] debug_wb_rf_we,    //写寄存器信号——0~7,8~15,16~23,24~31
    output wire [ 4:0] debug_wb_rf_wnum,  //写寄存器编号
    output wire [31:0] debug_wb_rf_wdata  //写寄存器数据
);
  //CSR
  reg [31:0] csr;
  reg reset;//高电平复位信号，这个可以不用，直接使用低电平的复位信号即可
  always @(posedge clk) reset <= ~resetn;

  reg valid;  //用于分支PC地址的更新有效信号，复位时为低电平，正常为高电平
  always @(posedge clk) begin
    if (reset) begin
      valid <= 1'b0;
      csr   <= 32'h8;
    end else begin
      valid <= 1'b1;
    end
  end

  wire [31:0] seq_pc;  //序列执行的下一个PC
  wire [31:0] nextpc;  //最终的下一条指令地址，在seq_pc和分支地址中选择
  wire br_taken;  //是否采取分支
  wire [31:0] br_target;  //分支目标地址
  wire [31:0] instF;  //读出的inst_ram数据——指令
  reg [31:0] pc;  //当前正在执行的指令的地址

  wire [11:0] alu_op;  //alu操作译码
  wire load_op;  //?
  wire src1_is_pc;  //第一个操作数是否是PC，用于计算分支地址
  wire src2_is_imm;  //第二个操作数是否是立即数
  wire res_from_mem;  //写寄存器堆结果是否来自于存储器——LW
  wire dst_is_r1;  //目的
  wire gr_we;  //写寄存器信号
  wire mem_we;  //写存储器信号
  wire src_reg_is_rd;  //第二个源操作数是否来自于rd寄存器,默认是rk
  wire [4:0] dest;  //写寄存器编号
  wire [31:0] rj_value;  //根据rj读出的寄存器数据
  wire [31:0] rkd_value;//根据rk/rd读出的寄存器数据，默认是读出的rk，如果src_reg_is_rd高有效则读出的rd
  wire [31:0] imm;  //32位立即数
  wire [31:0] br_offs;  //分支偏移地址
  wire [31:0] jirl_offs;  //链接并跳转指令的跳转地址

  wire [5:0] op_31_26;  //inst[31:26]
  wire [3:0] op_25_22;  //inst[25:22]
  wire [1:0] op_21_20;  //inst[21:20]
  wire [4:0] op_19_15;  //inst[19:15]
  wire [4:0] rd;  //inst的rd编码
  wire [4:0] rj;  //inst的rj编码
  wire [4:0] rk;  //inst的rk编码
  wire [11:0] i12;  //inst中的12位立即数
  wire [19:0] i20;  //inst中的20位立即数
  wire [15:0] i16;  //inst中的16位立即数
  wire [25:0] i26;  //inst中的26位立即数

  wire [63:0] op_31_26_d;  //6-64译码
  wire [15:0] op_25_22_d;  //4-16译码
  wire [3:0] op_21_20_d;  //2-4译码
  wire [31:0] op_19_15_d;  //5-32译码

  wire inst_add_w;
  wire inst_sub_w;
  wire inst_slt;
  wire inst_sltu;
  wire inst_nor;
  wire inst_and;
  wire inst_or;
  wire inst_xor;
  wire inst_sll;
  wire inst_srl;
  wire inst_sra;
  wire inst_slli_w;
  wire inst_srli_w;
  wire inst_srai_w;
  wire inst_addi_w;
  wire inst_andi;
  wire inst_xori;
  wire inst_ori;
  wire inst_slti;
  wire inst_sltui;
  wire inst_ld_w;
  wire inst_st_w;
  wire inst_jirl;
  wire inst_b;
  wire inst_bl;
  wire inst_beq;
  wire inst_bne;
  wire inst_lu12i_w;
  wire inst_csrwr;
  wire inst_pcaddu12i;
  wire inst_mul;
  wire inst_mulh;
  wire inst_mulhu;
  wire inst_div;
  wire inst_mod;
  wire inst_modu;
  wire inst_divu;
  wire inst_bge;
  wire inst_blt;
  wire inst_bgeu;
  wire inst_bltu;
  wire inst_ld_b;
  wire inst_ld_h;
  wire inst_ld_bu;
  wire inst_ld_hu;
  wire inst_st_b;
  wire inst_st_h;

  wire need_ui5;  //指令是否需要5位的无符号立即数——移位指令
  wire need_si12;  //指令是否需要12位的有符号立即数
  wire need_ui12;  //指令是否需要12位的无符号立即数——立即数逻辑运算指令
  wire need_si16;  //指令是否需要16位的有符号立即数
  wire need_si20;  //指令是否需要16位的有符号立即数
  wire need_si26;  //指令是否需要16位的有符号立即数
  wire src2_is_4;  //第二个立即数是否是4,用于jirl、bl的实现，写PC+4->$1
  wire rj_eq_rd;  //beq、bne判断 rj寄存器值是否等于rd寄存器值

  wire [4:0] rf_raddr1;  //读寄存器A端口地址
  wire [31:0] rf_rdata1;  //寄存器A端口读出的数据
  wire [4:0] rf_raddr2;  //读寄存器B端口地址
  wire [31:0] rf_rdata2;  //寄存器B端口读出的数据
  wire rf_we;  //写寄存器信号
  wire [4:0] rf_waddr;  //写寄存器地址
  wire [31:0] rf_wdata;  //写寄存器数据

  wire [31:0] alu_src1;  //ALU操作数A
  wire [31:0] alu_src2;  //ALU操作数B
  wire [31:0] alu_result;  //alu计算结果

  wire [31:0] final_result;  //最后写寄存器的值

  wire [31:0] mul_a;
  wire [31:0] mul_b;
  wire [31:0] div_a;
  wire [31:0] div_b;
  wire mul_div_sign;
  wire mul_alu;
  wire div_mod_alu;
  wire mul_high;
  wire is_mod;
  wire complete_delay;

  assign mul_div_sign = inst_mul | inst_mulh | inst_mod | inst_div;
  assign mul_high = inst_mulh | inst_mulhu;
  assign is_mod = inst_mod | inst_modu;
  assign mul_alu = inst_mul | inst_mulh | inst_mulh | inst_mulhu;
  assign div_mod_alu = inst_mod | inst_div | inst_modu | inst_divu;

  assign seq_pc = pc + 32'h4;
  assign nextpc = br_taken ? br_target : seq_pc;

  always @(posedge clk) begin
    if (reset) begin
      pc <= 32'h1bfffffc;  //trick: to make nextpc be 0x1c000000 during reset 
    end else if (~div_mod_alu) begin
      pc <= nextpc;
    end
  end

  assign inst_sram_we    = 1'b0;
  assign inst_sram_addr  = nextpc;
  assign inst_sram_wdata = 32'b0;
  assign instF           = inst_sram_rdata;

  reg [31:0] inst;
  always @(*) begin
    if (reset) begin
      inst <= instF;
    end else if (~div_mod_alu) begin
      inst <= instF;
    end
  end
  always @(negedge clk) begin
    if (complete_delay) begin
      inst <= instF;
    end
  end


  assign op_31_26 = inst[31:26];
  assign op_25_22 = inst[25:22];
  assign op_21_20 = inst[21:20];
  assign op_19_15 = inst[19:15];

  assign rd       = inst[4:0];
  assign rj       = inst[9:5];
  assign rk       = inst[14:10];

  assign i12      = inst[21:10];
  assign i20      = inst[24:5];
  assign i16      = inst[25:10];
  assign i26      = {inst[9:0], inst[25:10]};

  decoder_6_64 u_dec0 (
      .in (op_31_26),
      .out(op_31_26_d)
  );
  decoder_4_16 u_dec1 (
      .in (op_25_22),
      .out(op_25_22_d)
  );
  decoder_2_4 u_dec2 (
      .in (op_21_20),
      .out(op_21_20_d)
  );
  decoder_5_32 u_dec3 (
      .in (op_19_15),
      .out(op_19_15_d)
  );
  //02810084
  //0000 0010 1000 0001 0000 0000 1000 0100
  //addi $4  64 $4
  assign inst_add_w = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h00];
  assign inst_sub_w = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h02];
  assign inst_slt = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h04];
  assign inst_sltu = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h05];
  assign inst_nor = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h08];
  assign inst_and = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h09];
  assign inst_or = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0a];
  assign inst_xor = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0b];
  assign inst_sll = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0e];
  assign inst_srl = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h0f];
  assign inst_sra = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h10];
  assign inst_slli_w = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h01];
  assign inst_srli_w = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h09];
  assign inst_srai_w = op_31_26_d[6'h00] & op_25_22_d[4'h1] & op_21_20_d[2'h0] & op_19_15_d[5'h11];
  assign inst_addi_w = op_31_26_d[6'h00] & op_25_22_d[4'ha];
  assign inst_andi = op_31_26_d[6'h00] & op_25_22_d[4'hd];
  assign inst_ori = op_31_26_d[6'h00] & op_25_22_d[4'he];
  assign inst_xori = op_31_26_d[6'h00] & op_25_22_d[4'hf];
  assign inst_slti = op_31_26_d[6'h00] & op_25_22_d[4'h8];
  assign inst_sltui = op_31_26_d[6'h0] & op_25_22_d[4'h9];
  assign inst_ld_w = op_31_26_d[6'h0a] & op_25_22_d[4'h2];
  assign inst_st_w = op_31_26_d[6'h0a] & op_25_22_d[4'h6];
  assign inst_jirl = op_31_26_d[6'h13];
  assign inst_b = op_31_26_d[6'h14];
  assign inst_bl = op_31_26_d[6'h15];
  assign inst_beq = op_31_26_d[6'h16];
  assign inst_bne = op_31_26_d[6'h17];
  assign inst_lu12i_w = op_31_26_d[6'h05] & ~inst[25];
  assign inst_csrwr = op_31_26_d[6'h01] & op_25_22_d[4'h0];
  assign inst_pcaddu12i = op_31_26_d[6'h07] & ~inst[25];
  assign inst_mul = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h18];
  assign inst_mulh = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h19];
  assign inst_mulhu = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h1] & op_19_15_d[5'h1a];
  assign inst_div = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h2] & op_19_15_d[5'h00];
  assign inst_mod = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h2] & op_19_15_d[5'h01];
  assign inst_divu = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h2] & op_19_15_d[5'h02];
  assign inst_modu = op_31_26_d[6'h00] & op_25_22_d[4'h0] & op_21_20_d[2'h2] & op_19_15_d[5'h03];
  assign inst_blt = op_31_26_d[6'h18];
  assign inst_bge = op_31_26_d[6'h19];
  assign inst_bltu = op_31_26_d[6'h1a];
  assign inst_bgeu = op_31_26_d[6'h1b];
  assign inst_ld_b = op_31_26_d[6'h0a] & op_25_22_d[4'h0];
  assign inst_ld_h = op_31_26_d[6'h0a] & op_25_22_d[4'h1];
  assign inst_st_b = op_31_26_d[6'h0a] & op_25_22_d[4'h4];
  assign inst_st_h = op_31_26_d[6'h0a] & op_25_22_d[4'h5];
  assign inst_ld_bu = op_31_26_d[6'h0a] & op_25_22_d[4'h8];
  assign inst_ld_hu = op_31_26_d[6'h0a] & op_25_22_d[4'h9];

  assign alu_op[0] = inst_add_w | inst_addi_w | inst_ld_w | inst_ld_b | inst_ld_h | inst_ld_bu | inst_ld_hu | inst_st_b | inst_st_h | inst_st_w | inst_jirl | inst_bl | inst_pcaddu12i;  //add
  assign alu_op[1] = inst_sub_w;  //sub
  assign alu_op[2] = inst_slt | inst_slti | inst_blt | inst_bge;  //slt
  assign alu_op[3] = inst_sltu | inst_sltui | inst_bltu | inst_bgeu;  //sltu
  assign alu_op[4] = inst_and | inst_andi;  //&
  assign alu_op[5] = inst_nor;  //~(|)
  assign alu_op[6] = inst_or | inst_ori;  //|
  assign alu_op[7] = inst_xor | inst_xori;  //^
  assign alu_op[8] = inst_slli_w | inst_sll;  //sll
  assign alu_op[9] = inst_srli_w | inst_srl;  //srl 
  assign alu_op[10] = inst_srai_w | inst_sra;  //sra 
  assign alu_op[11] = inst_lu12i_w;  //lu12i

  assign need_ui5 = inst_slli_w | inst_srli_w | inst_srai_w;
  assign need_ui12 = inst_andi | inst_ori | inst_xori;
  assign need_si12 = inst_addi_w | inst_slti | inst_sltui | inst_ld_w | inst_st_w | inst_ld_b | inst_ld_h | inst_ld_bu | inst_ld_hu | inst_st_b | inst_st_h;
  assign need_si16 = inst_jirl | inst_beq | inst_bne | inst_bge | inst_bgeu | inst_blt | inst_bltu;
  assign need_si20 = inst_lu12i_w | inst_pcaddu12i;
  assign need_si26 = inst_b | inst_bl;
  assign src2_is_4 = inst_jirl | inst_bl;

  assign imm = src2_is_4 ? 32'h4 : (need_si20 ? {i20[19:0], 12'b0} : (need_ui12 ? {20'b0 , i12} : {{20{i12[11]}}, i12}));

  assign br_offs = need_si26 ? {{4{i26[25]}}, i26[25:0], 2'b0} : {{14{i16[15]}}, i16[15:0], 2'b0};//分支地址立即数左移两位再符号扩展

  assign jirl_offs = {{14{i16[15]}}, i16[15:0], 2'b0};

  assign src_reg_is_rd = inst_beq | inst_bne | inst_bge | inst_bgeu | inst_blt | inst_bltu | inst_st_w | inst_st_b | inst_st_h;  //rj==rd->off Reg[rd]->(rj+12si)

  assign src1_is_pc = inst_jirl | inst_bl | inst_pcaddu12i;  //PC+4->rd rd=1

  assign src2_is_imm = inst_slli_w |  //5ui
      inst_srli_w |  //5ui
      inst_srai_w |  //5ui
      inst_addi_w |  //addi
      inst_andi |  //andi
      inst_ori |  //ori 
      inst_xori |  //xori
      inst_slti |  //sti
      inst_sltui |  //sltui
      inst_ld_w |  //计算访存地址
      inst_st_w |  //计算访存地址
      inst_ld_b | 
      inst_ld_h | 
      inst_ld_bu | 
      inst_ld_hu | 
      inst_st_b | 
      inst_st_h |
      inst_lu12i_w |  //20高->寄存器
      inst_pcaddu12i |  //20高+PC->寄存器
      inst_jirl |  //4
      inst_bl;  //4

  assign res_from_mem = inst_ld_w | inst_ld_b | inst_ld_bu | inst_ld_h | inst_ld_hu | inst_ld_w;
  assign dst_is_r1 = inst_bl;
  assign gr_we = ~inst_st_w & ~inst_st_b & ~inst_st_h & ~inst_beq & ~inst_bne & ~inst_bge & ~inst_bgeu & ~inst_blt & ~inst_bltu & ~inst_b;  //不写寄存器的指令与
  assign mem_we = inst_st_w | inst_st_b | inst_st_h;

  assign dest = dst_is_r1 ? 5'd1 : rd;

  assign rf_raddr1 = rj;
  assign rf_raddr2 = src_reg_is_rd ? rd : rk;
  regfile u_regfile (
      .clk   (clk),
      .raddr1(rf_raddr1),
      .rdata1(rf_rdata1),
      .raddr2(rf_raddr2),
      .rdata2(rf_rdata2),
      .we    (rf_we),
      .waddr (rf_waddr),
      .wdata (rf_wdata)
  );

  assign rj_value = rf_rdata1;
  assign rkd_value = rf_rdata2;

  assign rj_eq_rd = (rj_value === rkd_value);  //也比较不定态x和高阻态z
  assign br_taken = (   (inst_beq  &  rj_eq_rd)
                   | (inst_bne  & !rj_eq_rd)
                   | (inst_bge  & ~alu_result[0])
                   | (inst_bgeu & ~alu_result[0])
                   | (inst_blt  & alu_result[0])
                   | (inst_bltu & alu_result[0])
                   | inst_jirl
                   | inst_bl
                   | inst_b
                  ) && valid;
  assign br_target = (inst_beq | inst_bne | inst_bge | inst_bgeu | inst_blt | inst_bltu | inst_bl | inst_b) ? (pc + br_offs) :
       (rj_value + jirl_offs);

  assign alu_src1 = src1_is_pc ? pc : rj_value;
  assign alu_src2 = src2_is_imm ? imm : rkd_value;

  assign mul_a = rj_value;
  assign div_a = rj_value;
  assign mul_b = rkd_value;
  assign div_b = rkd_value;

  wire [63:0] mul_result;
  mul mul_inst (
      .mul_clk(clk),
      .reset(reset),
      .mul_signed(mul_div_sign),
      .x(mul_a),
      .y(mul_b),
      .result(mul_result)
  );

  wire [31:0] s;
  wire [31:0] r;
  div div_init (
      .div_clk(clk),
      .reset(reset),
      .div(div_mod_alu),
      .div_signed(mul_div_sign),
      .x(div_a),
      .y(div_b),
      .s(s),
      .r(r),
      .complete_delay(complete_delay)
  );

  alu u_alu (
      .alu_op    ({2'b0, alu_op}),
      .alu_src1  (alu_src1),
      .alu_src2  (alu_src2),
      .alu_result(alu_result)
  );

  assign data_sram_we   = mem_we && valid;
  assign data_sram_addr = alu_result;

  wire [31:0] mem_byteStored = data_sram_addr[1:0] == 2'b00 ? {data_sram_rdata[31:8],rkd_value[7:0]} :
                              (data_sram_addr[1:0] == 2'b01 ? {data_sram_rdata[31:16],rkd_value[7:0],data_sram_rdata[7:0]} :
                              (data_sram_addr[1:0] == 2'b10 ? {data_sram_rdata[31:24],rkd_value[7:0],data_sram_rdata[15:0]} :
                              {rkd_value[7:0],data_sram_rdata[23:0]}));
  wire [31:0] mem_halfStored = {32{data_sram_addr[1:0] == 2'b00}} & {data_sram_rdata[31:16],rkd_value[15:0]} |
                               {32{data_sram_addr[1:0] == 2'b10}} & {rkd_value[15:0],data_sram_rdata[15:0]};
  assign data_sram_wdata = inst_st_w ? rkd_value : (inst_st_h ? mem_halfStored : mem_byteStored);  //stw rd->(rj+12si)

  wire [7:0] mem_byteLoaded = ({8{data_sram_addr[1:0]==2'b00}} & data_sram_rdata[ 7: 0]) |
                            ({8{data_sram_addr[1:0]==2'b01}} & data_sram_rdata[15: 8]) |
                            ({8{data_sram_addr[1:0]==2'b10}} & data_sram_rdata[23:16]) |
                            ({8{data_sram_addr[1:0]==2'b11}} & data_sram_rdata[31:24]) ;
  wire [15:0] mem_halfLoaded = ({16{data_sram_addr[1:0]==2'b00}} & data_sram_rdata[15: 0]) |
                             ({16{data_sram_addr[1:0]==2'b10}} & data_sram_rdata[31:16]) ;

  wire [31:0] mem_writeResult = inst_ld_b ? {{24{mem_byteLoaded[7]}},mem_byteLoaded} : 
                                (inst_ld_h ? {{16{mem_halfLoaded[15]}},mem_halfLoaded} :
                                (inst_ld_bu ? {24'b0,mem_byteLoaded} : 
                                (inst_ld_hu ? {16'b0,mem_halfLoaded} : data_sram_rdata)));

  assign final_result = res_from_mem ? mem_writeResult : alu_result;

  assign rf_we = (gr_we && valid && ~div_mod_alu) | (div_mod_alu & complete_delay);
  assign rf_waddr = dest;

  wire [31:0] mul_alu_res = mul_high ? mul_result[63:32] : mul_result[31:0];
  wire [31:0] div_mod_res_F = div_mod_alu ? (is_mod ? r : s) : final_result;

  assign rf_wdata          = inst_csrwr ? csr : (mul_alu ? mul_alu_res : div_mod_res_F);

  // debug info generate
  assign debug_wb_pc       = pc;
  assign debug_wb_rf_we    = {4{rf_we}};  //默认写寄存器就是写32位
  assign debug_wb_rf_wnum  = dest;
  assign debug_wb_rf_wdata = inst_csrwr ? csr : (mul_alu ? mul_alu_res : div_mod_res_F);

endmodule
