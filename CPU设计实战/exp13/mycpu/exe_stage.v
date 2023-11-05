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
    //excp 
    input  wire        excp_flush    ,
    input  wire        ertn_flush    ,
    input  wire        refetch_flush ,
    input  wire        ms_excp       ,
    // data sram interface
    output wire        data_sram_en   ,
    output wire [ 3:0] data_sram_we   ,
    output wire [31:0] data_sram_addr ,
    output wire [31:0] data_sram_wdata
);

reg         es_valid      ;
wire        es_ready_go   ;

wire flush_sign = excp_flush || ertn_flush || refetch_flush;

reg  [`DS_TO_ES_BUS_WD -1:0] ds_to_es_bus_r;
wire [13:0] es_alu_op      ;
wire [ 3:0] es_mul_div_op  ;
wire        es_res_from_mem;
wire        es_src1_is_pc  ;
wire        es_src2_is_imm ;
wire        es_gr_we       ;
wire [ 1:0] es_mem_size    ;
wire        es_mem_sign_ext;
wire        es_mem_we      ;
wire [ 4:0] es_dest        ;
wire [31:0] es_imm         ;
wire [31:0] es_rj_value    ;
wire [31:0] es_rkd_value   ;
wire [31:0] es_pc          ;
wire [ 4:0] es_excp_num    ;
wire        es_ertn        ;
wire        es_excp        ;
wire        es_res_from_csr;
wire        es_csr_we      ;
wire [13:0] es_csr_addr;
wire        es_csr_mask    ;
wire [31:0] es_csr_data    ;

assign {es_excp_num    ,  //215:211
        es_ertn        ,  //210:210
        es_excp        ,  //209:209
        es_res_from_csr,  //208:208
        es_csr_we      ,  //207:207
        es_csr_addr    ,  //206:193
        es_csr_mask    ,  //192:192
        es_csr_data    ,  //191:160
        es_mem_size    ,  //159:158
        es_mem_sign_ext,  //157:157
        es_alu_op      ,  //156:143
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

wire [31:0] csr_mask_wdata;
wire [31:0] csr_final_wdata;

wire [31:0] es_final_result;

wire excp;
wire [ 5:0] excp_num;
wire excp_ale;

assign es_to_ms_bus = {excp_num       ,  //164:159
                       es_ertn        ,  //158:158
                       excp           ,  //157:157
                       es_csr_we      ,  //156:156
                       es_csr_addr    ,  //155:142
                       csr_final_wdata,  //141:110
                       es_mem_size    ,  //109:108
                       es_mem_sign_ext,  //107:107
                       es_alu_result  ,  //106:75
                       es_mul_div_op  ,  //74:71
                       es_res_from_mem,  //70:70
                       es_gr_we       ,  //69:69
                       es_dest        ,  //68:64
                       es_final_result,  //63:32
                       es_pc             //31:0
                      };

assign es_ready_go    = !div_stall || excp;
assign es_allowin     = !es_valid || es_ready_go && ms_allowin;
assign es_to_ms_valid =  es_valid && es_ready_go;
always @(posedge clk) begin
    if (reset) begin     
        es_valid <= 1'b0;
    end
    else if (flush_sign) begin
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
assign es_to_ds_forward_bus = {dep_need_stall, es_valid && es_gr_we, es_dest, es_final_result};

// mem
wire [3:0] es_stb_wen = {es_alu_result[1:0]==2'b11  ,
                         es_alu_result[1:0]==2'b10  ,
                         es_alu_result[1:0]==2'b01  ,
                         es_alu_result[1:0]==2'b00} ;

wire [3:0] es_sth_wen = {es_alu_result[1:0]==2'b10  ,
                         es_alu_result[1:0]==2'b10  ,
                         es_alu_result[1:0]==2'b00  ,
                         es_alu_result[1:0]==2'b00} ;

wire [31:0] es_stb_data = {{8{es_stb_wen[3]}} & es_rkd_value[7:0] ,
                           {8{es_stb_wen[2]}} & es_rkd_value[7:0] ,
                           {8{es_stb_wen[1]}} & es_rkd_value[7:0] ,
                           {8{es_stb_wen[0]}} & es_rkd_value[7:0]};

wire [31:0] es_sth_data = {{16{es_sth_wen[3]}} & es_rkd_value[15:0] ,
                           {16{es_sth_wen[0]}} & es_rkd_value[15:0]};

assign data_sram_en    = (es_res_from_mem || es_mem_we) && es_valid && !flush_sign && !ms_excp && !excp;
assign data_sram_we    = {4{es_mem_we && !flush_sign && !ms_excp && !excp && es_mem_size[0]}} & es_stb_wen |
                         {4{es_mem_we && !flush_sign && !ms_excp && !excp && es_mem_size[1]}} & es_sth_wen |
                         {4{es_mem_we && !flush_sign && !ms_excp && !excp && !es_mem_size  }} & 4'hf       |
                         {4{!es_mem_we || flush_sign || ms_excp || excp                    }} & 4'h0;
assign data_sram_addr  = es_alu_result;
assign data_sram_wdata = ({32{es_mem_size[0]}} & es_stb_data ) |
                         ({32{es_mem_size[1]}} & es_sth_data ) |
                         ({32{!es_mem_size  }} & es_rkd_value) ;

// csr
assign csr_mask_wdata  = (es_rj_value & es_rkd_value) | (~es_rj_value & es_csr_data);
assign csr_final_wdata = es_csr_mask ? csr_mask_wdata : es_rkd_value;

assign es_final_result = es_res_from_csr ? es_csr_data : es_alu_result;

// excp
assign excp_ale        =  (es_res_from_mem || es_mem_we) & es_valid &
                          ((es_mem_size[0] &  1'b0)                                  | 
                           (es_mem_size[1] &  es_alu_result[0])                      | 
                           (!es_mem_size   & (es_alu_result[0] | es_alu_result[1]))) ;

assign excp     = es_excp && es_valid || excp_ale;
assign excp_num = {excp_ale, es_excp_num};

endmodule
