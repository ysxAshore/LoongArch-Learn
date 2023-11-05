module axi_bridge(
    input wire clk,
    input wire reset,

    output reg  [ 3:0] arid,
    output reg  [31:0] araddr,
    output reg  [ 7:0] arlen,
    output reg  [ 2:0] arsize,
    output wire [ 1:0] arburst,
    output wire [ 1:0] arlock,
    output wire [ 3:0] arcache,
    output wire [ 2:0] arprot,
    output reg         arvalid,
    input  wire        arready,

    input  wire [ 3:0] rid,
    input  wire [31:0] rdata,
    input  wire [ 1:0] rresp,
    input  wire        rlast,
    input  wire        rvalid,
    output reg         rready,

    output wire [ 3:0] awid,
    output reg  [31:0] awaddr,
    output reg  [ 7:0] awlen,
    output reg  [ 2:0] awsize,
    output wire [ 1:0] awburst,
    output wire [ 1:0] awlock,
    output wire [ 3:0] awcache,
    output wire [ 2:0] awprot,
    output reg         awvalid,
    input  wire        awready,

    output wire [ 3:0] wid,
    output reg  [31:0] wdata,
    output reg  [ 3:0] wstrb,
    output reg         wlast,
    output reg         wvalid,
    input  wire        wready,

    input  wire  [ 3:0] bid,
    input  wire  [ 1:0] bresp,
    input  wire         bvalid,
    output reg          bready,

    input  wire           inst_rd_req     ,
    input  wire [ 2:0]    inst_rd_type    ,
    input  wire [31:0]    inst_rd_addr    ,
    output wire           inst_rd_rdy     ,
    output wire           inst_ret_valid  ,
    output wire           inst_ret_last   ,
    output wire [31:0]    inst_ret_data   ,
    input  wire           inst_wr_req     ,
    input  wire [ 2:0]    inst_wr_type    ,
    input  wire [31:0]    inst_wr_addr    ,
    input  wire [ 3:0]    inst_wr_wstrb   ,
    input  wire [127:0]   inst_wr_data    ,
    output wire           inst_wr_rdy     ,

    input  wire           data_rd_req     ,
    input  wire [ 2:0]    data_rd_type    ,
    input  wire [31:0]    data_rd_addr    ,
    output wire           data_rd_rdy     ,
    output wire           data_ret_valid  ,
    output wire           data_ret_last   ,
    output wire [31:0]    data_ret_data   ,
    input  wire           data_wr_req     ,
    input  wire [ 2:0]    data_wr_type    ,
    input  wire [31:0]    data_wr_addr    ,
    input  wire [ 3:0]    data_wr_wstrb   ,
    input  wire [127:0]   data_wr_data    ,
    output wire           data_wr_rdy     
);

//fixed signal
assign  arburst = 2'b1;
assign  arlock  = 2'b0;
assign  arcache = 4'b0;
assign  arprot  = 3'b0;
assign  awid    = 4'b1;
assign  awburst = 2'b1;
assign  awlock  = 2'b0;
assign  awcache = 4'b0;
assign  awprot  = 3'b0;
assign  wid     = 4'b1;


localparam read_requst_empty = 1'b0;
localparam read_requst_ready = 1'b1;
localparam write_request_empty = 3'b000;
localparam write_addr_ready = 3'b001;
localparam write_data_ready = 3'b010;
localparam write_all_ready = 3'b011;
localparam write_data_transform = 3'b100;
localparam write_data_wait = 3'b101;
localparam write_wait_b = 3'b110;

reg       read_requst_state;
reg [2:0] write_requst_state;

reg [127:0] write_buffer_data;
reg [  2:0] write_buffer_num;
wire        write_buffer_last;
assign write_buffer_last = write_buffer_num == 3'b1;

assign data_rd_rdy = (read_requst_state == read_requst_empty);
assign data_wr_rdy = (write_requst_state == write_request_empty);
assign inst_rd_rdy = !data_rd_req && (read_requst_state == read_requst_empty);
assign inst_wr_rdy = 1'b1;

assign inst_ret_valid = !rid[0] && rvalid;
assign inst_ret_data  = rdata;
assign inst_ret_last  = rlast;
assign data_ret_valid = rid[0] && rvalid;
assign data_ret_data  = rdata;
assign data_ret_last  = rlast;

always @(posedge clk) begin
    if (reset) begin
        read_requst_state <= read_requst_empty;
        arvalid <= 1'b0;
    end
    else case (read_requst_state)
        read_requst_empty: begin
            if (data_rd_req) begin
                read_requst_state <= read_requst_ready;
                arid <= 4'b1;
                araddr <= data_rd_addr;
                arsize <= (data_rd_type == 3'b100) ? 3'b10 : data_rd_type;
                arlen  <= (data_rd_type == 3'b100) ? 8'b11 : 8'b0;
                arvalid <= 1'b1;
            end
            else if (inst_rd_req) begin
                read_requst_state <= read_requst_ready;
                arid <= 4'b0;
                araddr <= inst_rd_addr;
                arsize <= (inst_rd_type == 3'b100) ? 3'b10 : inst_rd_type;
                arlen  <= (inst_rd_type == 3'b100) ? 8'b11 : 8'b0;
                arvalid <= 1'b1;
            end
        end
        read_requst_ready: begin
            if (arready) begin
                read_requst_state <= read_requst_empty;
                arvalid <= 1'b0;
            end
        end
    endcase
end

always @(posedge clk) begin
    if (reset) begin
        rready <= 1'b1;
    end
end

always @(posedge clk) begin
    if (reset) begin
        write_requst_state <= write_request_empty;
        awvalid <= 1'b0;
        wvalid  <= 1'b0;
        wlast   <= 1'b0;
        bready  <= 1'b0;

        write_buffer_num   <= 3'b0;
        write_buffer_data  <= 128'b0;
    end
    else case (write_requst_state)
        write_request_empty: begin
            if (data_wr_req) begin
                write_requst_state <= write_data_wait;
                awaddr  <= data_wr_addr;
                awsize  <= (data_wr_type == 3'b100) ? 3'b10 : data_wr_type;
                awlen   <= (data_wr_type == 3'b100) ? 8'b11 : 8'b0;
                awvalid <= 1'b1;
                wdata   <= data_wr_data[31:0];
                wstrb   <= data_wr_wstrb;

                write_buffer_data <= {32'b0, data_wr_data[127:32]};
                if (data_wr_type == 3'b100) begin
                    write_buffer_num <= 3'b011;
                end
                else begin
                    write_buffer_num <= 3'b0;
                    wlast <= 1'b1;
                end
            end
        end
        write_data_wait: begin
            if (awready) begin
                write_requst_state <= write_data_transform;
                awvalid <= 1'b0;
		        wvalid  <= 1'b1;
            end
        end 
        write_data_transform: begin
            if (wready && wlast) begin
                write_requst_state <= write_wait_b;
                wvalid <= 1'b0;
                wlast <= 1'b0;
                bready <= 1'b1;
            end
            else if (wready) begin
                if (write_buffer_last) begin
                    wlast <= 1'b1;
                end
            
                write_requst_state <= write_data_transform;

                wdata   <= write_buffer_data[31:0];
                wvalid  <= 1'b1;
                write_buffer_data <= {32'b0, write_buffer_data[127:32]};
                write_buffer_num  <= write_buffer_num - 3'b1;
            end
        end
	    write_wait_b: begin
            if (bvalid && bready) begin
                write_requst_state <= write_request_empty;
                bready <= 1'b0;
            end
        end
        default: begin
            write_requst_state <= write_request_empty;
        end
    endcase
end

endmodule
