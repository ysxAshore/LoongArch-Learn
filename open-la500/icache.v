module icache
(
    input               clk            ,
    input               reset          ,
    //to from cpu
    input               valid          ,
    input               op             ,
    input  [ 7:0]       index          ,
    input  [19:0]       tag            ,
    input  [ 3:0]       offset         ,
    input  [ 3:0]       wstrb          ,
    input  [31:0]       wdata          ,
    output              addr_ok        ,
    output              data_ok        ,
    output [31:0]       rdata          ,
    input               uncache_en     ,
    input               icacop_op_en   ,
    input  [ 1:0]       cacop_op_mode  ,  
    input  [ 7:0]       cacop_op_addr_index , //this signal from mem stage's va
    input  [19:0]       cacop_op_addr_tag   , 
    input  [ 3:0]       cacop_op_addr_offset,
    output              icache_unbusy,
    input               tlb_excp_cancel_req,
    //to from axi
    output              rd_req       ,
    output [ 2:0]       rd_type      ,
    output [31:0]       rd_addr      ,
    input               rd_rdy       ,
    input               ret_valid    ,
    input               ret_last     ,
    input  [31:0]       ret_data     ,
    output reg          wr_req       ,
    output [ 2:0]       wr_type      ,
    output [31:0]       wr_addr      ,
    output [ 3:0]       wr_wstrb     ,
    output [127:0]      wr_data      ,
    input               wr_rdy       ,
    //to perf_counter
    output              cache_miss  
); 

reg         request_buffer_op         ;
reg [ 7:0]  request_buffer_index      ;
reg [19:0]  request_buffer_tag        ;
reg [ 3:0]  request_buffer_offset     ;
reg [ 3:0]  request_buffer_wstrb      ;
reg [31:0]  request_buffer_wdata      ;
reg         request_buffer_uncache_en ;
reg         request_buffer_icacop     ;
reg [ 1:0]  request_buffer_cacop_op_mode;

reg  [ 1:0]  miss_buffer_replace_way ;
reg  [ 1:0]  miss_buffer_ret_num     ;
wire [ 1:0]  ret_num_add_one         ;
 
wire [ 7:0] way_bank_addra [1:0][3:0];
wire [31:0] way_bank_dina  [1:0][3:0];
wire [31:0] way_bank_douta [1:0][3:0];
wire        way_bank_ena   [1:0][3:0];
wire [ 3:0] way_bank_wea   [1:0][3:0];

wire [ 7:0] way_tagv_addra [1:0];
wire [20:0] way_tagv_dina  [1:0];
wire [20:0] way_tagv_douta [1:0];
wire        way_tagv_ena   [1:0];
wire        way_tagv_wea   [1:0];

wire [ 1:0] way_hit     ;
wire        cache_hit   ;

wire [ 31:0] way_load_word [1:0];
wire [127:0] way_data      [1:0];
wire [31:0]  load_res        ;

wire         main_idle2lookup  ;
wire         main_lookup2lookup;

wire         main_state_is_idle   ;
wire         main_state_is_lookup ;
wire         main_state_is_replace;
wire         main_state_is_refill ;

wire [1:0]   way_wr_en;

wire [31:0]  refill_data;

wire         cacop_op_mode0;
wire         cacop_op_mode1;
wire         cacop_op_mode2;

wire [1:0]   random_val;
wire [3:0]   chosen_way;
wire [1:0]   replace_way;
wire [1:0]   invalid_way;
wire         has_invalid_way;
wire [1:0]   rand_repl_way;
wire [3:0]   cacop_chose_way;
wire         cacop_op_mode2_hit_wr;
wire         cacop_op_mode2_no_hit;

reg  [ 1:0]  lookup_way_hit_buffer;

wire [ 3:0]  real_offset;
wire [19:0]  real_tag   ;
wire [ 7:0]  real_index ;

wire         req_or_inst_valid ;   

