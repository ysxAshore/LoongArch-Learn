module dcache
(
    input               clk          ,
    input               reset        ,
    //to from cpu
    input               valid        ,
    input               op           , //cache inst treat as load, op is zero
    input  [ 2:0]       size         ,
    input  [ 7:0]       index        ,
    input  [19:0]       tag          ,
    input  [ 3:0]       offset       ,
    input  [ 3:0]       wstrb        ,
    input  [31:0]       wdata        ,
    output              addr_ok      ,
    output              data_ok      ,
    output [31:0]       rdata        ,
    input               uncache_en   ,
    input               dcacop_op_en ,
    input  [ 1:0]       cacop_op_mode,
    input  [ 4:0]       preld_hint   ,
    input               preld_en     ,
    input               tlb_excp_cancel_req,
    input               sc_cancel_req,
	output              dcache_empty ,
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

reg [1:0] way_d_reg [255:0];

wire        request_uncache_en        ;
reg         request_buffer_op         ;
reg         request_buffer_preld      ;
reg [ 2:0]  request_buffer_size       ;
reg [ 7:0]  request_buffer_index      ;
reg [19:0]  request_buffer_tag        ;
reg [ 3:0]  request_buffer_offset     ;
reg [ 3:0]  request_buffer_wstrb      ;
reg [31:0]  request_buffer_wdata      ;
reg         request_buffer_uncache_en ;
reg         request_buffer_dcacop     ;
reg [ 1:0]  request_buffer_cacop_op_mode;

reg  [ 1:0]  miss_buffer_replace_way ;
reg  [ 1:0]  miss_buffer_ret_num     ;
wire [ 1:0]  ret_num_add_one         ;

reg [ 7:0]  write_buffer_index      ;
reg [ 3:0]  write_buffer_wstrb      ;
reg [31:0]  write_buffer_wdata      ;
reg [ 1:0]  write_buffer_way        ;
reg [ 3:0]  write_buffer_offset     ;
 
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

wire 		wr_match_way_bank[1:0][3:0];

wire [ 1:0] way_d       ;

wire [ 1:0] way_hit     ;
wire        cache_hit   ;

wire [31:0]  way_load_word [1:0];
wire [127:0] way_data      [1:0];
wire [31:0]  load_res           ;
 
wire [127:0] replace_data    ;
wire         replace_d       ;
wire         replace_v       ;
wire [19:0]  replace_tag     ;
wire [ 1:0]  random_val      ;
wire [ 3:0]  chosen_way      ;
wire [ 1:0]  replace_way     ;
wire [ 1:0]  invalid_way     ;
wire         has_invalid_way ;
wire [ 1:0]  rand_repl_way   ;
wire [ 3:0]  cacop_chose_way ;

wire         main_idle2lookup  ;
wire         main_lookup2lookup;

wire         main_state_is_idle   ;
wire         main_state_is_lookup ;
wire         main_state_is_miss   ;
wire         main_state_is_replace;
wire         main_state_is_refill ;

wire         write_state_is_idle;
wire         write_state_is_full;

wire         uncache_wr     ;
reg          uncache_wr_buffer;
wire [ 2:0]  uncache_wr_type;

wire [ 1:0]  way_wr_en;

wire [31:0]  refill_data;
wire [31:0]  write_in;

wire         cacop_op_mode0;
wire         cacop_op_mode1;
wire         cacop_op_mode2;

wire         cacop_op_mode2_hit_wr;
reg          cacop_op_mode2_hit_wr_buffer;

wire         preld_st_en;
wire         preld_ld_en;
wire         preld_ld_st_en;

wire         req_or_inst_valid;

reg [1:0]    lookup_way_hit_buffer;

localparam main_idle    = 5'b00001;
localparam main_lookup  = 5'b00010;
localparam main_miss    = 5'b00100;
localparam main_replace = 5'b01000;
localparam main_refill  = 5'b10000;
localparam write_buffer_idle  = 1'b0;
localparam write_buffer_write = 1'b1; 

genvar i,j;

reg [4:0] main_state;
reg       write_buffer_state;

reg       rd_req_buffer;

// wire      invalid_way;

wire cancel_req = tlb_excp_cancel_req || sc_cancel_req;

//state machine
//main loop
always @(posedge clk) begin
    if (reset) begin
        main_state <= main_idle;

        request_buffer_op         <=  1'b0;
        request_buffer_preld      <=  1'b0;
        request_buffer_size       <=  3'b0;
        request_buffer_index      <=  8'b0;
        request_buffer_tag        <= 20'b0;
        request_buffer_offset     <=  4'b0;
        request_buffer_wstrb      <=  4'b0;
        request_buffer_wdata      <= 32'b0;
        request_buffer_uncache_en <=  1'b0;

        request_buffer_cacop_op_mode <= 2'b0;
        request_buffer_dcacop        <= 1'b0;

        miss_buffer_replace_way <= 2'b0;

		wr_req <= 1'b0;
    end
    else case (main_state)
        main_idle: begin
            if (req_or_inst_valid && main_idle2lookup) begin
                main_state <= main_lookup;

                request_buffer_op         <= op        ;
                request_buffer_preld      <= preld_en     ;
                request_buffer_size       <= size      ;
                request_buffer_index      <= index     ;
                request_buffer_offset     <= offset    ;
                request_buffer_wstrb      <= wstrb     ;
                request_buffer_wdata      <= wdata     ;

                request_buffer_cacop_op_mode <= cacop_op_mode ;
                request_buffer_dcacop        <= dcacop_op_en  ;
            end
        end
        main_lookup: begin
            if (req_or_inst_valid && main_lookup2lookup) begin
                main_state <= main_lookup;

                request_buffer_op         <= op        ;
                request_buffer_preld      <= preld_en  ;
                request_buffer_size       <= size      ;
                request_buffer_index      <= index     ;
                request_buffer_offset     <= offset    ;
                request_buffer_wstrb      <= wstrb     ;
                request_buffer_wdata      <= wdata     ;

                request_buffer_cacop_op_mode <= cacop_op_mode ;
                request_buffer_dcacop        <= dcacop_op_en  ;
            end
            else if (cancel_req) begin
                main_state <= main_idle;
            end
            else if (!cache_hit) begin
				//uncache wr --> wr_req 1
				//uncache rd, cacop(code==0) --> wr_req 0
				//cacop(code==1, 2), cache st, cache ld --> wr_req (dirty && valid)
				if (uncache_wr || ((replace_d && replace_v) && (!request_uncache_en || cacop_op_mode2_hit_wr) && !cacop_op_mode0))
                	main_state <= main_miss;
				else 
					main_state <= main_replace;

                request_buffer_tag        <= tag;
                request_buffer_uncache_en <= request_uncache_en;
				uncache_wr_buffer         <= uncache_wr;
                miss_buffer_replace_way   <= replace_way;
				cacop_op_mode2_hit_wr_buffer <= cacop_op_mode2_hit_wr;
            end
            else begin
                main_state <= main_idle;
            end
        end
        main_miss: begin
            if (wr_rdy) begin
                main_state <= main_replace;
				wr_req <= 1'b1;
            end
        end
        main_replace: begin
            if (rd_rdy) begin
                main_state <= main_refill;
                miss_buffer_ret_num <= 2'b0;   //when get ret data, it will be sent to cpu directly.
            end
			wr_req <= 1'b0;
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

//hit write state 
always @(posedge clk) begin
    if (reset) begin
        write_buffer_state  <= write_buffer_idle;

        write_buffer_index  <= 8'b0;
        write_buffer_wstrb  <= 4'b0;
        write_buffer_wdata  <= 32'b0;
        write_buffer_offset <= 4'b0;
        write_buffer_way    <= 2'b0;
    end
    else case (write_buffer_state)
        write_buffer_idle: begin
            if (main_state_is_lookup && cache_hit && request_buffer_op && !cancel_req) begin
                write_buffer_state  <= write_buffer_write;

                write_buffer_index  <= request_buffer_index;
                write_buffer_wstrb  <= request_buffer_wstrb;
                write_buffer_wdata  <= request_buffer_wdata;
                write_buffer_offset <= request_buffer_offset;
                write_buffer_way    <= way_hit;
            end
        end
        write_buffer_write: begin
            if (main_state_is_lookup && cache_hit && request_buffer_op && !cancel_req) begin
                write_buffer_state  <= write_buffer_write;

                write_buffer_index  <= request_buffer_index;
                write_buffer_wstrb  <= request_buffer_wstrb;
                write_buffer_wdata  <= request_buffer_wdata;
                write_buffer_offset <= request_buffer_offset;
                write_buffer_way    <= way_hit;
            end
            else begin
                write_buffer_state <= write_buffer_idle;
            end
        end
    endcase
end

/*====================================main state idle=======================================*/

assign req_or_inst_valid = valid || dcacop_op_en || preld_en;

//state change condition, write hit cache block write do not conflict with lookup read and cacop
assign main_idle2lookup   = !(write_state_is_full && ((write_buffer_offset[3:2] == offset[3:2]) || dcacop_op_en));

assign dcache_empty = main_state_is_idle;
//addr_ok logic

/*===================================main state lookup======================================*/

//tag compare
generate for(i=0;i<2;i=i+1) begin:gen_way_hit
	assign way_hit[i] = way_tagv_douta[i][0] && (tag == way_tagv_douta[i][20:1]); //this signal will not maintain
end endgenerate

assign cache_hit = |way_hit && !(uncache_en || cacop_op_mode0 || cacop_op_mode1 || cacop_op_mode2);  //uncache road reuse
//when cache inst op mode2 no hit, main state machine will still go a round. implement easy.

assign main_lookup2lookup = !(write_state_is_full && ((write_buffer_offset[3:2] == offset[3:2]) || dcacop_op_en)) && 
                            !(request_buffer_op  && !op && ((request_buffer_offset[3:2] == offset[3:2]) || dcacop_op_en)) &&
                            cache_hit;
 
assign addr_ok = (main_state_is_idle && main_idle2lookup) || (main_state_is_lookup && main_lookup2lookup); //request can be get

//data select
generate for(i=0;i<2;i=i+1) begin:gen_way_data
	assign way_data[i] = {way_bank_douta[i][3],way_bank_douta[i][2],way_bank_douta[i][1],way_bank_douta[i][0]};

	assign way_load_word[i] = way_data[i][request_buffer_offset[3:2]*32 +: 32];
end endgenerate

assign load_res = {32{way_hit[0]}} & way_load_word[0] |
                  {32{way_hit[1]}} & way_load_word[1] ;

assign request_uncache_en = (uncache_en && !request_buffer_dcacop);

assign uncache_wr = request_uncache_en && request_buffer_op && !cacop_op_mode1 && !cacop_op_mode2_hit_wr;
//data_ok logic

decoder_2_4 dec_rand_way (.in({1'b0,random_val[0]}),.out(chosen_way));

one_valid_n #(2) sel_one_invalid (.in(~{way_tagv_douta[1][0],way_tagv_douta[0][0]}),.out(invalid_way),.nozero(has_invalid_way));

assign rand_repl_way = has_invalid_way ? invalid_way : chosen_way[1:0]; //chose invalid way first.

decoder_2_4 dec_cacop_way (.in({1'b0,request_buffer_offset[0]}),.out(cacop_chose_way));

assign replace_way = {2{cacop_op_mode0 || cacop_op_mode1}} & cacop_chose_way[1:0] |
                     {2{cacop_op_mode2}}                   & way_hit              |
                     {2{!request_buffer_dcacop}}           & rand_repl_way;

assign way_d = way_d_reg[request_buffer_index] |
	           {2{(write_buffer_index==request_buffer_index)&&write_state_is_full}}&write_buffer_way;

assign replace_d    = |(replace_way & way_d);
assign replace_v    = |(replace_way & {way_tagv_douta[1][0],way_tagv_douta[0][0]});

/*====================================main state miss=======================================*/

assign replace_tag  = {20{miss_buffer_replace_way[0]}} & way_tagv_douta[0][20:1] |
					  {20{miss_buffer_replace_way[1]}} & way_tagv_douta[1][20:1] ;

assign replace_data = {128{miss_buffer_replace_way[0]}} & way_data[0] | 
				      {128{miss_buffer_replace_way[1]}} & way_data[1] ;

assign wr_type  = uncache_wr_buffer ? uncache_wr_type : 3'b100;     //replace cache line
assign wr_addr  = uncache_wr_buffer ? {request_buffer_tag, request_buffer_index, request_buffer_offset} :
 	                                  {replace_tag, request_buffer_index, 4'b0};
assign wr_data  = uncache_wr_buffer ? {96'b0, request_buffer_wdata} : replace_data;
assign wr_wstrb = uncache_wr_buffer ? request_buffer_wstrb : 4'hf;

//assign wr_req = main_state_is_miss;

/*==================================main state replace======================================*/

assign uncache_wr_type = request_buffer_size;

assign rd_req  = main_state_is_replace && !(uncache_wr_buffer || cacop_op_mode0 || cacop_op_mode1 || cacop_op_mode2);

assign rd_type = request_buffer_uncache_en ? request_buffer_size : 3'b100;
assign rd_addr = request_buffer_uncache_en ? {request_buffer_tag, request_buffer_index, request_buffer_offset} : {request_buffer_tag, request_buffer_index, 4'b0};
/*===================================main state refill======================================*/

//write process will not block pipeline
//preld ins will not block pipeline      ps:preld is not real mem inst, this operation is controled in pipeline
assign data_ok = ((main_state_is_lookup && (cache_hit || request_buffer_op || cancel_req)) || 
                  (main_state_is_refill && (!request_buffer_op && (ret_valid && ((miss_buffer_ret_num == request_buffer_offset[3:2]) || request_buffer_uncache_en))))) && 
                  !(request_buffer_preld || request_buffer_dcacop);  //when rd_req is not set, set data_ok directly.
//rdate connect with ret_data dirctly. maintain one clock only

assign write_in = {(request_buffer_wstrb[3] ? request_buffer_wdata[31:24] : ret_data[31:24]), 
                   (request_buffer_wstrb[2] ? request_buffer_wdata[23:16] : ret_data[23:16]),
                   (request_buffer_wstrb[1] ? request_buffer_wdata[15: 8] : ret_data[15: 8]),
                   (request_buffer_wstrb[0] ? request_buffer_wdata[ 7: 0] : ret_data[ 7: 0])};

assign refill_data = (request_buffer_op && (request_buffer_offset[3:2] == miss_buffer_ret_num)) ? write_in : ret_data; 

assign way_wr_en = miss_buffer_replace_way & {2{ret_valid}};  //when rd_req is not set, ret_valid and ret_last will not be set. block will not be wr also.

assign cache_miss = main_state_is_refill && ret_last && !(request_buffer_uncache_en || request_buffer_dcacop || request_buffer_preld);  

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

//refill or write state update dirty reg
always @(posedge clk) begin
    if (main_state_is_refill && ((ret_valid && ret_last) || !rd_req_buffer) && (!(request_buffer_uncache_en || cacop_op_mode0))) begin
		way_d_reg[request_buffer_index][0] <= miss_buffer_replace_way[0] ? request_buffer_op : way_d_reg[request_buffer_index][0];
		way_d_reg[request_buffer_index][1] <= miss_buffer_replace_way[1] ? request_buffer_op : way_d_reg[request_buffer_index][1];
    end
    else if (write_state_is_full) begin
		way_d_reg[write_buffer_index] <= way_d_reg[write_buffer_index] | write_buffer_way;
    end
end

//cache ins control signal
assign cacop_op_mode0 = request_buffer_dcacop && (request_buffer_cacop_op_mode == 2'b00);
assign cacop_op_mode1 = request_buffer_dcacop && ((request_buffer_cacop_op_mode == 2'b01) || (request_buffer_cacop_op_mode == 2'b11));
assign cacop_op_mode2 = request_buffer_dcacop && (request_buffer_cacop_op_mode == 2'b10);

assign cacop_op_mode2_hit_wr = cacop_op_mode2 && |way_hit;

//output
assign rdata = {32{main_state_is_lookup}} & load_res |
               {32{main_state_is_refill}} & ret_data ;

generate 
for(i=0;i<2;i=i+1) begin:gen_data_way
	for(j=0;j<4;j=j+1) begin:gen_data_bank
/*===============================bank addra logic==============================*/

		assign wr_match_way_bank[i][j] = write_state_is_full && (write_buffer_way[i] && (write_buffer_offset[3:2] == j[1:0]));

		assign way_bank_addra[i][j] = wr_match_way_bank[i][j] ? write_buffer_index : ({8{addr_ok}}  & index                |    /*lookup*/
						                                                              {8{!addr_ok}} & request_buffer_index); 

/*===============================bank we logic=================================*/

		assign way_bank_wea[i][j] = {4{wr_match_way_bank[i][j]}} & write_buffer_wstrb | 
									{4{main_state_is_refill && (way_wr_en[i] && (miss_buffer_ret_num == j[1:0]))}} & 4'hf;

/*===============================bank dina logic=================================*/

		assign way_bank_dina[i][j] = {32{write_state_is_full}}  & write_buffer_wdata |
                                     {32{main_state_is_refill}} & refill_data        ;

/*===============================bank ena logic=================================*/

		assign way_bank_ena[i][j] = (!(request_buffer_uncache_en || cacop_op_mode0)) || main_state_is_idle || main_state_is_lookup;
	end
end
endgenerate

generate
for(i=0;i<2;i=i+1) begin:gen_tagv_way
/*===============================tagv addra logic=================================*/

assign way_tagv_addra[i] = {8{addr_ok }} & index                |
                           {8{!addr_ok}} & request_buffer_index ; 

/*===============================tagv ena logic=================================*/

assign way_tagv_ena[i] = (!request_buffer_uncache_en) || main_state_is_idle || main_state_is_lookup;

/*===============================tagv wea logic=================================*/

assign way_tagv_wea[i] = miss_buffer_replace_way[i] && main_state_is_refill &&
	                     ((ret_valid && ret_last) || cacop_op_mode0 || cacop_op_mode1 || cacop_op_mode2_hit_wr_buffer); //write at least 4B

/*===============================tagv dina logic=================================*/

assign way_tagv_dina[i] = (cacop_op_mode0 || cacop_op_mode1 || cacop_op_mode2_hit_wr_buffer) ? 21'b0 : {request_buffer_tag, 1'b1};
end
endgenerate
/*==============================================================================*/

generate
for(i=0;i<2;i=i+1) begin:data_ram_way
	for(j=0;j<4;j=j+1) begin:data_ram_bank
		data_bank_sram u(
    		.addra      (way_bank_addra[i][j]),
    		.clka       (clk                 ),
    		.dina       (way_bank_dina[i][j] ),
    		.douta      (way_bank_douta[i][j]),
    		.ena        (way_bank_ena[i][j]  ),
    		.wea        (way_bank_wea[i][j]  )  
		);
	end
end
endgenerate

generate
for(i=0;i<2;i=i+1) begin:tagv_ram_way
	//[20:1] tag     [0:0] v
	tagv_sram u( 
	    .addra      (way_tagv_addra[i]),
	    .clka       (clk              ),
	    .dina       (way_tagv_dina[i] ),
	    .douta      (way_tagv_douta[i]),
	    .ena        (way_tagv_ena[i]  ),
	    .wea        (way_tagv_wea[i]  )
	);
end
endgenerate

lfsr lfsr(
    .clk        (clk        ),
    .reset      (reset      ),
    .random_val (random_val )
);

assign main_state_is_idle    = main_state == main_idle   ;
assign main_state_is_lookup  = main_state == main_lookup ;
assign main_state_is_miss    = main_state == main_miss   ;
assign main_state_is_replace = main_state == main_replace;
assign main_state_is_refill  = main_state == main_refill ;

assign write_state_is_idle  = (write_buffer_state == write_buffer_idle) ;
assign write_state_is_full = (write_buffer_state == write_buffer_write);

endmodule

`ifdef SIMU
module data_bank_sram
#(
    parameter WIDTH = 32    ,
    parameter DEPTH = 256
)
(
    input  [ 7:0]          addra   ,
    input                  clka    ,
    input  [31:0]          dina    ,
    output [31:0]          douta   ,
    input                  ena     ,
    input  [ 3:0]          wea      
);

reg [31:0] mem_reg [255:0];
reg [31:0] output_buffer;

always @(posedge clka) begin
    if (ena) begin
        if (wea) begin
            if (wea[0]) begin
                mem_reg[addra][ 7: 0] <= dina[ 7: 0]; 
            end 

            if (wea[1]) begin
                mem_reg[addra][15: 8] <= dina[15: 8];
            end

            if (wea[2]) begin
                mem_reg[addra][23:16] <= dina[23:16];
            end

            if (wea[3]) begin
                mem_reg[addra][31:24] <= dina[31:24];
            end
        end
        else begin
            output_buffer <= mem_reg[addra];
        end
    end
end

assign douta = output_buffer;

endmodule 

module tagv_sram
#( 
    parameter WIDTH = 21    ,
    parameter DEPTH = 256
)
( 
    input  [ 7:0]          addra   ,
    input                  clka    ,
    input  [20:0]          dina    ,
    output [20:0]          douta   ,
    input                  ena     ,
    input                  wea 
);

reg [20:0] mem_reg [255:0];
reg [20:0] output_buffer;

always @(posedge clka) begin
    if (ena) begin
        if (wea) begin
            mem_reg[addra] <= dina;
        end
        else begin
            output_buffer <= mem_reg[addra];
        end
    end
end

assign douta = output_buffer;

endmodule
`endif

module lfsr
( 
    input           clk         ,
    input           reset       ,

    output [1:0]    random_val  
);

reg [7:0] r_lfsr;

always @(posedge clk) begin
    if (reset) begin
        r_lfsr <= 8'b1;
    end
    else begin
        r_lfsr[0] <= r_lfsr[7];
        r_lfsr[1] <= r_lfsr[0];
        r_lfsr[2] <= r_lfsr[1];
        r_lfsr[3] <= r_lfsr[2];
        r_lfsr[4] <= r_lfsr[3] ^ r_lfsr[7];
        r_lfsr[5] <= r_lfsr[4] ^ r_lfsr[7];
        r_lfsr[6] <= r_lfsr[5] ^ r_lfsr[7];
        r_lfsr[7] <= r_lfsr[6];
    end
end

assign random_val = r_lfsr[7:6];

endmodule
