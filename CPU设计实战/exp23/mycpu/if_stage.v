`include "mycpu.h"

module if_stage(
    input  wire                         clk            ,
    input  wire                         reset          ,
    //allwoin
    input  wire                         ds_allowin     ,
    //brbus
    input  wire [`BR_BUS_WD       -1:0] br_bus         ,
    //to ds
    output wire                         fs_to_ds_valid ,
    output wire [`FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus   ,
    //excp
    input  wire                         excp_flush       ,
    input  wire                         ertn_flush       ,
    input  wire                         refetch_flush    ,
    input  wire                         excp_tlbrefill   ,
    input  wire [31:0]                  ws_pc            ,
    input  wire [31:0]                  csr_eentry       ,
    input  wire [31:0]                  csr_era          ,
    input  wire [31:0]                  csr_tlbrentry    ,
    //from csr
    input  wire                         csr_pg            ,
    input  wire                         csr_da            ,
    input  wire [31:0]                  csr_dmw0          ,
    input  wire [31:0]                  csr_dmw1          ,
    input  wire [ 1:0]                  csr_plv           ,
    input  wire [ 1:0]                  csr_datf          ,
    //to addr trans
    output wire [31:0]                  inst_vaddr        ,
    output wire                         inst_addr_trans_en,
    output wire                         dmw0_en           ,
    output wire                         dmw1_en           ,
    //tlb
    input  wire [31:0]                  inst_paddr        ,
    input  wire                         inst_tlb_found    ,
    input  wire                         inst_tlb_v        ,
    input  wire                         inst_tlb_d        ,
    input  wire [ 1:0]                  inst_tlb_mat      ,
    input  wire [ 1:0]                  inst_tlb_plv      ,
    //cacop
    input  wire                         icacop_op_en        ,
    input  wire [ 7:0]                  cacop_op_addr_index ,
    input  wire [19:0]                  cacop_op_addr_tag   ,
    input  wire [ 3:0]                  cacop_op_addr_offset,
    // inst sram interface
    output wire        inst_req    ,
    output wire        inst_wr     ,
    output wire [ 2:0] inst_size   ,
    output wire [ 7:0] inst_index  ,
    output wire [19:0] inst_tag    ,
    output wire [ 3:0] inst_offset ,
    output wire [ 3:0] inst_wstrb  ,
    output wire [31:0] inst_wdata  ,
    input  wire        inst_addr_ok,
    input  wire        inst_data_ok,
    input  wire [31:0] inst_rdata  ,
    output wire        inst_uncache
);

reg         fs_valid;
wire        fs_ready_go;
wire        fs_allowin;
wire        to_fs_valid;
wire        pfs_readg_go;
wire        pfs_excp;
wire [ 3:0] pfs_excp_num;

wire flush_sign = excp_flush || ertn_flush || refetch_flush;

wire         br_stall;
wire         br_taken;
wire [ 31:0] br_target;
assign {br_stall, br_taken, br_target} = br_bus;

wire [31:0] fs_inst;
reg         fs_inst_valid;
reg  [31:0] fs_inst_r;
reg  [31:0] fs_pc;
reg         fs_excp;
reg  [ 3:0] fs_excp_num;
assign fs_to_ds_bus = {fs_excp    ,
                       fs_excp_num,
                       fs_inst    ,
                       fs_pc      };

// pre-IF stage
reg                  flush_valid;
reg [31:0] flush_target;

always @(posedge clk) begin
    if (reset) begin
        flush_valid <= 1'b0;
    end
    else if (inst_req && inst_addr_ok) begin
        flush_valid <= 1'b0;
    end
    else if (!(inst_req && inst_addr_ok)) begin
        if (excp_flush && !excp_tlbrefill) begin
            flush_valid <= 1'b1;
            flush_target  <= csr_eentry;
        end
        else if (excp_flush && excp_tlbrefill) begin
            flush_valid <= 1'b1;
            flush_target  <= csr_tlbrentry;
        end
        else if (ertn_flush) begin
            flush_valid <= 1'b1;
            flush_target  <= csr_era;
        end
        else if (refetch_flush) begin
            flush_valid <= 1'b1;
            flush_target  <= ws_pc + 3'h4;
        end
        else if (br_taken && !br_stall) begin
            flush_valid <= 1'b1;
            flush_target  <= br_target;
        end
    end 
end

//addr trans
assign inst_addr_trans_en = csr_pg && !csr_da && !dmw0_en && !dmw1_en;
assign dmw0_en = csr_pg && !csr_da && ((csr_dmw0[`PLV0] && csr_plv == 2'd0) || (csr_dmw0[`PLV3] && csr_plv == 2'd3)) && (nextpc[31:29] == csr_dmw0[`VSEG]);
assign dmw1_en = csr_pg && !csr_da && ((csr_dmw1[`PLV0] && csr_plv == 2'd0) || (csr_dmw1[`PLV3] && csr_plv == 2'd3)) && (nextpc[31:29] == csr_dmw1[`VSEG]);
assign inst_vaddr = nextpc;

wire [31:0] seq_pc;
wire [31:0] nextpc;
assign to_fs_valid  = ~reset && pfs_readg_go;
assign pfs_readg_go = inst_req && inst_addr_ok || pfs_excp;
assign seq_pc       = fs_pc + 3'h4;
assign nextpc       = excp_flush &  excp_tlbrefill ? csr_tlbrentry :
                      excp_flush & !excp_tlbrefill ? csr_eentry    :
                      ertn_flush                   ? csr_era    :
                      refetch_flush                ? ws_pc + 3'h4 :
                      flush_valid                  ? flush_target :
                      br_taken && !br_stall        ? br_target  : 
                                                     seq_pc; 

reg wait_data_ok;

assign inst_req    = fs_allowin && !wait_data_ok && !br_stall && !pfs_excp && !icacop_op_en;
assign inst_wr     = 1'h0;
assign inst_size   = 3'h2;
assign {inst_tag, inst_index, inst_offset} = icacop_op_en ? {cacop_op_addr_tag, cacop_op_addr_index, cacop_op_addr_offset} : inst_paddr;
assign inst_wstrb  = 4'b0;
assign inst_wdata  = 32'b0;
assign inst_uncache= (!csr_pg && csr_da && csr_datf == 2'b0)         ||
                     (dmw0_en && (csr_dmw0[`DMW_MAT] == 2'b0))       ||
                     (dmw1_en && (csr_dmw1[`DMW_MAT] == 2'b0))       ||
                     (inst_addr_trans_en && (inst_tlb_mat == 2'b0));

wire pfs_excp_adef = (nextpc[0] || nextpc[1]);
wire pfs_excp_tlbr = !inst_tlb_found && inst_addr_trans_en;
wire pfs_excp_pif  = !inst_tlb_v && inst_addr_trans_en;
wire pfs_excp_ppi  = (csr_plv > inst_tlb_plv) && inst_addr_trans_en;

assign pfs_excp = pfs_excp_ppi || pfs_excp_pif || pfs_excp_tlbr || pfs_excp_adef;
assign pfs_excp_num = {pfs_excp_ppi, pfs_excp_pif, pfs_excp_tlbr, pfs_excp_adef};

always @(posedge clk) begin
    if (reset) begin
        wait_data_ok <= 1'b0;
    end
    else if (fs_valid && !fs_ready_go && (flush_sign || br_taken && !br_stall)) begin
        wait_data_ok <= 1'b1;
    end
    else if (inst_data_ok && wait_data_ok) begin
        wait_data_ok <= 1'b0;
    end
end

// IF stage
assign fs_ready_go    = !wait_data_ok && inst_data_ok || fs_inst_valid || fs_excp;
assign fs_allowin     = !fs_valid || fs_ready_go && ds_allowin || flush_sign;
assign fs_to_ds_valid =  fs_valid && fs_ready_go;
always @(posedge clk) begin
    if (reset) begin
        fs_valid <= 1'b0;
    end
    else if (fs_allowin) begin
        fs_valid <= to_fs_valid;
    end
    else if (flush_sign || br_taken && !br_stall) begin
        fs_valid <= 1'b0;
    end

    if (reset) begin
        fs_pc <= 32'h1bfffffc;  //trick: to make nextpc be 0x1c000000 during reset 
        fs_excp      <= 1'b0;
        fs_excp_num  <= 4'b0;
    end
    else if (to_fs_valid && fs_allowin) begin
        fs_pc <= nextpc;
        fs_excp      <= pfs_excp;
        fs_excp_num  <= pfs_excp_num;
    end

    if (reset) begin
        fs_inst_valid <= 1'b0;
    end
    else if (flush_sign || br_taken && !br_stall) begin
        fs_inst_valid <= 1'b0;
    end
    else if (ds_allowin) begin
        fs_inst_valid <= 1'b0;
    end
    else if (inst_data_ok && !ds_allowin) begin
        fs_inst_valid <= 1'b1;
        fs_inst_r <= inst_rdata;
    end
end

assign fs_inst = fs_inst_valid ? fs_inst_r : inst_rdata;

endmodule