localparam main_idle    = 5'b00001;
localparam main_lookup  = 5'b00010;
localparam main_replace = 5'b01000;
localparam main_refill  = 5'b10000;
localparam write_buffer_idle  = 1'b0;
localparam write_buffer_write = 1'b1; 

reg [4:0] main_state;

reg       rd_req_buffer;

genvar i,j;

//state machine
//main loop
always @(posedge clk) begin
    if (reset) begin
        main_state <= main_idle;

        request_buffer_op         <=  1'b0;
        request_buffer_index      <=  8'b0;
        request_buffer_tag        <= 20'b0;
        request_buffer_offset     <=  4'b0;
        request_buffer_wstrb      <=  4'b0;
        request_buffer_wdata      <= 32'b0;
        request_buffer_uncache_en <=  1'b0;

        request_buffer_cacop_op_mode <= 2'b0;
        request_buffer_icacop        <= 1'b0;

        miss_buffer_replace_way <= 2'b0;

        wr_req <= 1'b0;
    end
    else case (main_state)
        main_idle: begin
            if (req_or_inst_valid && main_idle2lookup) begin
                main_state <= main_lookup;

                request_buffer_op         <= op   ;
                request_buffer_index      <= real_index ;
                request_buffer_offset     <= real_offset;
                request_buffer_wstrb      <= wstrb;
                request_buffer_wdata      <= wdata;

                request_buffer_cacop_op_mode <= cacop_op_mode;
                request_buffer_icacop        <= icacop_op_en ;
            end
        end
        main_lookup: begin
            if (req_or_inst_valid && main_lookup2lookup) begin
                main_state <= main_lookup;

                request_buffer_op         <= op   ;
                request_buffer_index      <= real_index ;
                request_buffer_offset     <= real_offset;
                request_buffer_wstrb      <= wstrb;
                request_buffer_wdata      <= wdata;

                request_buffer_cacop_op_mode <= cacop_op_mode;
                request_buffer_icacop        <= icacop_op_en  ;
            end
            else if (tlb_excp_cancel_req) begin
                main_state <= main_idle;
            end
            else if (!cache_hit) begin
                main_state <= main_replace;

                request_buffer_tag <= real_tag;
                request_buffer_uncache_en <= (uncache_en && !request_buffer_icacop);
                miss_buffer_replace_way <= replace_way;
            end
            else begin
                main_state <= main_idle;
            end
        end
        main_replace: begin
            if (rd_rdy) begin
                main_state <= main_refill;
                miss_buffer_ret_num <= 2'b0;   //when get ret data, it will be sent to cpu directly.
            end
        end
        main_refill: begin
            if ((ret_valid && ret_last) || !rd_req_buffer) begin   //when rd_req is not set, go to next state directly
                main_state <= main_idle;
            end
            else begin
                if (ret_valid) begin
                    miss_buffer_ret_num <= ret_num_add_one;
                end
            end
        end
        default: begin
            main_state <= main_idle;
        end
    endcase
end

assign real_offset = icacop_op_en ? cacop_op_addr_offset : offset;
assign real_index  = icacop_op_en ? cacop_op_addr_index  : index ;

assign real_tag    = request_buffer_icacop ? cacop_op_addr_tag    : tag   ;

/*====================================main state idle=======================================*/

assign req_or_inst_valid = valid || icacop_op_en;

assign main_idle2lookup   = 1'b1;

assign icache_unbusy = main_state_is_idle;

//addr_ok logic

/*===================================main state lookup======================================*/

//tag compare
generate for(i=0;i<2;i=i+1) begin:gen_way_hit
	assign way_hit[i] = way_tagv_douta[i][0] && (real_tag == way_tagv_douta[i][20:1]); //this signal will not maintain
end endgenerate
assign cache_hit = |way_hit && !(uncache_en || cacop_op_mode0 || cacop_op_mode1 || cacop_op_mode2);  //uncache road reuse
//when cache inst op mode2 no hit, main state machine will still go a round. implement easy.

assign main_lookup2lookup = cache_hit;

