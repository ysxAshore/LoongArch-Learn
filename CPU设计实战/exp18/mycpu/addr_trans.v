`include "csr.h"

module addr_trans
#(
    parameter TLBNUM = 16
)
(
    input  wire                 clk                  ,
    input  wire [ 9:0]          asid                 ,
    //data addr trans
    input  wire [31:0]          data_vaddr           ,
    output wire                 data_tlb_found       ,
    output wire [ 3:0]          data_tlb_index       ,
    //tlbwi tlbwr tlb write
    input  wire                 tlbfill_en           ,
    input  wire                 tlbwr_en             ,
    input  wire [ 4:0]          rand_index           ,
    input  wire [31:0]          tlbehi_in            ,
    input  wire [31:0]          tlbelo0_in           ,
    input  wire [31:0]          tlbelo1_in           ,
    input  wire [31:0]          tlbidx_in            , 
    //tlbr tlb read
    output wire [31:0]          tlbehi_out           ,
    output wire [31:0]          tlbelo0_out          ,
    output wire [31:0]          tlbelo1_out          ,
    output wire [31:0]          tlbidx_out           ,
    output wire [ 9:0]          asid_out             ,
    //invtlb 
    input  wire                 invtlb_en            ,
    input  wire [ 9:0]          invtlb_asid          ,
    input  wire [18:0]          invtlb_vpn           ,
    input  wire [ 4:0]          invtlb_op                      
);

wire [18:0] s0_vppn     ;
wire        s0_odd_page ;
wire [ 5:0] s0_ps       ;
wire [19:0] s0_ppn      ;

wire [18:0] s1_vppn     ;
wire        s1_odd_page ;
wire [ 5:0] s1_ps       ;
wire [19:0] s1_ppn      ;
wire [ 9:0] s1_asid     ;

wire        we          ;
wire [ 4:0] w_index     ;
wire [18:0] w_vppn      ;
wire        w_g         ;
wire [ 5:0] w_ps        ;
wire        w_e         ;
wire        w_v0        ;
wire        w_d0        ;
wire [ 1:0] w_mat0      ;
wire [ 1:0] w_plv0      ;
wire [19:0] w_ppn0      ;
wire        w_v1        ;
wire        w_d1        ;
wire [ 1:0] w_mat1      ;
wire [ 1:0] w_plv1      ;
wire [19:0] w_ppn1      ;

wire [ 4:0] r_index     ;
wire [18:0] r_vppn      ;
wire [ 9:0] r_asid      ;
wire        r_g         ;
wire [ 5:0] r_ps        ;
wire        r_e         ;
wire        r_v0        ;
wire        r_d0        ; 
wire [ 1:0] r_mat0      ;
wire [ 1:0] r_plv0      ;
wire [19:0] r_ppn0      ;
wire        r_v1        ;
wire        r_d1        ;
wire [ 1:0] r_mat1      ;
wire [ 1:0] r_plv1      ;
wire [19:0] r_ppn1      ;

//trans search port sig
assign s0_vppn     = 19'b0;
assign s0_odd_page = 1'b0;

assign s1_vppn     = invtlb_en ? invtlb_vpn : data_vaddr[31:13];
assign s1_odd_page = invtlb_en ? 1'b0 : data_vaddr[12];
assign s1_asid     = invtlb_en ? invtlb_asid : asid;

//trans write port sig
assign we      = tlbfill_en || tlbwr_en;
assign w_index = ({5{tlbfill_en}} & rand_index) | ({5{tlbwr_en}} & tlbidx_in[`INDEX]);
assign w_vppn  = tlbehi_in[`VPPN];
assign w_g     = tlbelo0_in[`TLB_G] && tlbelo1_in[`TLB_G];
assign w_ps    = tlbidx_in[`PS];
assign w_e     = !tlbidx_in[`NE];
assign w_v0    = tlbelo0_in[`TLB_V];
assign w_d0    = tlbelo0_in[`TLB_D];
assign w_plv0  = tlbelo0_in[`TLB_PLV];
assign w_mat0  = tlbelo0_in[`TLB_MAT];
assign w_ppn0  = tlbelo0_in[`TLB_PPN_EN];
assign w_v1    = tlbelo1_in[`TLB_V];
assign w_d1    = tlbelo1_in[`TLB_D];
assign w_plv1  = tlbelo1_in[`TLB_PLV];
assign w_mat1  = tlbelo1_in[`TLB_MAT];
assign w_ppn1  = tlbelo1_in[`TLB_PPN_EN];

//trans read port sig
assign r_index      = tlbidx_in[`INDEX];
assign tlbehi_out   = {r_vppn, 13'b0};
assign tlbelo0_out  = {4'b0, r_ppn0, 1'b0, r_g, r_mat0, r_plv0, r_d0, r_v0};
assign tlbelo1_out  = {4'b0, r_ppn1, 1'b0, r_g, r_mat1, r_plv1, r_d1, r_v1};
assign tlbidx_out   = {!r_e, 1'b0, r_ps, 24'b0}; //note do not write index
assign asid_out     = r_asid;

tlb u_tlb(
    .clk            (clk            ),
    // search port 0
    .s0_vppn        (s0_vppn        ),
    .s0_va_bit12    (s0_odd_page    ),
    .s0_asid        (asid           ),
    .s0_found       (inst_tlb_found ),
    .s0_index       (),
    .s0_ps          (s0_ps          ),
    .s0_ppn         (s0_ppn         ),
    .s0_v           (inst_tlb_v     ),
    .s0_d           (inst_tlb_d     ),
    .s0_mat         (inst_tlb_mat   ),
    .s0_plv         (inst_tlb_plv   ),
    // search port 1
    .s1_vppn        (s1_vppn        ),
    .s1_va_bit12    (s1_odd_page    ),
    .s1_asid        (s1_asid        ),
    .s1_found       (data_tlb_found ),
    .s1_index       (data_tlb_index ),
    .s1_ps          (s1_ps          ),
    .s1_ppn         (s1_ppn         ),
    .s1_v           (data_tlb_v     ),
    .s1_d           (data_tlb_d     ),
    .s1_mat         (data_tlb_mat   ),
    .s1_plv         (data_tlb_plv   ),
    // write port 
    .we             (we             ),     
    .w_index        (w_index        ),
    .w_vppn         (w_vppn         ),
    .w_asid         (asid           ),
    .w_g            (w_g            ),
    .w_ps           (w_ps           ),
    .w_e            (w_e            ),
    .w_v0           (w_v0           ),
    .w_d0           (w_d0           ),
    .w_plv0         (w_plv0         ),
    .w_mat0         (w_mat0         ),
    .w_ppn0         (w_ppn0         ),
    .w_v1           (w_v1           ),
    .w_d1           (w_d1           ),
    .w_plv1         (w_plv1         ),
    .w_mat1         (w_mat1         ),
    .w_ppn1         (w_ppn1         ),
    //read port 
    .r_index        (r_index        ),
    .r_vppn         (r_vppn         ),
    .r_asid         (r_asid         ),
    .r_g            (r_g            ),
    .r_ps           (r_ps           ),
    .r_e            (r_e            ),
    .r_v0           (r_v0           ),
    .r_d0           (r_d0           ),
    .r_mat0         (r_mat0         ),
    .r_plv0         (r_plv0         ),
    .r_ppn0         (r_ppn0         ),
    .r_v1           (r_v1           ),
    .r_d1           (r_d1           ),
    .r_mat1         (r_mat1         ),
    .r_plv1         (r_plv1         ),
    .r_ppn1         (r_ppn1         ),
    //invalid port
    .invtlb_valid   (invtlb_en      ),
    .invtlb_op      (invtlb_op      )
);

endmodule
