`include "mycpu.h"

module exe_stage(
    input  wire                         clk           ,
    input  wire                         reset         ,
    //allowin
    input  wire                         ms_allowin    ,
    output wire                         es_allowin    ,
    //from ds
    input  wire                         ds_to_es_valid,
    input  wire [`DS_TO_ES_BUS_WD -1:0] ds_to_es_bus  ,
    //to ms
    output wire                         es_to_ms_valid,
    output wire [`ES_TO_MS_BUS_WD -1:0] es_to_ms_bus  ,
    //to ds
    output wire [`ES_TO_DS_FORWARD_BUS - 1:0] es_to_ds_forward_bus,
    //div_mul
    output wire        es_div_enable   ,
    output wire        es_mul_div_sign ,
    output wire [31:0] es_rj_value     ,
    output wire [31:0] es_rkd_value    ,
    input  wire        div_complete    ,
    // data sram interface
    output wire        data_sram_en   ,
    output wire [ 3:0] data_sram_we   ,
    output wire [31:0] data_sram_addr ,
    output wire [31:0] data_sram_wdata
);

reg         es_valid      ;
wire        es_ready_go   ;

reg  [`DS_TO_ES_BUS_WD -1:0] ds_to_es_bus_r;
wire [13:0] es_alu_op      ;
wire [ 3:0] es_mul_div_op  ;
wire        es_res_from_mem;
wire        es_src1_is_pc  ;
wire        es_src2_is_imm ;
wire        es_gr_we       ;
wire        es_mem_we      ;
wire [ 4:0] es_dest        ;
wire [31:0] es_imm         ;
wire [31:0] es_rj_value    ;
wire [31:0] es_rkd_value   ;
wire [31:0] es_pc          ;

assign {es_alu_op      ,  //156:143
        es_mul_div_op  ,  //142:139
        es_mul_div_sign,  //138:138
        es_res_from_mem,  //137:137
        es_src1_is_pc  ,  //136:136
        es_src2_is_imm ,  //135:135
        es_gr_we       ,  //134:134
        es_mem_we      ,  //133:133
        es_dest        ,  //132:128
        es_imm         ,  //127:96
        es_rj_value    ,  //95 :64
        es_rkd_value   ,  //63 :32
        es_pc             //31 :0
       } = ds_to_es_bus_r;

wire [31:0] es_alu_src1   ;
wire [31:0] es_alu_src2   ;
wire [31:0] es_alu_result ;

assign es_to_ms_bus = {es_mul_div_op  ,  //74:71
                       es_res_from_mem,  //70:70
                       es_gr_we       ,  //69:69
                       es_dest        ,  //68:64
                       es_alu_result  ,  //63:32
                       es_pc             //31:0
                      };

assign es_ready_go    = !div_stall;
assign es_allowin     = !es_valid || es_ready_go && ms_allowin;
assign es_to_ms_valid =  es_valid && es_ready_go;
always @(posedge clk) begin
    if (reset) begin     
        es_valid <= 1'b0;
    end
    else if (es_allowin) begin 
        es_valid <= ds_to_es_valid;
    end

    if (ds_to_es_valid && es_allowin) begin
        ds_to_es_bus_r <= ds_to_es_bus;
    end
end

// alu mul div
assign es_alu_src1 = es_src1_is_pc  ? es_pc[31:0] : 
                                      es_rj_value;
                                      
assign es_alu_src2 = es_src2_is_imm ? es_imm : 
                                      es_rkd_value;

alu u_alu(
    .alu_op     (es_alu_op    ),
    .alu_src1   (es_alu_src1  ),
    .alu_src2   (es_alu_src2  ),
    .alu_result (es_alu_result)
);

assign es_div_enable = (es_mul_div_op[2] | es_mul_div_op[3]) & es_valid;
assign es_mul_enable = (es_mul_div_op[0] | es_mul_div_op[1]) & es_valid;

assign div_stall     = es_div_enable & ~div_complete;

wire dep_need_stall = es_valid && (es_res_from_mem | es_div_enable | es_mul_enable);
assign es_to_ds_forward_bus = {dep_need_stall, es_valid && es_gr_we, es_dest, es_alu_result};

assign data_sram_en    = (es_res_from_mem || es_mem_we) && es_valid;
assign data_sram_we    = es_mem_we ? 4'hf : 4'h0;
assign data_sram_addr  = es_alu_result;
assign data_sram_wdata = es_rkd_value;

endmodule
