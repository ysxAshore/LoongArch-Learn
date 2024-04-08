module icache (
    input clk,
    input resetn,

    //与CPU交互的信�?
    input  wire        valid,    //访存有效信号
    input  wire        op,       //高表示写，低表示�?
    input  wire [ 7:0] index,    //va[11:4]
    input  wire [19:0] tag,      //pa[31:12]
    input  wire [ 3:0] offset,   //va[3:0]
    input  wire [ 3:0] wstrb,    //字节写�??
    input  wire [31:0] wdata,    //写数�?
    input  wire        uncache,
    input  wire [2:0]  size,
    output wire        addr_ok,  //握手信号—�?�类似类SRAM
    output wire        data_ok,
    output wire [31:0] rdata,    //读数�?

    input               icacop_en    ,
    input  [ 1:0]       icacop_mode  ,
    input  [19:0]       icacop_tag   ,
    input  [ 7:0]       icacop_index ,
    input  [ 3:0]       icacop_offset,
    output              icacop_ok    ,
 
    //与AXI交互
    output wire rd_req,  //发�?�给AXI总线转接桥的读请求信�?
    output wire [2:0] rd_type,  //读类型，也表示了原来类SRAM-AXI转接桥的size信号
    output wire [31:0] rd_addr,  //读地�?
    input wire rd_rdy,  //转接桥返回的握手信号，请求可以被接受
    input wire ret_valid,  //返回的是有效数据
    input wire ret_last,  //是否是最后一个有效数据返�?
    input wire [31:0] ret_data,  //读数�?
    output reg wr_req,  //写AXI请求
    output wire [2:0] wr_type,  //写类�?
    output wire [31:0] wr_addr,
    output wire [3:0] wr_wstrb,
    output wire [127:0] wr_data,
    input wire wr_rdy //因为写是�?次�?�将128个全写到AXI总线的写缓冲上，由它来Brust，所以需要有写缓冲空可以接收新请求的wr_rdy信号
                      //对于ICache，wr_rdy始终�?1
);
  //D
  reg [255:0] way0_D;
  reg [255:0] way1_D;

  //Tag 20:1 V 0
  wire way0_tagv_ena;
  wire way0_tagv_wea;
  wire [7:0] way0_tagv_addra;
  wire [20:0] way0_tagv_dina;
  wire [20:0] way0_tagv_dout;

  wire way1_tagv_ena;
  wire way1_tagv_wea;
  wire [7:0] way1_tagv_addra;
  wire [20:0] way1_tagv_dina;
  wire [20:0] way1_tagv_dout;

  //Data Bank
  wire way0_bank0_ena;
  wire [3:0] way0_bank0_wea;  //字节�?
  wire [7:0] way0_bank0_addr;
  wire [31:0] way0_bank0_dina;
  wire [31:0] way0_bank0_dout;

  wire way0_bank1_ena;
  wire [3:0] way0_bank1_wea;  //字节�?
  wire [7:0] way0_bank1_addr;
  wire [31:0] way0_bank1_dina;
  wire [31:0] way0_bank1_dout;

  wire way0_bank2_ena;
  wire [3:0] way0_bank2_wea;  //字节�?
  wire [7:0] way0_bank2_addr;
  wire [31:0] way0_bank2_dina;
  wire [31:0] way0_bank2_dout;

  wire way0_bank3_ena;
  wire [3:0] way0_bank3_wea;  //字节�?
  wire [7:0] way0_bank3_addr;
  wire [31:0] way0_bank3_dina;
  wire [31:0] way0_bank3_dout;

  wire way1_bank0_ena;
  wire [3:0] way1_bank0_wea;  //字节�?
  wire [7:0] way1_bank0_addr;
  wire [31:0] way1_bank0_dina;
  wire [31:0] way1_bank0_dout;

  wire way1_bank1_ena;
  wire [3:0] way1_bank1_wea;  //字节�?
  wire [7:0] way1_bank1_addr;
  wire [31:0] way1_bank1_dina;
  wire [31:0] way1_bank1_dout;

  wire way1_bank2_ena;
  wire [3:0] way1_bank2_wea;  //字节�?
  wire [7:0] way1_bank2_addr;
  wire [31:0] way1_bank2_dina;
  wire [31:0] way1_bank2_dout;

  wire way1_bank3_ena;
  wire [3:0] way1_bank3_wea;  //字节�?
  wire [7:0] way1_bank3_addr;
  wire [31:0] way1_bank3_dina;
  wire [31:0] way1_bank3_dout;

  //状�?�常量定�?
  parameter MAIN_IDLE = 3'b000;
  parameter MAIN_LOOKUP = 3'b001;
  parameter MAIN_MISS = 3'b010;
  parameter MAIN_REPLACE = 3'b011;
  parameter MAIN_REFILL = 3'b100;
  parameter WRITE_IDLE = 1'b0;
  parameter WRITE_WRITE = 1'b1;

  //Write Buffer相关信息
  reg wirteBuffer_way;
  reg [3:0] writeBuffer_offset;
  reg [7:0] writeBuffer_index;
  reg [3:0] writeBuffer_wstrb;
  reg [31:0] writeBuffer_wdata;

  reg [2:0] cache_state;  //主状态机当前状�??
  reg write_state;

  /* -------------------------IDLE相关信号-------------------------------*/
  wire idle2lookup_able;  //当写已经进入Write Buffer发出写请求时的阻�?

  /* -------------------------LOOKUP相关信号-----------------------------*/
  //Request Buffer相关信息
  reg requestBuffer_op;
  reg requestBuffer_uncache;
  reg [2:0] requestBuffer_size;
  reg [7:0] requestBuffer_index;
  reg [19:0] requestBuffer_tag;
  reg [3:0] requestBuffer_offset;
  reg [3:0] requestBuffer_wstrb;
  reg [31:0] requestBuffer_wdata;
  reg         requestBuffer_icacop_en  ;
  reg [ 1:0]  requestBuffer_icacop_mode;
  reg [19:0]  requestBuffer_icacop_tag ;
  reg [ 7:0]  requestBuffer_icacop_index;
  reg [ 3:0]  requestBuffer_icacop_offset;

  //Tag Compare相关信息
  wire way0_v;
  wire way1_v;
  wire [19:0] way0_tag;
  wire [19:0] way1_tag;
  wire way0_hit;
  wire way1_hit;
  wire cache_hit;

  //Data Select相关信息
  wire [127:0] way0_data;
  wire [127:0] way1_data;
  wire [31:0] way0_load_word;
  wire [31:0] way1_load_word;
  wire [127:0] replace_data;

  wire lookup2lookup_able;  //当写已经进入Write Buffer发出写请求时的阻�?
  reg loadForward;
  wire [31:0] forwardData;
  wire [31:0] hitData;
  wire [31:0] load_res;

  /* -------------------------MISS and REPLACE相关信号-----------------------------*/
  wire chosen_way;
  wire replace_way;
  wire way0_d;
  wire way1_d;
  wire replace_d;
  wire replace_v;
  wire [19:0] replace_tag;

  //Miss Buffer相关信息
  reg missBuffer_replaceWay;  //因为到达refill时有好几个时钟，�?以需要缓�?
  reg [1:0] missBuffer_retNum;  //这里参�?�答案的用了�?个wire 异或对它进行赋�??

  /* -------------------------REFILL相关信号-----------------------------*/
  wire [31:0] write_in;
  wire [31:0] refill_data;
  wire refill_write_way0;
  wire refill_write_way1;

  reg rd_req_buffer; //缓存rd_req,当没有rd_req时，REFILL直接到IDLE

  //写信�?
  wire match_way0_bank0;
  wire match_way0_bank1;
  wire match_way0_bank2;
  wire match_way0_bank3;
  wire match_way1_bank0;
  wire match_way1_bank1;
  wire match_way1_bank2;
  wire match_way1_bank3;

  wire [31:0] bank_dina;
  //主状态机
  always @(posedge clk) begin
    if (~resetn) begin
      cache_state           <= MAIN_IDLE;

      requestBuffer_op      <= 1'b0;
      requestBuffer_index   <= 8'b0;
      requestBuffer_tag     <= 20'b0;
      requestBuffer_offset  <= 4'b0;
      requestBuffer_wstrb   <= 4'b0;
      requestBuffer_wdata   <= 32'b0;
      requestBuffer_size <= 3'b0;
      requestBuffer_uncache <= 1'b0;

      requestBuffer_icacop_en  <=  1'b0;
      requestBuffer_icacop_mode<=  2'b0;
      requestBuffer_icacop_tag <= 20'b0;
      requestBuffer_icacop_index<= 8'b0;
      requestBuffer_icacop_offset<=4'b0;

      missBuffer_replaceWay <= 1'b0;

      wr_req                <= 1'b0;
    end else begin
      case (cache_state)
        MAIN_IDLE: begin
          if ((valid | icacop_en) & idle2lookup_able) begin
            cache_state          <= MAIN_LOOKUP;

            requestBuffer_uncache <= uncache;
            requestBuffer_size <= size;

            requestBuffer_op     <= op;
            requestBuffer_index  <= index;
            requestBuffer_tag    <= tag;
            requestBuffer_offset <= offset;
            requestBuffer_wstrb  <= wstrb;
            requestBuffer_wdata  <= wdata;

            requestBuffer_icacop_en  <= icacop_en;
		        requestBuffer_icacop_mode<= icacop_mode;
		        requestBuffer_icacop_tag <= icacop_tag;
		        requestBuffer_icacop_index <= icacop_index;
		        requestBuffer_icacop_offset <= icacop_offset;
          end
        end

        MAIN_LOOKUP: begin
          if (valid & lookup2lookup_able) begin
            cache_state          <= MAIN_LOOKUP;

            requestBuffer_uncache <= uncache & ~icacop_en; //当icacop有效时，禁止直接访问 �?
            requestBuffer_size <= size;

            requestBuffer_op     <= op;
            requestBuffer_index  <= index;
            requestBuffer_tag    <= tag;
            requestBuffer_offset <= offset;
            requestBuffer_wstrb  <= wstrb;
            requestBuffer_wdata  <= wdata;
          end else if (~cache_hit) begin
            cache_state <= MAIN_MISS;
          end else begin
            cache_state <= MAIN_IDLE;
          end
        end

        MAIN_MISS: begin
          //如果当前是非缓存读，那么就不存在写AXI，也就不�?要等待wr_rdy
          if (wr_rdy) begin  //req要在rdy之后有效，这里始终为1'b1
            cache_state <= MAIN_REPLACE; 

            missBuffer_replaceWay <= replace_way;
            wr_req <= replace_d & replace_v & ~requestBuffer_uncache ;
          end
        end

        MAIN_REPLACE: begin
          if (rd_rdy) begin 
            cache_state <= MAIN_REFILL;

            //�?始记录读了几�? 当是100时已读完
            missBuffer_retNum <= 2'b0;
          end
          if (wr_req) begin
            wr_req <= 1'b0;
          end
        end

        MAIN_REFILL: begin
          if (ret_valid & ret_last | ~rd_req_buffer) begin  //答案上多了一个缓存判断是否有读请�?
            cache_state <= MAIN_IDLE;
          end else if (ret_valid) begin
            missBuffer_retNum <= missBuffer_retNum + 2'b01;
          end
        end
        default: cache_state <= MAIN_IDLE;
      endcase
    end
  end

  //Write状�?�机
  always @(posedge clk) begin
    if (~resetn) begin
      write_state <= WRITE_IDLE;

      wirteBuffer_way <= 1'b0;
      writeBuffer_index <= 8'b0;
      writeBuffer_wstrb <= 4'b0;
      writeBuffer_wdata <= 32'b0;
      writeBuffer_offset <= 4'b0;
    end else begin
      case (write_state)
        WRITE_IDLE: begin
          if (cache_state == MAIN_LOOKUP & cache_hit & requestBuffer_op) begin
            write_state <= WRITE_WRITE;

            wirteBuffer_way <= way1_hit;
            writeBuffer_index <= requestBuffer_index;
            writeBuffer_wstrb <= requestBuffer_wstrb;
            writeBuffer_wdata <= requestBuffer_wdata;
            writeBuffer_offset <= requestBuffer_offset;
          end
        end

        WRITE_WRITE: begin
          if (cache_state == MAIN_LOOKUP & cache_hit & requestBuffer_op) begin
            write_state <= WRITE_WRITE;

            wirteBuffer_way <= way1_hit;
            writeBuffer_index <= requestBuffer_index;
            writeBuffer_wstrb <= requestBuffer_wstrb;
            writeBuffer_wdata <= requestBuffer_wdata;
            writeBuffer_offset <= requestBuffer_offset;
          end else begin
            write_state <= WRITE_IDLE;
          end
        end

        default: write_state <= WRITE_IDLE;
      endcase
    end
  end

  /* ---------------------------------------------MAIN IDLE信号生成---------------------------------------------- */
  //icache不存在写，因此idle2lookup始终�?1'b1
  assign idle2lookup_able = 1'b1;

  assign icacop_ok = (cache_state == MAIN_IDLE) & icacop_en;//已经在idle时响应了icacop_en，流水线可以�?后移�?

  /* ---------------------------------------------MAIN LOOKUP信号生成-------------------------------------------- */
  //icache不存在写，因此lookup2lookup即为cache_hit
  assign lookup2lookup_able = cache_hit;

  assign way0_v = way0_tagv_dout[0];
  assign way1_v = way1_tagv_dout[0];
  assign way0_tag = way0_tagv_dout[20:1];
  assign way1_tag = way1_tagv_dout[20:1];

  assign way0_hit = way0_v & (requestBuffer_tag == way0_tag);
  assign way1_hit = way1_v & (requestBuffer_tag == way1_tag);
  assign cache_hit = (way0_hit | way1_hit) & ~requestBuffer_uncache; //当icacop时cache hit不能命中uncache�?1时一定不命中

  assign way0_data = {way0_bank3_dout, way0_bank2_dout, way0_bank1_dout, way0_bank0_dout};
  assign way1_data = {way1_bank3_dout, way1_bank2_dout, way1_bank1_dout, way1_bank0_dout};
  assign way0_load_word = way0_data[32*requestBuffer_offset[3:2]+:32];//�?32*requestBuffer_offset位置�?高位�?32位数�?
  assign way1_load_word = way1_data[32*requestBuffer_offset[3:2]+:32];

  always @(posedge clk) begin
    if (~resetn) begin
      loadForward <= 1'b0;
    end else if (loadForward) begin
      loadForward <= 1'b0;
    end else begin
      loadForward <=  requestBuffer_op  && !op && requestBuffer_offset[3:2] == offset[3:2] & requestBuffer_index == index & requestBuffer_tag == tag & cache_hit;
    end
  end
  //这个write_buffer_wdata   assign data_sram_wdata = {32{memINS_rec == 2'b01}} & {4{forwardDataB[7:0]}} |{32{memINS_rec == 2'b10}} & {2{forwardDataB[15:0]}}|{32{memINS_rec == 2'b11}} & forwardDataB;
  assign hitData = {32{way0_hit}} & way0_load_word | {32{way1_hit}} & way1_load_word;
  assign forwardData = {
    writeBuffer_wstrb[3] ? writeBuffer_wdata[31:24] : hitData[31:24],
    writeBuffer_wstrb[2] ? writeBuffer_wdata[23:16] : hitData[23:16],
    writeBuffer_wstrb[1] ? writeBuffer_wdata[15:8] : hitData[15:8],
    writeBuffer_wstrb[0] ? writeBuffer_wdata[7:0] : hitData[7:0]
  };
  assign load_res = loadForward ? forwardData : hitData;

  /* ---------------------------------------------MAIN MISS信号生成-------------------------------------------- */
  assign replace_way = (~way1_v | chosen_way) & way0_v;  //画真值表
  assign way0_d = way0_D[requestBuffer_index];
  assign way1_d = way0_D[requestBuffer_index];
  assign replace_d = replace_way ? way1_d : way0_d;
  assign replace_v = replace_way ? way1_v : way0_v;

  /* ---------------------------------------------MAIN REPLACE信号生成-------------------------------------------- */
  assign replace_data = missBuffer_replaceWay ? way1_data : way0_data; //这里也可以用replace way 在即将进入replace�?
  assign replace_tag = missBuffer_replaceWay ? way1_tag : way0_tag;

  assign wr_addr = requestBuffer_uncache ? {requestBuffer_tag,requestBuffer_index,requestBuffer_offset} : {replace_tag, requestBuffer_index, 4'b0};  //起始地址
  assign wr_type = requestBuffer_uncache ? requestBuffer_size : 3'b100;  //�?16B
  assign wr_data = requestBuffer_uncache ? {96'b0, requestBuffer_wdata} :replace_data;
  assign wr_wstrb = requestBuffer_uncache ? requestBuffer_wstrb : 4'b1111;

  assign rd_req = cache_state == MAIN_REPLACE & ~(requestBuffer_uncache & requestBuffer_op);//在REPLACE且不是非缓存�?
  assign rd_type = requestBuffer_uncache ? requestBuffer_size : 3'b100;
  assign rd_addr = requestBuffer_uncache ? {requestBuffer_tag,requestBuffer_index,requestBuffer_offset} : {requestBuffer_tag, requestBuffer_index, 4'b0};

  /*----------------------------------------------MAIN REFILL信号生成----------------------------------------------- */
  always @(posedge clk) begin
    if (~resetn) begin
        rd_req_buffer <= 1'b0;
    end
    else if (rd_req) begin
        rd_req_buffer <= 1'b1;
    end
    else if (cache_state == MAIN_REFILL & ret_valid & ret_last) begin
        rd_req_buffer <= 1'b0;
    end
end
  
  assign write_in = {
    requestBuffer_wstrb[3] ? requestBuffer_wdata[31:24] : ret_data[31:24],
    requestBuffer_wstrb[2] ? requestBuffer_wdata[23:16] : ret_data[23:16],
    requestBuffer_wstrb[1] ? requestBuffer_wdata[15:8] : ret_data[15:8],
    requestBuffer_wstrb[0] ? requestBuffer_wdata[7:0] : ret_data[7:0]
  };
  assign refill_data = (requestBuffer_op & (requestBuffer_offset[3:2] == missBuffer_retNum)) ? write_in : ret_data;//其他的直接用ret填充
  assign refill_write_way0 = ~missBuffer_replaceWay & ret_valid;
  assign refill_write_way1 = missBuffer_replaceWay & ret_valid;
  /*-----------------------------------------------CACOP Hit-------------------------------------------------------- */
  //设置是不�?要到后面，在idle lookup就完�?
  wire way0_cacop_hit;
  wire way1_cacop_hit;
  wire cache_cacop_hit;

  assign way0_cacop_hit = way0_v & (requestBuffer_icacop_tag == way0_tag) & (requestBuffer_icacop_mode == 2'h2) & requestBuffer_icacop_en;
  assign way1_cacop_hit = way1_v & (requestBuffer_icacop_tag == way1_tag) & (requestBuffer_icacop_mode == 2'h2) & requestBuffer_icacop_en ;
  assign cache_cacop_hit = way0_cacop_hit | way1_cacop_hit;

  /*-----------------------------------------------WRITE CACHE------------------------------------------------------ */
  //写D
  always @(posedge clk) begin
    if (~resetn) begin
      way0_D <= 256'b0;
      way1_D <= 256'b0;
    end else if (cache_state == MAIN_REFILL & (ret_valid & ret_last == 1'b1) | ~rd_req_buffer) begin
      if (refill_write_way1) begin
        way0_D[requestBuffer_index] <= requestBuffer_op;
      end else if (refill_write_way0) begin
        way1_D[requestBuffer_index] <= requestBuffer_op;
      end
    end else if (write_state == WRITE_WRITE) begin
      if (wirteBuffer_way) begin
        way1_D[writeBuffer_index] <= 1'b1;
      end else begin
        way0_D[writeBuffer_index] <= 1'b1;
      end
    end
  end

  //SRMA write only valid when wea & ena equal 1'b1

  //写TAG,V 写命中时不需要更改TAG和V
  //cacop code[4:3] = 2'h0 清空�?有路的tag
  //cacop code[4:3] = 2'h1 清空offset[0]路的V D不可能是脏的，所以也不需要写�?
  //cacop code[4:3] = 2'h2 清空命中路的V

  assign way0_tagv_addra = addr_ok | icacop_en & cache_state == MAIN_IDLE ? (icacop_en ? icacop_index : index) : 
                           requestBuffer_icacop_mode == 2'h2 & cache_cacop_hit ? requestBuffer_icacop_index : requestBuffer_index;//读的时�?�要在进入LOOKUP之前就得到信�?
  assign way1_tagv_addra = addr_ok | icacop_en & cache_state == MAIN_IDLE ? (icacop_en ? icacop_index : index) : 
                           requestBuffer_icacop_mode == 2'h2 & cache_cacop_hit ? requestBuffer_icacop_index : requestBuffer_index;//读的时�?�要在进入LOOKUP之前就得到信�?
  assign way0_tagv_ena = cache_state == MAIN_IDLE | ~requestBuffer_uncache;
  assign way1_tagv_ena = cache_state == MAIN_IDLE | ~requestBuffer_uncache;
  assign way0_tagv_wea = cache_state == MAIN_REFILL & (ret_valid & ret_last == 1'b1) & ~missBuffer_replaceWay & ~requestBuffer_uncache |
                         (cache_state == MAIN_IDLE & icacop_en & (icacop_mode == 2'h0 | icacop_mode == 2'h1 & ~icacop_offset[0]) | (requestBuffer_icacop_mode == 2'h2 & way0_cacop_hit));
  assign way1_tagv_wea = cache_state == MAIN_REFILL & (ret_valid & ret_last == 1'b1) & missBuffer_replaceWay & ~requestBuffer_uncache |
                         (cache_state == MAIN_IDLE & icacop_en & (icacop_mode == 2'h0 | icacop_mode == 2'h1 & icacop_offset[0]) | (requestBuffer_icacop_mode == 2'h2 & way1_cacop_hit));
  assign way0_tagv_dina = icacop_mode == 2'h0 & cache_state == MAIN_IDLE & icacop_en ? {20'b0,way0_v} :
                          icacop_mode == 2'h1 & cache_state == MAIN_IDLE & icacop_en | requestBuffer_icacop_mode == 2'h2 & cache_cacop_hit ? {way0_tag,1'b0} :
                          {requestBuffer_tag, 1'b1};
  assign way1_tagv_dina = icacop_mode == 2'h0 & cache_state == MAIN_IDLE & icacop_en ? {20'b0,way1_v} :
                          icacop_mode == 2'h1 & cache_state == MAIN_IDLE & icacop_en | requestBuffer_icacop_mode == 2'h2 & cache_cacop_hit ? {way1_tag,1'b0} :
                          {requestBuffer_tag, 1'b1};

  //写BANK 写命中需要写
  assign match_way0_bank0 = write_state == WRITE_WRITE & writeBuffer_offset == 2'h0 & ~wirteBuffer_way;
  assign match_way0_bank1 = write_state == WRITE_WRITE & writeBuffer_offset == 2'h1 & ~wirteBuffer_way;
  assign match_way0_bank2 = write_state == WRITE_WRITE & writeBuffer_offset == 2'h2 & ~wirteBuffer_way;
  assign match_way0_bank3 = write_state == WRITE_WRITE & writeBuffer_offset == 2'h3 & ~wirteBuffer_way;
  assign match_way1_bank0 = write_state == WRITE_WRITE & writeBuffer_offset == 2'h0 & wirteBuffer_way;
  assign match_way1_bank1 = write_state == WRITE_WRITE & writeBuffer_offset == 2'h1 & wirteBuffer_way;
  assign match_way1_bank2 = write_state == WRITE_WRITE & writeBuffer_offset == 2'h2 & wirteBuffer_way;
  assign match_way1_bank3 = write_state == WRITE_WRITE & writeBuffer_offset == 2'h3 & wirteBuffer_way;

  assign way0_bank0_addr = match_way0_bank0 ? writeBuffer_index : (addr_ok ? index : requestBuffer_index);
  assign way0_bank1_addr = match_way0_bank1 ? writeBuffer_index : (addr_ok ? index : requestBuffer_index);
  assign way0_bank2_addr = match_way0_bank2 ? writeBuffer_index : (addr_ok ? index : requestBuffer_index);
  assign way0_bank3_addr = match_way0_bank3 ? writeBuffer_index : (addr_ok ? index : requestBuffer_index);
  assign way1_bank0_addr = match_way1_bank0 ? writeBuffer_index : (addr_ok ? index : requestBuffer_index);
  assign way1_bank1_addr = match_way1_bank1 ? writeBuffer_index : (addr_ok ? index : requestBuffer_index);
  assign way1_bank2_addr = match_way1_bank2 ? writeBuffer_index : (addr_ok ? index : requestBuffer_index);
  assign way1_bank3_addr = match_way1_bank3 ? writeBuffer_index : (addr_ok ? index : requestBuffer_index);

  assign way0_bank0_ena = cache_state == MAIN_IDLE | ~requestBuffer_uncache; 
  assign way0_bank1_ena = cache_state == MAIN_IDLE | ~requestBuffer_uncache;
  assign way0_bank2_ena = cache_state == MAIN_IDLE | ~requestBuffer_uncache;
  assign way0_bank3_ena = cache_state == MAIN_IDLE | ~requestBuffer_uncache;
  assign way1_bank0_ena = cache_state == MAIN_IDLE | ~requestBuffer_uncache;
  assign way1_bank1_ena = cache_state == MAIN_IDLE | ~requestBuffer_uncache;
  assign way1_bank2_ena = cache_state == MAIN_IDLE | ~requestBuffer_uncache;
  assign way1_bank3_ena = cache_state == MAIN_IDLE | ~requestBuffer_uncache;

  assign bank_dina = {32{write_state == WRITE_WRITE}}   & writeBuffer_wdata |
                     {32{cache_state == MAIN_REFILL}}   & refill_data         ;
  assign way0_bank0_dina = bank_dina;
  assign way0_bank1_dina = bank_dina;
  assign way0_bank2_dina = bank_dina;
  assign way0_bank3_dina = bank_dina;
  assign way1_bank0_dina = bank_dina;
  assign way1_bank1_dina = bank_dina;
  assign way1_bank2_dina = bank_dina;
  assign way1_bank3_dina = bank_dina;

  assign way0_bank0_wea = {4{match_way0_bank0}} & writeBuffer_wstrb |
                           {4{cache_state == MAIN_REFILL & refill_write_way0 & missBuffer_retNum[1:0] == 2'h0 & ~requestBuffer_uncache}} & 4'hf;
  assign way0_bank1_wea = {4{match_way0_bank1}} & writeBuffer_wstrb |
                           {4{cache_state == MAIN_REFILL & refill_write_way0 & missBuffer_retNum[1:0] == 2'h1 & ~requestBuffer_uncache}} & 4'hf;
  assign way0_bank2_wea = {4{match_way0_bank2}} & writeBuffer_wstrb |
                           {4{cache_state == MAIN_REFILL & refill_write_way0 & missBuffer_retNum[1:0] == 2'h2 & ~requestBuffer_uncache}} & 4'hf;
  assign way0_bank3_wea = {4{match_way0_bank3}} & writeBuffer_wstrb |
                           {4{cache_state == MAIN_REFILL & refill_write_way0 & missBuffer_retNum[1:0] == 2'h3 & ~requestBuffer_uncache}} & 4'hf;
  assign way1_bank0_wea = {4{match_way1_bank0}} & writeBuffer_wstrb |
                           {4{cache_state == MAIN_REFILL & refill_write_way1 & missBuffer_retNum[1:0] == 2'h0 & ~requestBuffer_uncache}} & 4'hf;
  assign way1_bank1_wea = {4{match_way1_bank1}} & writeBuffer_wstrb |
                           {4{cache_state == MAIN_REFILL & refill_write_way1 & missBuffer_retNum[1:0] == 2'h1 & ~requestBuffer_uncache}} & 4'hf;
  assign way1_bank2_wea = {4{match_way1_bank2}} & writeBuffer_wstrb |
                           {4{cache_state == MAIN_REFILL & refill_write_way1 & missBuffer_retNum[1:0] == 2'h2 & ~requestBuffer_uncache}} & 4'hf;
  assign way1_bank3_wea = {4{match_way1_bank3}} & writeBuffer_wstrb |
                           {4{cache_state == MAIN_REFILL & refill_write_way1 & missBuffer_retNum[1:0] == 2'h3 & ~requestBuffer_uncache}} & 4'hf;

  /*----------------------------------------------------外部信号--------------------------------------------*/
  assign addr_ok = ((cache_state == MAIN_IDLE & idle2lookup_able) | (cache_state == MAIN_LOOKUP & lookup2lookup_able)) & ~requestBuffer_icacop_en ;
  assign data_ok =  cache_hit & cache_state == MAIN_LOOKUP |
                    (cache_state == MAIN_REFILL & ret_valid & (requestBuffer_offset[3:2] == missBuffer_retNum[1:0] |
                    requestBuffer_uncache));//当读时只读了1�?
  //写时不需要使用这个互锁，读时是需要的；因为写时，如果写还在lookup那么可以直接前�?�，此时data_ok有效即可;如果不在，那么在writebuffer会阻塞读；如果读不命中，那么在refill完之后，写也就完成了，所以直接data_ok无影�?
  assign rdata = cache_hit ? load_res : ret_data; //这里这么写也没问题，因为cache_hit时data_ok也有效了，cahce没有hit，那就是refill

  /*----------------------------------------------------例化模块--------------------------------------------*/
  inst_way0_bank0 way0_bank0 (
      .addra(way0_bank0_addr),
      .clka (clk),
      .dina (way0_bank0_dina),
      .douta(way0_bank0_dout),
      .ena  (way0_bank0_ena),
      .wea  (way0_bank0_wea)
  );

  inst_way0_bank1 way0_bank1 (
      .addra(way0_bank1_addr),
      .clka (clk),
      .dina (way0_bank1_dina),
      .douta(way0_bank1_dout),
      .ena  (way0_bank1_ena),
      .wea  (way0_bank1_wea)
  );

  inst_way0_bank2 way0_bank2 (
      .addra(way0_bank2_addr),
      .clka (clk),
      .dina (way0_bank2_dina),
      .douta(way0_bank2_dout),
      .ena  (way0_bank2_ena),
      .wea  (way0_bank2_wea)
  );

  inst_way0_bank3 way0_bank3 (
      .addra(way0_bank3_addr),
      .clka (clk),
      .dina (way0_bank3_dina),
      .douta(way0_bank3_dout),
      .ena  (way0_bank3_ena),
      .wea  (way0_bank3_wea)
  );

  inst_way1_bank0 way1_bank0 (
      .addra(way1_bank0_addr),
      .clka (clk),
      .dina (way1_bank0_dina),
      .douta(way1_bank0_dout),
      .ena  (way1_bank0_ena),
      .wea  (way1_bank0_wea)
  );

  inst_way1_bank1 way1_bank1 (
      .addra(way1_bank1_addr),
      .clka (clk),
      .dina (way1_bank1_dina),
      .douta(way1_bank1_dout),
      .ena  (way1_bank1_ena),
      .wea  (way1_bank1_wea)
  );

  inst_way1_bank2 way1_bank2 (
      .addra(way1_bank2_addr),
      .clka (clk),
      .dina (way1_bank2_dina),
      .douta(way1_bank2_dout),
      .ena  (way1_bank2_ena),
      .wea  (way1_bank2_wea)
  );

  inst_way1_bank3 way1_bank3 (
      .addra(way1_bank3_addr),
      .clka (clk),
      .dina (way1_bank3_dina),
      .douta(way1_bank3_dout),
      .ena  (way1_bank3_ena),
      .wea  (way1_bank3_wea)
  );

  //[20:1] tag     [0:0] v
  inst_tagv_way0 way0_tagv (
      .addra(way0_tagv_addra),
      .clka (clk),
      .dina (way0_tagv_dina),
      .douta(way0_tagv_dout),
      .ena  (way0_tagv_ena),
      .wea  (way0_tagv_wea)
  );

  inst_tagv_way1 way1_tagv (
      .addra(way1_tagv_addra),
      .clka (clk),
      .dina (way1_tagv_dina),
      .douta(way1_tagv_dout),
      .ena  (way1_tagv_ena),
      .wea  (way1_tagv_wea)
  );

  lfsr lfsr (
      .clk       (clk),
      .resetn    (resetn),
      .random_val(chosen_way)
  );
endmodule

module lfsr (
    input clk,
    input resetn,

    output random_val
);

  reg [7:0] r_lfsr;

  always @(posedge clk) begin
    if (~resetn) begin
      r_lfsr <= 8'b0101_1001;  //种子
    end else begin
      r_lfsr[0] <= r_lfsr[7] ^ r_lfsr[5] ^ r_lfsr[3] ^ r_lfsr[2];
      r_lfsr[1] <= r_lfsr[0];
      r_lfsr[2] <= r_lfsr[1];
      r_lfsr[3] <= r_lfsr[2];
      r_lfsr[4] <= r_lfsr[3];
      r_lfsr[5] <= r_lfsr[4];
      r_lfsr[6] <= r_lfsr[5];
      r_lfsr[7] <= r_lfsr[6];
    end
  end

  assign random_val = r_lfsr[7];

endmodule
//改了lfsr、bank的ena、少了一个rd_req缓存，使能ena由idle判断改成了addr_ok