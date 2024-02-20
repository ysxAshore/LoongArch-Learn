`include "mycpu.h"
module axi_bridge(
    input         clk,
    input         aresetn,// to be noticed, 0 valid
    
    //read req
    output  [3:0]   arid,
    output  [31:0]  araddr,
    output  [7:0]   arlen,  //0
    output  [2:0]   arsize,
    output  [1:0]   arburst,//2b'01
    output  [1:0]   arlock, //0
    output  [3:0]   arcache,//0
    output  [2:0]   arprot, //0
    output          arvalid,
    input           arready,
    
    //read ack
    input   [3:0]    rid,
    input   [31:0]   rdata,
    input   [1:0]    rresp,
    input            rlast,
    input            rvalid,
    output  reg      rready,
               
    //write req              
    output  [3:0]   awid,
    output  [31:0]  awaddr,
    output  [7:0]   awlen,
    output  [2:0]   awsize,
    output  [1:0]   awburst,
    output  [1:0]   awlock,
    output  [3:0]   awcache,
    output  [2:0]   awprot,
    output  reg     awvalid,
    input           awready,
    
    //write data
    output  [3:0]   wid,
    output  [31:0]  wdata,
    output  [3:0]   wstrb,
    output          wlast,
    output  reg     wvalid,
    input           wready,
    
    //write ack
    input   [3:0]   bid,
    input   [1:0]   bresp,
    input           bvalid,
    output  reg     bready,
	
	// inst sram interface
    input inst_sram_req,
    input inst_sram_wr,
    input [1:0] inst_sram_size,
    input [3:0] inst_sram_wstrb,
    input [31:0] inst_sram_addr,
    input [31:0] inst_sram_wdata,
    output  inst_sram_addr_ok,
    output  inst_sram_data_ok,
    output [31:0] inst_sram_rdata,

    input data_sram_req,
    input data_sram_wr,
    input [1:0] data_sram_size,
    input [3:0] data_sram_wstrb,
    input [31:0] data_sram_addr,
    input [31:0] data_sram_wdata,
    output  data_sram_addr_ok,
    output  data_sram_data_ok,
    output  [31:0] data_sram_rdata

    );

wire        rdata_sram_addr_ok;
wire        wdata_sram_addr_ok;

reg         arvalid_r;
reg [ 3:0]  arid_r;
reg [ 1:0]  inst_sram_size_r;
reg [31:0]  inst_sram_addr_r;
reg [ 1:0]  rdata_sram_size_r;
reg [31:0]  rdata_sram_addr_r;

reg         data_read_wait;
reg         inst_read_wait;

reg [ 1:0]  wdata_sram_size_r;
reg [ 3:0]  wdata_sram_wstrb_r;
reg [31:0]  wdata_sram_addr_r;
reg [31:0]  data_sram_wdata_r;

reg         wdata_received;
reg         waddr_received;

//-------------------------------------------------------------------//
//arid_r
always @(posedge clk)begin
    if(!aresetn)
        arid_r <= 4'b0000;
    else if(inst_sram_req && inst_sram_addr_ok)
        arid_r <= 4'b0000;
    else if(data_sram_req && rdata_sram_addr_ok)
        arid_r <= 4'b0001;
    else
        arid_r <= arid_r;
end

//read_inst_r
always @(posedge clk)begin
    if(!aresetn)
        inst_sram_size_r <= 2'b00;
    else if(inst_sram_req && inst_sram_addr_ok)
        inst_sram_size_r <= inst_sram_size;
    else
        inst_sram_size_r <= inst_sram_size_r;
end

always @(posedge clk)begin
    if(!aresetn)
        inst_sram_addr_r <= 32'b0;
    else if(inst_sram_req && inst_sram_addr_ok)
        inst_sram_addr_r <= inst_sram_addr;
    else
        inst_sram_addr_r <= inst_sram_addr_r;
end

//read_data_r
always @(posedge clk)begin
    if(!aresetn)
        rdata_sram_size_r <= 2'b00;
    else if(data_sram_req && rdata_sram_addr_ok)
        rdata_sram_size_r <= data_sram_size;
    else
        rdata_sram_size_r <= rdata_sram_size_r;
end

always @(posedge clk)begin
    if(!aresetn)
        rdata_sram_addr_r <= 32'b0;
    else if(data_sram_req && rdata_sram_addr_ok)
        rdata_sram_addr_r <= data_sram_addr;
    else
        rdata_sram_addr_r <= rdata_sram_addr_r;
end

//wait
always @(posedge clk)begin
    if(!aresetn)
        inst_read_wait <= 1'b0;
    else if(arvalid && arready && arid_r == 4'b0000)
        inst_read_wait <= 1'b1;
    else if(rvalid && rready && rid == 4'b0000)
        inst_read_wait <= 1'b0;
end

always @(posedge clk)begin
    if(!aresetn)
        data_read_wait <= 1'b0;
    else if(arvalid && arready && arid_r == 4'b0001)
        data_read_wait <= 1'b1;
    else if(rvalid && rready && rid == 4'b0001)
        data_read_wait <= 1'b0;
end

//arvalid
always @(posedge clk)begin
    if(!aresetn)
        arvalid_r <= 1'b0;
    else if(arvalid && arready)
        arvalid_r <= 1'b0;
    else if(rdata_sram_addr_ok || inst_sram_addr_ok)
        arvalid_r <= 1'b1;
end

//output from AXI master
assign arvalid = arvalid_r;
assign arid    = arid_r;
assign araddr  = (arid == 4'b0000) ? inst_sram_addr_r : rdata_sram_addr_r;
assign arsize  = (arid == 4'b0000) ? {1'b0, inst_sram_size_r} : {1'b0, rdata_sram_size_r};

assign arlen   = 8'b0;
assign arburst = 2'b01;
assign arlock  = 1'b0;
assign arcache = 1'b0;
assign arprot  = 1'b0;

assign rdata_sram_addr_ok = 
        (!arvalid && data_sram_req == 1'b1 && data_sram_wr == 1'b0) ? 1'b1 : 1'b0;
assign inst_sram_addr_ok = 
        (!inst_read_wait && !arvalid && inst_sram_req == 1'b1 && inst_sram_wr == 1'b0 && 
            (data_sram_req == 1'b0 || data_sram_wr == 1'b1)) ? 1'b1 : 1'b0;

//-------------------------------------------------------------------//
always @(posedge clk)begin
    if(!aresetn)
        rready <= 1'b0;
    else if(rready && rvalid)
        rready <= 1'b0;
    else if(inst_read_wait || data_read_wait)
        rready <= 1'b1;
end

assign inst_sram_data_ok = (rvalid && rready && rid == 4'b0000);
assign data_sram_data_ok = (rvalid && rready && rid == 4'b0001) || bvalid && bready;

assign inst_sram_rdata   = (rvalid && rready && rid == 4'b0000) ? rdata : 32'b0;
assign data_sram_rdata   = (rvalid && rready && rid == 4'b0001) ? rdata : 32'b0;

assign data_sram_addr_ok = rdata_sram_addr_ok || wdata_sram_addr_ok;

//-------------------------------------------------------------------//
//save info from cpu
always @(posedge clk)begin
    if(!aresetn)
        wdata_sram_addr_r <= 32'b0;
    else if(data_sram_req && wdata_sram_addr_ok)
        wdata_sram_addr_r <= data_sram_addr;
    else
        wdata_sram_addr_r <= wdata_sram_addr_r;
end

always @(posedge clk)begin
    if(!aresetn)
        wdata_sram_size_r <= 2'b00;
    else if(data_sram_req && wdata_sram_addr_ok)
        wdata_sram_size_r <= data_sram_size;
    else
        wdata_sram_size_r <= wdata_sram_size_r;
end

always @(posedge clk)begin
    if(!aresetn)
        data_sram_wdata_r <= 32'b0;
    else if(data_sram_req && wdata_sram_addr_ok)
        data_sram_wdata_r <= data_sram_wdata;
    else
        data_sram_wdata_r <= data_sram_wdata_r;
end

always @(posedge clk)begin
    if(!aresetn)
        wdata_sram_wstrb_r <= 4'b0000;
    else if(data_sram_req && wdata_sram_addr_ok)
        wdata_sram_wstrb_r <= data_sram_wstrb;
    else
        wdata_sram_wstrb_r <= wdata_sram_wstrb_r;
end

//mem has received the write info
always @(posedge clk)begin
    if(!aresetn)
        wdata_received <= 1'b0;
    else if(wvalid && wready)
        wdata_received <= 1'b1;
    else if(wdata_received && waddr_received)
        wdata_received <= 1'b0;
end

always @(posedge clk)begin
    if(!aresetn)
        waddr_received <= 1'b0;
    else if(awvalid && awready)
        waddr_received <= 1'b1;
    else if(wdata_received && waddr_received)
        waddr_received <= 1'b0;
end

//write valid info for mem
always @(posedge clk)begin
    if(!aresetn)
        awvalid <= 1'b0;
    else if(data_sram_req && data_sram_wr)
        awvalid <= 1'b1;
    else if(awvalid && awready)
        awvalid <= 1'b0;
end

always @(posedge clk)begin
    if(!aresetn)
        wvalid <= 1'b0;
    else if(data_sram_req && data_sram_wr)
        wvalid <= 1'b1;
    else if(wvalid && wready)
        wvalid <= 1'b0;
end

assign awaddr   = wdata_sram_addr_r;
assign awsize   = wdata_sram_size_r;
assign awid     = 4'b0001;
assign awlen    = 8'b0;
assign awburst  = 2'b01;
assign awlock   = 1'b0;
assign awcache  = 1'b0;
assign awprot   = 1'b0;

assign wdata    = data_sram_wdata_r;
assign wstrb    = wdata_sram_wstrb_r;
assign wid      = 4'b0001;
assign wlast    = 1'b1;  

assign wdata_sram_addr_ok = (data_sram_req == 1'b1 && data_sram_wr == 1'b1) ? 1'b1 : 1'b0;

//-------------------------------------------------------------------//
always @(posedge clk)begin
    if (!aresetn) begin
        bready <= 1'b0;
    end
    else if (wvalid && wready && awvalid && awready) begin
        bready <= 1'b1;
    end
    else if (wdata_received && awvalid && awready) begin
        bready <= 1'b1;
    end
    else if (wvalid && wready && waddr_received) begin
        bready <= 1'b1;
    end
    else if (bvalid && bready) begin
        bready <= 1'b0;
    end
end

endmodule
