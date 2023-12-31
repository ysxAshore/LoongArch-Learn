`timescale 1ns / 1ps

module mycpu_top (
    input  wire        clk,               //系统时钟
    input  wire        resetn,            //复位信号、板载按下复位按钮低电平
    // inst sram interface
    output wire        inst_sram_en,
    output wire [ 3:0] inst_sram_we,      //指令存储器写信号，设置无效——低电平
    output wire [31:0] inst_sram_addr,    //读指令地址
    output wire [31:0] inst_sram_wdata,   //写指令地址——设置为0
    input  wire [31:0] inst_sram_rdata,   //读指令数据
    // data sram interface
    output wire        data_sram_en,
    output wire [ 3:0] data_sram_we,      //写数据存储器信号，高电平有效
    output wire [31:0] data_sram_addr,    //读写数据存储器地址
    output wire [31:0] data_sram_wdata,   //写数据存储器数据
    input  wire [31:0] data_sram_rdata,   //读出的数据存储器数据
    // trace debug interface 用于和golden_trace对比
    output wire [31:0] debug_wb_pc,       //指令地址
    output wire [ 3:0] debug_wb_rf_we,    //写寄存器信号——0~7,8~15,16~23,24~31
    output wire [ 4:0] debug_wb_rf_wnum,  //写寄存器编号
    output wire [31:0] debug_wb_rf_wdata  //写寄存器数据
);
  wire F_stall;
  wire F_div_mod_stall;
  wire [31:0] d_pc_next;
  wire [31:0] F_pcAddr;
  wire [31:0] F_pcPlus4;

  IF_stage if_stage_init (
      .clk(clk),
      .resetn(resetn),
      .F_stall(F_stall),
      .F_div_mod_stall(F_div_mod_stall),
      .d_pc_next(d_pc_next),
      .F_pcAddr(F_pcAddr),
      .F_pcPlus4(F_pcPlus4)
  );

  wire D_stall;
  wire D_div_mod_stall;
  wire W_regW;
  wire [4:0] W_regWAdd;
  wire [31:0] F_inst;
  wire [31:0] w_regWData;
  wire [31:0] D_pcAddr;
  wire [31:0] d_aluSrc1;
  wire [31:0] d_aluSrc2;
  wire [4:0] d_regWAdd;
  wire d_regW;
  wire d_res_from_mem;
  wire [11:0] d_aluOP;
  wire d_memReadE, d_memWriteE;
  wire [3:0] d_memReadW, d_memWriteW;
  wire [31:0] d_regDataB;
  wire d_mul_alu;
  wire d_mul_div_sign;
  wire d_mul_high;
  wire d_is_mod;
  wire d_div_mod_alu;
  wire [31:0] d_csr_data;
  wire d_csr_inst;
  wire [4:0] d_regAddA, d_regAddB;
  wire d_branch;
  wire [1:0] D_forwardA;
  wire [1:0] D_forwardB;
  wire [31:0] e_aluResult;
  wire [31:0] M_aluResult;
  wire [31:0] m_memReadData;
  wire d_loadu;
  wire d_take_bOrj;
  wire E_take_bOrj;

  ID_stage u_ID_stage (
      .clk            (clk),
      .resetn         (resetn),
      .D_stall        (D_stall),
      .D_div_mod_stall(D_div_mod_stall),
      .F_inst         (F_inst),
      .F_pcAddr       (F_pcAddr),
      .F_pcPlus4      (F_pcPlus4),
      .D_forwardA     (D_forwardA),
      .D_forwardB     (D_forwardB),
      .E_take_bOrj    (E_take_bOrj),
      .e_aluResult    (e_aluResult),
      .M_aluResult    (M_aluResult),
      .m_memReadData  (m_memReadData),
      .W_regW         (W_regW),
      .W_regWAdd      (W_regWAdd),
      .w_regWData     (w_regWData),
      .D_pcAddr       (D_pcAddr),
      .d_pc_next      (d_pc_next),
      .d_aluSrc1      (d_aluSrc1),
      .d_aluSrc2      (d_aluSrc2),
      .d_regWAdd      (d_regWAdd),
      .d_regW         (d_regW),
      .d_res_from_mem (d_res_from_mem),
      .d_aluOP        (d_aluOP),
      .d_memReadE     (d_memReadE),
      .d_memWriteE    (d_memWriteE),
      .d_memReadW     (d_memReadW),
      .d_memWriteW    (d_memWriteW),
      .d_regDataB     (d_regDataB),
      .d_mul_alu      (d_mul_alu),
      .d_mul_div_sign (d_mul_div_sign),
      .d_mul_high     (d_mul_high),
      .d_is_mod       (d_is_mod),
      .d_div_mod_alu  (d_div_mod_alu),
      .d_csr_data     (d_csr_data),
      .d_csr_inst     (d_csr_inst),
      .d_regAddA      (d_regAddA),
      .d_regAddB      (d_regAddB),
      .d_branch       (d_branch),
      .d_loadu        (d_loadu),
      .d_take_bOrj    (d_take_bOrj)
  );

  wire E_fresh;
  wire E_div_mod_stall;
  wire [31:0] E_pcAddr;
  wire e_complete_delay;
  wire [4:0] E_regWAdd;
  wire E_regW;
  wire E_res_from_mem;
  wire E_memReadE;
  wire E_memWriteE;
  wire [3:0] E_memReadW, E_memWriteW;
  wire [31:0] E_memWriteData;
  wire [31:0] E_csr_data;
  wire E_csr_inst;
  wire E_div_mod_alu;
  wire E_loadu;

  EXE_stage u_EXE_stage (
      .clk             (clk),
      .resetn          (resetn),
      .E_fresh         (E_fresh),
      .E_div_mod_stall (E_div_mod_stall),
      .D_pcAddr        (D_pcAddr),
      .d_aluSrc1       (d_aluSrc1),
      .d_aluSrc2       (d_aluSrc2),
      .d_regWAdd       (d_regWAdd),
      .d_regW          (d_regW),
      .d_res_from_mem  (d_res_from_mem),
      .d_aluOP         (d_aluOP),
      .d_loadu         (d_loadu),
      .d_take_bOrj     (d_take_bOrj),
      .d_memReadE      (d_memReadE),
      .d_memWriteE     (d_memWriteE),
      .d_memReadW      (d_memReadW),
      .d_memWriteW     (d_memWriteW),
      .d_regDataB      (d_regDataB),
      .d_mul_alu       (d_mul_alu),
      .d_mul_div_sign  (d_mul_div_sign),
      .d_mul_high      (d_mul_high),
      .d_is_mod        (d_is_mod),
      .d_div_mod_alu   (d_div_mod_alu),
      .d_csr_data      (d_csr_data),
      .d_csr_inst      (d_csr_inst),
      .E_pcAddr        (E_pcAddr),
      .e_complete_delay(e_complete_delay),
      .e_aluResult     (e_aluResult),
      .E_regWAdd       (E_regWAdd),
      .E_regW          (E_regW),
      .E_res_from_mem  (E_res_from_mem),
      .E_memReadE      (E_memReadE),
      .E_memWriteE     (E_memWriteE),
      .E_memReadW      (E_memReadW),
      .E_memWriteW     (E_memWriteW),
      .E_memWriteData  (E_memWriteData),
      .E_div_mod_alu   (E_div_mod_alu),
      .E_loadu         (E_loadu),
      .E_csr_data      (E_csr_data),
      .E_csr_inst      (E_csr_inst),
      .E_take_bOrj     (E_take_bOrj)
  );

  wire M_div_mod_stall;
  wire M_memReadE, M_memWriteE;
  wire [4:0] M_regWAdd;
  wire M_regW;
  wire M_res_from_mem;
  wire [31:0] M_memAdd;
  wire [31:0] m_memWriteData;
  wire [31:0] M_pcAddr;
  wire [31:0] memReadData;
  wire [31:0] M_csr_data;
  wire M_csr_inst;

  MEM_stage u_MEM_stage (
      .clk            (clk),
      .resetn         (resetn),
      .M_div_mod_stall(M_div_mod_stall),
      .E_pcAddr       (E_pcAddr),
      .e_aluResult    (e_aluResult),
      .E_regWAdd      (E_regWAdd),
      .E_regW         (E_regW),
      .E_res_from_mem (E_res_from_mem),
      .E_memReadE     (E_memReadE),
      .E_memWriteE    (E_memWriteE),
      .E_memReadW     (E_memReadW),
      .E_memWriteW    (E_memWriteW),
      .E_memWriteData (E_memWriteData),
      .E_csr_data     (E_csr_data),
      .E_csr_inst     (E_csr_inst),
      .E_loadu        (E_loadu),
      .memReadData    (memReadData),
      .M_memReadE     (M_memReadE),
      .M_memWriteE    (M_memWriteE),
      .M_regWAdd      (M_regWAdd),
      .M_regW         (M_regW),
      .M_res_from_mem (M_res_from_mem),
      .M_memAdd       (M_memAdd),
      .M_aluResult    (M_aluResult),
      .m_memReadData  (m_memReadData),
      .m_memWriteData (m_memWriteData),
      .M_pcAddr       (M_pcAddr),
      .M_csr_data     (M_csr_data),
      .M_csr_inst     (M_csr_inst)
  );

  wire W_div_mod_stall;
  wire [31:0] W_pcAddr;
  WB_stage u_WB_stage (
      .clk            (clk),
      .resetn         (resetn),
      .W_div_mod_stall(W_div_mod_stall),
      .M_aluResult    (M_aluResult),
      .M_regW         (M_regW),
      .M_res_from_mem (M_res_from_mem),
      .M_regWAdd      (M_regWAdd),
      .M_memReadData  (m_memReadData),
      .M_csr_data     (M_csr_data),
      .M_csr_inst     (M_csr_inst),
      .M_pcAddr       (M_pcAddr),
      .W_regW         (W_regW),
      .W_regWAdd      (W_regWAdd),
      .w_regWData     (w_regWData),
      .W_pcAddr       (W_pcAddr)
  );

  hazard u_hazard (
      .d_regAddA       (d_regAddA),
      .d_regAddB       (d_regAddB),
      .E_div_mod_alu   (E_div_mod_alu),
      .e_complete_delay(e_complete_delay),
      .E_res_from_mem  (E_res_from_mem),
      .M_res_from_mem  (M_res_from_mem),
      .d_branch        (d_branch),
      .E_regW          (E_regW),
      .M_regW          (M_regW),
      .W_regW          (W_regW),
      .E_regWAdd       (E_regWAdd),
      .M_regWAdd       (M_regWAdd),
      .W_regWAdd       (W_regWAdd),
      .F_stall         (F_stall),
      .D_stall         (D_stall),
      .E_fresh         (E_fresh),
      .D_div_mod_stall (D_div_mod_stall),
      .F_div_mod_stall (F_div_mod_stall),
      .E_div_mod_stall (E_div_mod_stall),
      .M_div_mod_stall (M_div_mod_stall),
      .W_div_mod_stall (W_div_mod_stall),
      .D_forwardA      (D_forwardA),
      .D_forwardB      (D_forwardB)
  );

  assign inst_sram_en = 1'b1;
  assign inst_sram_we = 4'b0;
  assign inst_sram_addr = F_pcAddr;
  assign inst_sram_wdata = 32'b0;
  assign F_inst = inst_sram_rdata;
  assign data_sram_en = M_memReadE | M_memWriteE;
  assign data_sram_we = {4{M_memWriteE}};
  assign data_sram_addr = M_memAdd;
  assign data_sram_wdata = m_memWriteData;
  assign memReadData = data_sram_rdata;
  assign debug_wb_pc = W_pcAddr;
  assign debug_wb_rf_we = {4{W_regW}};
  assign debug_wb_rf_wnum = W_regWAdd;
  assign debug_wb_rf_wdata = w_regWData;
endmodule
