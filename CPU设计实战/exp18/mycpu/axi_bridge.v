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

    input  wire           inst_req     ,
    input  wire           inst_wr      ,
    input  wire [ 1:0]    inst_size    ,
    input  wire [31:0]    inst_addr    ,
    input  wire [ 3:0]    inst_wstrb   ,
    input  wire [31:0]    inst_wdata   ,
    output wire           inst_addr_ok ,
    output wire           inst_data_ok ,
    output wire [31:0]    inst_rdata   ,

    input  wire           data_req     ,
    input  wire           data_wr      ,
    input  wire [ 1:0]    data_size    ,
    input  wire [31:0]    data_addr    ,
    input  wire [ 3:0]    data_wstrb   ,
    input  wire [31:0]    data_wdata   ,
    output wire           data_addr_ok ,
    output wire           data_data_ok ,
    output wire [31:0]    data_rdata   
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

assign data_addr_ok = !data_wr && (read_requst_state == read_requst_empty) ||
                       data_wr && (write_requst_state == write_request_empty);
assign inst_addr_ok = !inst_wr && !(data_req & !data_wr) && (read_requst_state == read_requst_empty);

assign inst_data_ok = !rid[0] && rvalid;
assign inst_rdata  = rdata;
assign data_data_ok =  rid[0] && rvalid || bvalid;
assign data_rdata  = rdata;

always @(posedge clk) begin
    if (reset) begin
        read_requst_state <= read_requst_empty;
        arvalid <= 1'b0;
    end
    else case (read_requst_state)
        read_requst_empty: begin
            if (data_req && !data_wr) begin
                read_requst_state <= read_requst_ready;
                arid <= 4'b1;
                araddr <= data_addr;
                arsize <= data_size;
                arlen  <= 8'b0;
                arvalid <= 1'b1;
            end
            else if (inst_req & !inst_wr) begin
                read_requst_state <= read_requst_ready;
                arid <= 4'b0;
                araddr <= inst_addr;
                arsize <= inst_size;
                arlen  <= 8'b0;
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
    end
    else case (write_requst_state)
        write_request_empty: begin
            if (data_req && data_wr) begin
                write_requst_state <= write_data_wait;
                awaddr  <= data_addr;
                awsize  <= data_size;
                awlen   <= 8'b0;
                awvalid <= 1'b1;
                wdata   <= data_wdata;
                wstrb   <= data_wstrb;
                wlast <= 1'b1;
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
            if (wready) begin
                write_requst_state <= write_wait_b;
                wvalid <= 1'b0;
                wlast <= 1'b0;
                bready <= 1'b1;
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
