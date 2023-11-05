`include "mycpu.h"

module mem_stage(
    input  wire                         clk           ,
    input  wire                         reset         ,
    //allowin
    input  wire                         ws_allowin    ,
    output wire                         ms_allowin    ,
    //from es
    input  wire                         es_to_ms_valid,
    input  wire [`ES_TO_MS_BUS_WD -1:0] es_to_ms_bus  ,
    //to ws
    output wire                         ms_to_ws_valid,
    output wire [`MS_TO_WS_BUS_WD -1:0] ms_to_ws_bus  ,
    //to ds
    output  wire [`ES_TO_DS_FORWARD_BUS - 1:0] ms_to_ds_forward_bus,
    //div mul
    input  wire [31:0]     div_result    ,
    input  wire [31:0]     mod_result    ,
    input  wire [63:0]     mul_result    ,
    //excp
    input  wire            excp_flush    ,
    input  wire            ertn_flush    ,
    input  wire            refetch_flush ,
    output wire            excp_out      ,
    //from data sram
    input  wire        data_data_ok,
    input  wire [31:0] data_rdata  
);

reg         ms_valid;
wire        ms_ready_go;

wire flush_sign = excp_flush || ertn_flush || refetch_flush;

reg [`ES_TO_MS_BUS_WD -1:0] es_to_ms_bus_r;
wire [ 3:0] ms_mul_div_op;
wire        ms_res_from_mem;
wire        ms_mem_we;
wire        ms_gr_we;
wire [ 4:0] ms_dest;
wire [31:0] ms_alu_result;
wire [31:0] ms_pc;
wire [ 1:0] ms_mem_size;
wire        ms_mem_sign_ext;
wire [31:0] ms_mem_addr;
wire [ 5:0] ms_excp_num;
wire        ms_ertn;
wire        ms_excp;
wire        ms_csr_we;
wire [13:0] ms_csr_waddr;
wire [31:0] ms_csr_wdata;
wire        ms_inst_tlbrd  ;
wire        ms_inst_tlbwr  ;
wire        ms_inst_tlbfill;
wire        ms_inst_invtlb ;
wire [ 9:0] ms_invtlb_asid;
wire [18:0] ms_invtlb_vpn;
wire        ms_inst_tlbsrch;
wire        data_tlb_found;
wire [ 3:0] data_tlb_index;
assign {ms_excp_num    ,  //204:199
        ms_ertn        ,  //198:198
        ms_excp        ,  //197:197
        ms_inst_tlbrd  ,  //196:196
        ms_inst_tlbwr  ,  //195:195
        ms_inst_tlbfill,  //194:194
        ms_inst_invtlb ,  //193:193
        ms_invtlb_asid ,  //192:183
        ms_invtlb_vpn  ,  //182:164
        ms_inst_tlbsrch,  //163:163
        data_tlb_found ,  //162:162
        data_tlb_index ,  //161:158
        ms_csr_we      ,  //157:157
        ms_csr_waddr   ,  //156:143
        ms_csr_wdata   ,  //142:111
        ms_mem_size    ,  //110:109
        ms_mem_sign_ext,  //108:108
        ms_mem_addr    ,  //107:76
        ms_mul_div_op  ,  //75:72
        ms_mem_we      ,  //71:71
        ms_res_from_mem,  //70:70
        ms_gr_we       ,  //69:69
        ms_dest        ,  //68:64
        ms_alu_result  ,  //63:32
        ms_pc             //31:0
       } = es_to_ms_bus_r;

reg         mem_reg_valid;
reg  [31:0] mem_result_r;
wire [31:0] mem_result;
wire [31:0] ms_final_result;
wire        excp;
wire [ 5:0] excp_num;

assign ms_to_ws_bus = {ms_mem_addr    ,  //195:164
                       excp_num       ,  //163:158
                       ms_ertn        ,  //157:157
                       excp           ,  //156:156
                       ms_inst_tlbrd  ,  //155:155
                       ms_inst_tlbwr  ,  //154:154
                       ms_inst_tlbfill,  //153:153
                       ms_inst_invtlb ,  //152:152
                       ms_invtlb_asid ,  //151:142
                       ms_invtlb_vpn  ,  //141:123
                       ms_inst_tlbsrch,  //122:122
                       data_tlb_found ,  //121:121
                       data_tlb_index ,  //120:117
                       ms_csr_we      ,  //116:116
                       ms_csr_waddr   ,  //115:102
                       ms_csr_wdata   ,  //101:70
                       ms_gr_we       ,  //69:69
                       ms_dest        ,  //68:64
                       ms_final_result,  //63:32
                       ms_pc             //31:0
                      };

assign ms_ready_go    =  (ms_res_from_mem || ms_mem_we) && (data_data_ok || mem_reg_valid) || 
                        !(ms_res_from_mem || ms_mem_we) || excp;
assign ms_allowin     = !ms_valid || ms_ready_go && ws_allowin;
assign ms_to_ws_valid = ms_valid && ms_ready_go;
always @(posedge clk) begin
    if (reset) begin
        ms_valid <= 1'b0;
    end
    else if (flush_sign) begin
        ms_valid <= 1'b0;
    end
    else if (ms_allowin) begin
        ms_valid <= es_to_ms_valid;
    end

    if (es_to_ms_valid && ms_allowin) begin
        es_to_ms_bus_r  <= es_to_ms_bus;
    end

    if (reset) begin
        mem_reg_valid <= 1'b0;
    end
    else if (flush_sign) begin
        mem_reg_valid <= 1'b0;
    end
    else if (ws_allowin) begin
        mem_reg_valid <= 1'b0;
    end
    else if (data_data_ok && !ws_allowin) begin
        mem_reg_valid <= 1'b1;
        mem_result_r <= mem_result;
    end
end

wire [7:0] mem_byte = ({8{ms_mem_addr[1:0]==2'b00}} & data_rdata[ 7: 0]) |
                      ({8{ms_mem_addr[1:0]==2'b01}} & data_rdata[15: 8]) |
                      ({8{ms_mem_addr[1:0]==2'b10}} & data_rdata[23:16]) |
                      ({8{ms_mem_addr[1:0]==2'b11}} & data_rdata[31:24]) ; 
                                                            

wire [15:0] mem_half = ({16{ms_mem_addr[1:0]==2'b00}} & data_rdata[15: 0]) |
                       ({16{ms_mem_addr[1:0]==2'b10}} & data_rdata[31:16]) ;

assign mem_result = ({32{ms_mem_size[0] &&  ms_mem_sign_ext}} & {{24{mem_byte[ 7]}}, mem_byte}) |
                    ({32{ms_mem_size[0] && ~ms_mem_sign_ext}} & { 24'b0            , mem_byte}) |
                    ({32{ms_mem_size[1] &&  ms_mem_sign_ext}} & {{16{mem_half[15]}}, mem_half}) |
                    ({32{ms_mem_size[1] && ~ms_mem_sign_ext}} & { 16'b0            , mem_half}) |
                    ({32{!ms_mem_size}}                       & data_rdata               ) ;

assign ms_final_result = ({32{ms_res_from_mem }} & (mem_reg_valid ? mem_result_r : mem_result)      )  |
                         ({32{ms_mul_div_op[0]}}                                 & mul_result[31: 0])  |
                         ({32{ms_mul_div_op[1]}}                                 & mul_result[63:32])  |
                         ({32{ms_mul_div_op[2]}}                                 & div_result       )  |
                         ({32{ms_mul_div_op[3]}}                                 & mod_result       )  |
                         ({32{!ms_mul_div_op & !ms_res_from_mem}}                & ms_alu_result);

wire dep_need_stall = ms_valid && ms_gr_we && !ms_ready_go;
assign ms_to_ds_forward_bus = {dep_need_stall, ms_to_ws_valid && ms_gr_we, ms_dest, ms_final_result};

// excp
assign excp     = ms_excp & ms_valid;
assign excp_num = ms_excp_num;

assign excp_out = ms_ertn && ms_valid || excp;

endmodule