assign addr_ok = ((main_state_is_idle && main_idle2lookup) || (main_state_is_lookup && main_lookup2lookup)) && !icacop_op_en; //request can be get

//data select
generate for(i=0;i<2;i=i+1) begin: gen_data
	assign way_data[i] = {way_bank_douta[i][3],way_bank_douta[i][2],way_bank_douta[i][1],way_bank_douta[i][0]};

	assign way_load_word[i] = way_data[i][request_buffer_offset[3:2]*32 +: 32];
end endgenerate

assign load_res  = {32{way_hit[0]}} & way_load_word[0] |
                   {32{way_hit[1]}} & way_load_word[1] ;

//data_ok logic

/*====================================main state miss=======================================*/

decoder_2_4 dec_rand_way (.in({1'b0,random_val[0]}),.out(chosen_way));

one_valid_n #(2) sel_one_invalid (.in(~{way_tagv_douta[1][0],way_tagv_douta[0][0]}),.out(invalid_way),.nozero(has_invalid_way));

assign rand_repl_way = has_invalid_way ? invalid_way : chosen_way[1:0]; //chose invalid way first.

decoder_2_4 dec_cacop_way (.in({1'b0,request_buffer_offset[0]}),.out(cacop_chose_way));

assign replace_way = {2{cacop_op_mode0 || cacop_op_mode1}} & cacop_chose_way[1:0] |
                     {2{cacop_op_mode2}}                   & way_hit              |
                     {2{!request_buffer_icacop}}           & rand_repl_way;

/*==================================main state replace======================================*/

assign rd_req  = main_state_is_replace && !(cacop_op_mode0 || cacop_op_mode1 || cacop_op_mode2);

/*===================================main state refill======================================*/

assign rd_type = request_buffer_uncache_en ? 3'b10 : 3'b100;
assign rd_addr = request_buffer_uncache_en ? {request_buffer_tag, request_buffer_index, request_buffer_offset} : {request_buffer_tag, request_buffer_index, 4'b0};

//write process will not block pipeline 
assign data_ok = (main_state_is_lookup && (cache_hit || tlb_excp_cancel_req)) || 
                 (main_state_is_refill && ((ret_valid && ((miss_buffer_ret_num == request_buffer_offset[3:2]) || request_buffer_uncache_en))/* || !rd_req_buffer*/)) &&
                 !request_buffer_icacop;  //when rd_req is not set, set data_ok directly.
//rdate connect with ret_data dirctly. maintain one clock only

assign refill_data = ret_data;

assign way_wr_en = miss_buffer_replace_way & {2{ret_valid}}; //when rd_req is not set, ret_valid and ret_last will not be set. block will not be wr also.

assign cache_miss = main_state_is_refill && ret_last && !(request_buffer_uncache_en || request_buffer_icacop);

//add one 
assign ret_num_add_one[0] = miss_buffer_ret_num[0] ^ 1'b1;
assign ret_num_add_one[1] = miss_buffer_ret_num[1] ^ miss_buffer_ret_num[0];

always @(posedge clk) begin
    if (reset) begin
        rd_req_buffer <= 1'b0;
    end
    else if (rd_req) begin
        rd_req_buffer <= 1'b1;
    end
    else if (main_state_is_refill && (ret_valid && ret_last)) begin
        rd_req_buffer <= 1'b0;
    end
end

/*==========================================================================================*/

//cache ins control signal
assign cacop_op_mode0 = request_buffer_icacop && (request_buffer_cacop_op_mode == 2'b00);
assign cacop_op_mode1 = request_buffer_icacop && ((request_buffer_cacop_op_mode == 2'b01) || (request_buffer_cacop_op_mode == 2'b11));
assign cacop_op_mode2 = request_buffer_icacop && (request_buffer_cacop_op_mode == 2'b10);

assign cacop_op_mode2_hit_wr = cacop_op_mode2 && |lookup_way_hit_buffer;
assign cacop_op_mode2_no_hit = cacop_op_mode2 && ~|lookup_way_hit_buffer;

always @(posedge clk) begin
    if (reset) begin
        lookup_way_hit_buffer <= 2'b0;
    end
    else if (cacop_op_mode2 && main_state_is_lookup) begin
        lookup_way_hit_buffer <= way_hit;
    end
end

//output
assign rdata = {32{main_state_is_lookup}} & load_res |
               {32{main_state_is_refill}} & ret_data ;

generate 
for(i=0;i<2;i=i+1) begin:gen_data_way
	for(j=0;j<4;j=j+1) begin:gen_data_bank
/*===============================bank addra logic==============================*/

		assign way_bank_addra[i][j] = {8{addr_ok}}  & real_index           |  /*lookup*/
	                                  {8{!addr_ok}} & request_buffer_index ;

/*===============================bank we logic=================================*/

		assign way_bank_wea[i][j] = {4{main_state_is_refill && 
                                    (way_wr_en[i] && (miss_buffer_ret_num == j[1:0]))}} & 4'hf;

/*===============================bank dina logic=================================*/

		assign way_bank_dina[i][j] = {32{main_state_is_refill}} & refill_data;

/*===============================bank ena logic=================================*/

		assign way_bank_ena[i][j] = (!(request_buffer_uncache_en || cacop_op_mode0)) || main_state_is_idle || main_state_is_lookup;
	end
end
endgenerate

generate 
for(i=0;i<2;i=i+1) begin:gen_tagv_way
/*===============================tagv addra logic=================================*/

	assign way_tagv_addra[i] = {8{addr_ok || (icacop_op_en && 
                               (main_state_is_idle || main_state_is_lookup))}} & real_index              | 
                               {8{main_state_is_replace || main_state_is_refill}} & request_buffer_index ;
                               //{8{(main_state_is_miss && wr_rdy) ||

/*===============================tagv ena logic=================================*/

	assign way_tagv_ena[i] = (!request_buffer_uncache_en) || main_state_is_idle || main_state_is_lookup;

/*===============================tagv wea logic=================================*/

	assign way_tagv_wea[i] = miss_buffer_replace_way[i] && main_state_is_refill && 
							 ((ret_valid && ret_last) || cacop_op_mode0 || cacop_op_mode1 || cacop_op_mode2_hit_wr);  //wirte at last 4B

/*===============================tagv dina logic=================================*/

	assign way_tagv_dina[i] = (cacop_op_mode0 || cacop_op_mode1 || cacop_op_mode2_hit_wr) ? 21'b0 : {request_buffer_tag, 1'b1};
end
endgenerate
/*==============================================================================*/

generate 
for(i=0;i<2;i=i+1) begin:data_ram_way
	for(j=0;j<4;j=j+1) begin:data_ram_bank
		data_bank_sram u(
    		.addra      (way_bank_addra[i][j])  ,
    		.clka       (clk                 )  ,
    		.dina       (way_bank_dina[i][j] )  ,
    		.douta      (way_bank_douta[i][j])  ,
    		.ena        (way_bank_ena[i][j]  )  ,
    		.wea        (way_bank_wea[i][j]  )  
		);
	end
end
endgenerate

generate
for(i=0;i<2;i=i+1) begin:tagv_ram_way
	//[20:1] tag     [0:0] v
	tagv_sram u( 
	    .addra      (way_tagv_addra[i])  ,
	    .clka       (clk              )  ,
	    .dina       (way_tagv_dina[i] )  ,
	    .douta      (way_tagv_douta[i])  ,
	    .ena        (way_tagv_ena[i]  )  ,
	    .wea        (way_tagv_wea[i]  )
	);
end
endgenerate

lfsr lfsr(
    .clk        (clk        )   ,
    .reset      (reset      )   ,
    .random_val (random_val )
);

assign main_state_is_idle    = main_state == main_idle   ;
assign main_state_is_lookup  = main_state == main_lookup ;
assign main_state_is_replace = main_state == main_replace;
assign main_state_is_refill  = main_state == main_refill ;

endmodule
