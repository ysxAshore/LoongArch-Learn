`timescale 1ns / 1ps

module hazard (
    input [ 4:0] d_regAddA,
    input [ 4:0] d_regAddB,
    input [13:0] d_csrWAdd,

    input f_ADEF_excp,
    input d_inst_rdcntid,
    input e_ALE_excp,

    input  d_excp_or_ertn,
    // input  d_excp_tlbrefill,
    input  W_excp_or_ertn,
    // input  W_excp_tlbrefill,
    output F_excp_stall,
    output D_excp_stall,

    input E_div_mod_alu,
    input e_complete_delay,
    input E_res_from_mem,
    input M_res_from_mem,
    input d_branch,
    input E_regW,
    E_csr_en,
    input M_regW,
    M_csr_en,
    input W_regW,
    W_csr_en,
    input [4:0] E_regWAdd,
    input [13:0] E_csrWAdd,
    input [4:0] M_regWAdd,
    input [13:0] M_csrWAdd,
    input [4:0] W_regWAdd,
    input [13:0] W_csrWAdd,

    output F_stall,
    D_stall,
    E_fresh,
    F_div_mod_stall,
    D_div_mod_stall,
    E_div_mod_stall,
    M_div_mod_stall,
    W_div_mod_stall,
    M_expc_fresh,
    W_expc_fresh,

    output [1:0] D_forwardA,
    D_forwardB,
    D_forwardCSR,
    D_forwardTID
);
  wire lwStall, branchStall;
  assign D_forwardA = (E_regWAdd == d_regAddA) & d_regAddA != 5'b0 & E_regW ? 2'b11 : 
                      ((M_regWAdd == d_regAddA) & d_regAddA != 5'b0 & M_res_from_mem ? 2'b10 :
                      (M_regWAdd == d_regAddA) & d_regAddA != 5'b0 & M_regW ? 2'b01 : 2'b00);

  assign D_forwardB = (E_regWAdd == d_regAddB) & d_regAddB != 5'b0 & E_regW ? 2'b11 : 
                      ((M_regWAdd == d_regAddB) & d_regAddB != 5'b0 & M_res_from_mem ? 2'b10 :
                      (M_regWAdd == d_regAddB) & d_regAddB != 5'b0 & M_regW ? 2'b01 : 2'b00);
  assign D_forwardCSR = (E_csrWAdd == d_csrWAdd) & E_csr_en ? 2'b11 : 
                      ((M_csrWAdd == d_csrWAdd) & M_csr_en ? 2'b10 :
                      (W_csrWAdd == d_csrWAdd) & W_csr_en ? 2'b01 : 2'b00);
  assign D_forwardTID = d_inst_rdcntid & (E_csrWAdd == 14'h40) & E_csr_en ? 2'b11:
                        (d_inst_rdcntid & (M_csrWAdd == 14'h40) & M_csr_en ? 2'b10 :
                        (d_inst_rdcntid & (W_csrWAdd == 14'h40) & W_csr_en  ? 2'b01 :
                        2'b00));
  //稍微的处理延迟——便于观察
  //load id和exe
  //branch 判断寄存器分支——rj和rk
  assign #1 lwStall = (d_regAddA == E_regWAdd | d_regAddB == E_regWAdd) & E_res_from_mem;
  //在clk下降沿写寄存器，上升沿读——先写后读，所以是1->0->1 d取操作数但是
  // assign #1 branchStall = d_branch & 
  //                       (E_regW & (d_regAddA == E_regWAdd | d_regAddB == E_regWAdd)|
  //                       M_res_from_mem & (d_regAddA == M_regWAdd | d_regAddB == M_regWAdd));
  assign #1 D_stall = lwStall;
  assign #1 F_stall = D_stall;
  assign #1 E_fresh = D_stall | W_excp_or_ertn;
  assign #1 D_div_mod_stall = E_div_mod_alu & ~e_complete_delay;
  assign #1 F_div_mod_stall = D_div_mod_stall;
  assign #1 E_div_mod_stall = D_div_mod_stall | e_ALE_excp;
  assign #1 M_div_mod_stall = D_div_mod_stall;
  assign #1 W_div_mod_stall = D_div_mod_stall;
  assign #1 D_excp_stall = ~W_excp_or_ertn & (d_excp_or_ertn | e_ALE_excp);
  assign #1 F_excp_stall = D_excp_stall | (f_ADEF_excp & ~W_excp_or_ertn);
  assign #1 W_expc_fresh = W_excp_or_ertn;
  assign #1 M_expc_fresh = W_expc_fresh;
endmodule
