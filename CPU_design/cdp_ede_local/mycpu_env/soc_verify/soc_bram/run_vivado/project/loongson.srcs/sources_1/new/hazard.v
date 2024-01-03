`timescale 1ns / 1ps

module hazard (
    input [4:0] d_regAddA,
    input [4:0] d_regAddB,

    input E_div_mod_alu,
    input e_complete_delay,
    input E_res_from_mem,
    input M_res_from_mem,
    input d_branch,
    input E_regW,
    input M_regW,
    input W_regW,
    input [4:0] E_regWAdd,
    input [4:0] M_regWAdd,
    input [4:0] W_regWAdd,

    output F_stall,
    D_stall,
    E_fresh,
    F_div_mod_stall,
    D_div_mod_stall,
    E_div_mod_stall,
    M_div_mod_stall,
    W_div_mod_stall,

    output [1:0] D_forwardA,
    D_forwardB
);
  wire lwStall, branchStall;
  assign D_forwardA = (E_regWAdd == d_regAddA) & E_regW ? 2'b11 : 
                      ((M_regWAdd == d_regAddA) & M_res_from_mem ? 2'b10 :
                      (M_regWAdd == d_regAddA) & M_regW ? 2'b01 : 2'b00);

  assign D_forwardB = (E_regWAdd == d_regAddB) & E_regW ? 2'b11 : 
                      ((M_regWAdd == d_regAddB) & M_res_from_mem ? 2'b10 :
                      (M_regWAdd == d_regAddB) & M_regW ? 2'b01 : 2'b00);
  //稍微的处理延迟——便于观察
  //load id和exe
  //branch 判断寄存器分支——rj和rk
  assign #1 lwStall = (d_regAddA == E_regWAdd | d_regAddB == E_regWAdd) & E_res_from_mem;
  //在clk下降沿写寄存器，上升沿读——先写后读，所以是1->0->1
  assign #1 branchStall = d_branch & 
                        (E_regW & (d_regAddA == E_regWAdd | d_regAddB == E_regWAdd)|
                        M_res_from_mem & (d_regAddA == M_regWAdd | d_regAddB == M_regWAdd));
  assign #1 D_stall = lwStall | branchStall;
  assign #1 F_stall = D_stall;
  assign #1 E_fresh = D_stall;
  assign #1 D_div_mod_stall = E_div_mod_alu & ~e_complete_delay;
  assign #1 F_div_mod_stall = D_div_mod_stall;
  assign #1 E_div_mod_stall = D_div_mod_stall;
  assign #1 M_div_mod_stall = D_div_mod_stall;
  assign #1 W_div_mod_stall = D_div_mod_stall;
endmodule
