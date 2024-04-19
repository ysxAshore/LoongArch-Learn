`timescale 1ns / 1ps
`include "mycpu.h"

//X->(X+1)的X_to_Y_valid、data、readygo
//(X+1)->X的allowin
module if_stage (
    input wire clk,
    input wire resetn,

    //与下一级传递通讯的流水线控制信号 
    input wire id_allowin,
    output wire if_to_id_valid,
    output wire [`IF_TO_ID_WD-1:0] if_to_id_bus,

    //id组合逻辑传递给if组合逻辑的一些用于生成nextpc的信号
    input wire [`ID_TO_IF_WD-1:0] id_to_if_bus,

    //CSR传递给preIF的信号
    input wire [`CSR_TO_IF_WD-1:0] csr_to_if_bus,

    //MEM传递给IF的信号
    input wire [`MEM_TO_IF_WD-1:0] mem_to_if_bus,

    //TLB传递给IF的信号
    input wire [`TLB_TO_IF_WD-1:0] tlb_to_if_bus,

    //IF传递给TLB的信号
    output wire [`IF_TO_TLB_WD-1:0] if_to_tlb_bus,

    //has_int
    input wire has_int,

    //对接ICACHE接口
    output        inst_sram_req,
    output        inst_sram_wr,
    output [ 3:0] inst_sram_wstrb,
    output [ 1:0] inst_sram_size,
    output [31:0] inst_sram_addr,
    output [31:0] inst_sram_wdata,
    input  [31:0] inst_sram_rdata,
    input         inst_sram_addr_ok,
    input         inst_sram_data_ok,

    output inst_mat
);
  reg if_valid;  //表示if_reg内容是否有效
  wire if_ready_go;  //表示if组合逻辑内容是否处理完成，可以向id_reg传递

  wire if_allowin;  //控制preIF组合逻辑数据是否可以传递进if_reg
  wire preIF_to_IF_valid;
  wire preIF_ready_go;

  wire [31:0] seq_pc;  //序列下一个PC
  wire [31:0] nextpc;  //最终更新到PC寄存器的指令地址

  //拆解id组合逻辑传递给if组合逻辑的数据
  wire br_stall;
  wire br_taken;
  wire [31:0] br_target;
  assign {br_stall, br_taken, br_target} = id_to_if_bus_r_valid ? id_to_if_bus_r : id_to_if_bus;

  //拆解MEM传递过来的数据
  wire excp;
  wire ertn;
  wire tlb_excp;
  wire refetch;
  wire idle;
  wire [31:0] refetch_pc;
  assign {refetch_pc,idle,tlb_excp,refetch,excp, ertn} = mem_to_if_bus_r_valid ? mem_to_if_bus_r : mem_to_if_bus;

  //拆解CSR传递过来的数据
  wire [31:0] era;
  wire [31:0] eentry_out;
  wire [31:0] tlbenrty_out;
  wire [9:0] asid_out;
  wire crmd_da_temp;
  wire crmd_pg_temp;
  wire [2:0] dmw0_vseg, dmw1_vseg, dmw0_pseg, dmw1_pseg;
  wire dmw0_plv0, dmw0_plv3, dmw1_plv0, dmw1_plv3;
  wire dmw0_mat,dmw1_mat;
  wire [1:0] cur_plv;
  wire crmd_dataF;
  assign {eentry_out, era, tlbenrty_out, asid_out, crmd_da_temp, crmd_pg_temp, dmw0_vseg, dmw1_vseg, dmw0_pseg, dmw1_pseg, dmw0_plv0, dmw1_plv0, dmw0_plv3, dmw1_plv3, cur_plv, dmw0_mat, dmw1_mat, crmd_dataF} = csr_to_if_bus;
 
  //当触发重填异常时直接进入地址翻译模式
  wire crmd_da;
  wire crmd_pg;

  assign crmd_da = tlb_excp ? 1'b1 : crmd_da_temp;
  assign crmd_pg = tlb_excp ? 1'b0 : crmd_pg_temp;

  //拆解TLB传递过来的数据
  wire s0_found;
  wire [19:0] s0_ppn;
  wire [5:0] s0_ps;
  wire [1:0] s0_plv;
  wire [1:0] s0_mat;
  wire s0_d;
  wire s0_v;
  wire [$clog2(`TLB_NUM)-1:0] s0_findex;
  assign {s0_found, s0_ppn, s0_ps, s0_plv, s0_mat, s0_d, s0_v, s0_findex} = tlb_to_if_bus;

  //组合传递给id_reg的数据
  wire [31:0] if_inst;
  reg [31:0] if_pc;
  reg if_ADEF_EXCP;
  reg if_tlbr;
  reg if_ppi;
  reg if_pif;

  assign if_to_id_bus = {if_pc, if_inst, if_ADEF_EXCP, if_tlbr, if_pif, if_ppi};

  //刷新信号 这里用if_reflush_r让if_allowin有效 因为会存在需要将异常的nextPC更新到PC时，if_allowin无效的问题——dataok还未到达，这个data_ok用excpreg清除
  //但是为什么要用r  preIF_readygo addrok还没到——直接取消不可以吗？——归成一种处理方式？不需要处理preIF_readygo是什么值了
  wire if_reflush;
  assign if_reflush = mem_to_if_bus[4] | mem_to_if_bus[3] | mem_to_if_bus[2] | mem_to_if_bus[1] | mem_to_if_bus[0];
  wire if_reflush_r;
  assign if_reflush_r = excp | ertn | refetch | tlb_excp | idle;

  //异常检测声明
  wire ADEF_EXCP;
  wire TLBR;
  wire PPI;
  wire PIF;

  // preIF
  assign preIF_ready_go = inst_sram_req & inst_sram_addr_ok | ADEF_EXCP | TLBR | PIF | PPI;
  assign preIF_to_IF_valid = resetn & preIF_ready_go;
  assign seq_pc = if_pc + 32'h4;
  assign nextpc = tlb_excp ? tlbenrty_out : excp ? eentry_out : ertn ? era : (refetch | idle) ? refetch_pc : br_taken & (if_valid | bd_done) ? br_target : seq_pc;
  
  // if_reg
  assign if_ready_go    = (inst_sram_data_ok | inst_sram_rdata_r_valid) & ~excp_reg | if_ADEF_EXCP | if_tlbr | if_pif | if_ppi;
  assign if_allowin = ~if_valid | if_ready_go & id_allowin | if_reflush_r;
  assign if_to_id_valid = if_valid & if_ready_go;
  always @(posedge clk) begin
    if (~resetn) begin
      if_valid <= 1'b0;
      if_pc <= 32'h1bff_fffc;
    end else if (if_allowin) begin
      if_valid <= preIF_to_IF_valid;
    end
    if (if_allowin & preIF_to_IF_valid) begin //原来在if_valid & (~id_allowin | ~if_ready_go)时利用brcancel取消指令的方法，都用到id阶段处理了，因为现在都能流经到id阶段
      if_pc <= nextpc;
      if_ADEF_EXCP <= ADEF_EXCP;
      if_tlbr <= TLBR;
      if_pif <= PIF;
      if_ppi <= PPI;
    end
  end

  //if->id的指令缓存
  reg [31:0] inst_sram_rdata_r;
  reg inst_sram_rdata_r_valid;

  always @(posedge clk) begin
    if (~resetn | if_reflush) begin
      inst_sram_rdata_r_valid <= 1'b0;
    end else if (if_valid & inst_sram_data_ok & ~id_allowin) begin
      inst_sram_rdata_r <= inst_sram_rdata;
      inst_sram_rdata_r_valid <= 1'b1;
    end else if (id_allowin) begin
      inst_sram_rdata_r_valid <= 1'b0;
    end
  end

  //br信息也需要保持到缓存，以在preIF_ready_go无效时保持进入到IF，同样MEM到ID的更新nextpc的信息也需要保持 
  //增加了refetch，那么为了保留reftech时readygo无效不能更新PC的情况，需要保持缓存
  reg [`MEM_TO_IF_WD-1:0] mem_to_if_bus_r;
  reg mem_to_if_bus_r_valid;
  always @(posedge clk) begin
    if (~resetn) begin
      mem_to_if_bus_r_valid <= 1'b0;
    end else if (~mem_to_if_bus_r_valid & (mem_to_if_bus[4]| mem_to_if_bus[3] | mem_to_if_bus[2] | mem_to_if_bus[1] | mem_to_if_bus[0]) & ~preIF_ready_go) begin
      mem_to_if_bus_r <= mem_to_if_bus;  //这也应该加一个if_allowin吧？不用，异常针对if_readygo不为1有处理
      mem_to_if_bus_r_valid <= 1'b1;
    end else if (mem_to_if_bus_r_valid & preIF_ready_go) begin
      mem_to_if_bus_r_valid <= 1'b0;
    end
  end

  reg [`ID_TO_IF_WD-1:0] id_to_if_bus_r;
  reg                    id_to_if_bus_r_valid;
  reg                    bd_done;
  always @(posedge clk) begin
    if (~resetn | if_reflush) begin
      id_to_if_bus_r_valid <= 1'b0;
    end else if (id_to_if_bus[32] & id_allowin & ~(preIF_ready_go & if_valid & if_allowin)) begin //而转移的取消必须都进入到id阶段，因此这里是也需要if_valid和if_allowin
      id_to_if_bus_r <= id_to_if_bus;
      id_to_if_bus_r_valid <= 1'b1;
    end else if (bd_done & preIF_ready_go & if_allowin) begin
      id_to_if_bus_r_valid <= 1'b0;
    end
  end

  always @(posedge clk) begin
    if (~resetn | if_reflush) begin
      bd_done <= 1'b0;
    end else if (br_taken & ~bd_done & (if_valid ^ (preIF_ready_go & if_allowin))) begin
      bd_done <= 1'b1;
    end else if (bd_done & preIF_ready_go & if_allowin) begin
      bd_done <= 1'b0;
    end
  end

  //异常清空时的特殊处理
  reg excp_reg;
  always @(posedge clk) begin
    if (~resetn) begin
      excp_reg <= 1'b0;
    end else if (if_valid & if_reflush & ~if_ready_go) begin
      excp_reg <= 1'b1;
    end else if (inst_sram_data_ok) begin
      excp_reg <= 1'b0;
    end
  end

  //idle lock
  reg          idle_lock;
  always @(posedge clk) begin
      if (~resetn) begin
          idle_lock <= 1'b0;
      end
      else if (idle & ~has_int) begin
          idle_lock <= 1'b1;
      end
      else if (has_int) begin
          idle_lock <= 1'b0;
      end
  end

  //TLB转换
  wire [18:0] s0_vppn = nextpc[31:13];
  wire s0_va_12bit = nextpc[12];
  assign if_to_tlb_bus = {s0_vppn, asid_out, s0_va_12bit};

  //直接映射地址模式
  wire [31:0] dmw_pc;
  wire [ 1:0] dmw_select;  //2'b01表示命中DMW0 2'b10表示命中DMW1 

  assign dmw_select[0] = dmw0_vseg == nextpc[31:29] & (dmw0_plv3 == 1'b1 & cur_plv == 2'b11 | dmw0_plv0 == 1'b1 & cur_plv == 2'b0);//只有对应等级的plv才能使用对应的窗口
  assign dmw_select[1] = dmw1_vseg == nextpc[31:29] & (dmw1_plv3 == 1'b1 & cur_plv == 2'b11 | dmw1_plv0 == 1'b1 & cur_plv == 2'b0);

  assign dmw_pc = {32{dmw_select[0]}} & {dmw0_pseg, nextpc[28:0]} | {32{dmw_select[1]}} & {dmw1_pseg,nextpc[28:0]};

  //TLB映射地址模式
  wire [31:0] tlb_pc;
  assign tlb_pc = s0_ps == 6'h21 ? {s0_ppn[19:9], nextpc[20:0]} : {s0_ppn[19:0], nextpc[11:0]};

  //异常赋值 
  assign ADEF_EXCP = nextpc[1:0] != 2'b0;
  assign TLBR = crmd_da == 1'b0 & crmd_pg == 1'b1 & dmw_select == 2'b0 & ~s0_found;//只能采用TLB，但TLB没找到
  assign PIF = crmd_da == 1'b0 & crmd_pg == 1'b1 & dmw_select == 2'b0 & s0_found & ~s0_v;
  assign PPI = crmd_da == 1'b0 & crmd_pg == 1'b1 & dmw_select == 2'b0 & s0_found & s0_v & cur_plv > s0_plv;

  //赋值instRAM接口
  assign inst_sram_req   = if_allowin & ~ADEF_EXCP & ~TLBR & ~PIF & ~PPI & ~br_stall & ~idle_lock;  //因为preIF_to_IF_valid的更改是由preIF_readygo设置的，因此不能作为req生成的信号
  assign inst_sram_wr = 1'b0;
  assign inst_sram_wstrb = 4'h0;
  assign inst_sram_size = 2'b10;
  assign inst_sram_addr = crmd_da == 1'b1 & crmd_pg == 1'b0 ? nextpc :
                          dmw_select != 2'b0 ? dmw_pc :
                          tlb_pc;
  assign inst_sram_wdata = 32'b0;

  assign if_inst = inst_sram_data_ok ? inst_sram_rdata : inst_sram_rdata_r;

  assign inst_mat = crmd_da == 1'b1 & crmd_pg == 1'b0 ? crmd_dataF :
                               dmw_select != 2'b0 ? (dmw_select[0] ? dmw0_mat : dmw1_mat) :
                               s0_mat[0];
endmodule
