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
    output  reg     wlast,
    output  reg     wvalid,
    input           wready,
    
    //write ack
    input   [3:0]   bid,
    input   [1:0]   bresp,
    input           bvalid,
    output  reg     bready,
	
	// inst sram interface
    input        inst_rd_req,
    input [ 2:0] inst_rd_type,
    input [31:0] inst_rd_addr,
	output       inst_ret_valid,
	output[ 1:0] inst_ret_last,
	output       inst_rd_rdy,
    output[31:0] inst_ret_data,

    input        data_rd_req,  
    input [ 2:0] data_rd_type,
    input [31:0] data_rd_addr,
    output       data_ret_valid,
	output[ 1:0] data_ret_last,
    output       data_rd_rdy,
    output[31:0] data_ret_data,
	
	input        wr_req,
	input [ 2:0] wr_type,
	input [31:0] wr_addr,
	input [ 3:0] wr_wstrb,
    input [127:0]wr_data,
	output       wr_rdy
	
    );

reg         arvalid_r;
reg [ 3:0]  arid_r;
reg [ 2:0]  inst_sram_size_r;
reg [31:0]  inst_sram_addr_r;
reg [ 2:0]  rdata_sram_size_r;
reg [31:0]  rdata_sram_addr_r;

reg         data_read_wait;
reg         inst_read_wait;

reg [ 2:0]  wdata_sram_size_r;
reg [ 3:0]  wdata_sram_wstrb_r;
reg [31:0]  wdata_sram_addr_r;
reg [127:0] data_sram_wdata_r;

reg         wdata_received;
reg         waddr_received;

reg [2:0]   wdata_num;
reg         wdata_wait;
reg [7:0]   awlen_r;

//-------------------------------------------------------------------//
//arid_r
always @(posedge clk)begin
    if(!aresetn)
        arid_r <= 4'b0000;
    else if(inst_rd_req && inst_rd_rdy)
        arid_r <= 4'b0000;
    else if(data_rd_req && data_rd_rdy)
        arid_r <= 4'b0001;
    else
        arid_r <= arid_r;
end

//read_inst_r
always @(posedge clk)begin
    if(!aresetn)
        inst_sram_size_r <= 3'b000;
    else if(inst_rd_req && inst_rd_rdy)
        inst_sram_size_r <= (inst_rd_type==3'b100)? 3'b010:inst_rd_type;
    else
        inst_sram_size_r <= inst_sram_size_r;
end

always @(posedge clk)begin
    if(!aresetn)
        inst_sram_addr_r <= 32'b0;
    else if(inst_rd_req && inst_rd_rdy)
        inst_sram_addr_r <= inst_rd_addr;
    else
        inst_sram_addr_r <= inst_sram_addr_r;
end

//read_data_r
always @(posedge clk)begin
    if(!aresetn)
        rdata_sram_size_r <= 3'b000;
    else if(data_rd_req && data_rd_rdy)
        rdata_sram_size_r <= (data_rd_type==3'b100)? 3'b010:data_rd_type;
    else
        rdata_sram_size_r <= rdata_sram_size_r;
end

always @(posedge clk)begin
    if(!aresetn)
        rdata_sram_addr_r <= 32'b0;
    else if(data_rd_req && data_rd_rdy)
        rdata_sram_addr_r <= data_rd_addr;
    else
        rdata_sram_addr_r <= rdata_sram_addr_r;
end

//wait
always @(posedge clk)begin
    if(!aresetn)
        inst_read_wait <= 1'b0;
    else if(arvalid && arready && arid_r == 4'b0000)
        inst_read_wait <= 1'b1;
    else if(rvalid && rready && rid == 4'b0000 && rlast)
        inst_read_wait <= 1'b0;
end

always @(posedge clk)begin
    if(!aresetn)
        data_read_wait <= 1'b0;
    else if(arvalid && arready && arid_r == 4'b0001)
        data_read_wait <= 1'b1;
    else if(rvalid && rready && rid == 4'b0001 && rlast)
        data_read_wait <= 1'b0;
end

//arvalid
always @(posedge clk)begin
    if(!aresetn)
        arvalid_r <= 1'b0;
    else if(arvalid && arready)
        arvalid_r <= 1'b0;
    else if(data_rd_rdy || inst_rd_rdy)
        arvalid_r <= 1'b1;
end

//output from AXI master
assign arvalid = arvalid_r;
assign arid    = arid_r;
assign araddr  = (arid == 4'b0000) ? inst_sram_addr_r : rdata_sram_addr_r;
assign arsize  = (arid == 4'b0000) ? inst_sram_size_r : rdata_sram_size_r;

assign arlen   = (inst_rd_type==3'b100 || data_rd_type==3'b100)? 8'b11:8'b0;
assign arburst = 2'b01;
assign arlock  = 1'b0;
assign arcache = 1'b0;
assign arprot  = 1'b0;

assign data_rd_rdy = (!inst_read_wait && !arvalid &&  data_rd_req == 1'b1) ? 1'b1 : 1'b0;
assign inst_rd_rdy = (!data_read_wait && !arvalid && (inst_rd_req == 1'b1) && (data_rd_req == 1'b0 )) ? 1'b1 : 1'b0;

//-------------------------------------------------------------------//
always @(posedge clk)begin
    if(!aresetn)
        rready <= 1'b0;
    else if(rready && rvalid && rlast)
        rready <= 1'b0;
    else if(inst_read_wait || data_read_wait)
        rready <= 1'b1;
end

assign inst_ret_data      = (rvalid && rready && rid == 4'b0000) ? rdata : 32'b0;
assign data_ret_data      = (rvalid && rready && rid == 4'b0001) ? rdata : 32'b0;
assign inst_ret_valid=  rvalid && rready && rid == 4'b0000;
assign data_ret_valid=  rvalid && rready && rid == 4'b0001;
assign inst_ret_last = (rid==4'b0000)&&rlast;
assign data_ret_last = (rid==4'b0001)&&rlast;

//-------------------------------------------------------------------//
//save info from cpu
always @(posedge clk)begin
    if(!aresetn)
        wdata_sram_addr_r <= 32'b0;
    else if(wr_req)
        wdata_sram_addr_r <= wr_addr;
    else
        wdata_sram_addr_r <= wdata_sram_addr_r;
end

always @(posedge clk)begin
    if(!aresetn)
        wdata_sram_size_r <= 3'b000;
    else if(wr_req)
        wdata_sram_size_r <= (wr_type==3'b100)? 3'b010:wr_type;
    else
        wdata_sram_size_r <= wdata_sram_size_r;
end

always @(posedge clk)begin
    if(!aresetn)
        wdata_num<=3'b000;
    else if(wr_req && awlen==8'b11)
        wdata_num<=3'b100;
    else if(wvalid && wready && awlen==8'b11)
        wdata_num<=wdata_num-1'b1;
end

always @(posedge clk)begin
    if(!aresetn)
        wlast<=1'b0;
    else if(wdata_num==3'b001 && awlen==8'b11 || wr_req && awlen==8'b0)
        wlast<=1'b1;
	else if(wdata_num==3'b000 && awlen==8'b11 || wvalid && wready && awlen==8'b0)
     	wlast<=1'b0;
end

always @(posedge clk)begin
    if(!aresetn)
        data_sram_wdata_r <= 128'b0;
    else if(wr_req)
        data_sram_wdata_r <= wr_data;
    else if(wvalid && wready && awlen==8'b11)
        data_sram_wdata_r <= {32'd0,data_sram_wdata_r[127:32]};
end


always @(posedge clk)begin
    if(!aresetn)
        wdata_sram_wstrb_r <= 4'b0000;
    else if(wr_req)
        wdata_sram_wstrb_r <= wr_wstrb;
    else
        wdata_sram_wstrb_r <= wdata_sram_wstrb_r;
end

always@(posedge clk)begin
    if(!aresetn)
	    wdata_wait<=1'b0;
	else if(wvalid && wready && awlen==8'b11 && wdata_num!=3'b001)
	    wdata_wait<=1'b1;
	else 
	    wdata_wait<=1'b0;
end

always@(posedge clk)begin
    if(!aresetn)
        awlen_r<=8'b0;
    else if(wr_req)
        awlen_r<=(wr_type==3'b100)? 8'b11:8'b0;
end 		
		
//write valid info for mem
always @(posedge clk)begin
    if(!aresetn)
        awvalid <= 1'b0;
    else if(wr_req)
        awvalid <= 1'b1;
    else if(awvalid && awready)
        awvalid <= 1'b0;
end

always @(posedge clk)begin
    if(!aresetn)
        wvalid <= 1'b0;
    else if(wr_req || wdata_wait)
        wvalid <= 1'b1;
    else if(wvalid && wready)
        wvalid <= 1'b0;
end



assign awaddr   = wdata_sram_addr_r;
assign awsize   = wdata_sram_size_r;
assign awid     = 4'b0001;
assign awlen    = wr_req?((wr_type==3'b100)? 8'b11:8'b0) :
                           awlen_r;
assign awburst  = 2'b01;
assign awlock   = 1'b0;
assign awcache  = 1'b0;
assign awprot   = 1'b0;
assign wr_rdy   = !awvalid && !wvalid;

assign wdata    = data_sram_wdata_r[31:0];
assign wstrb    = wdata_sram_wstrb_r;
assign wid      = 4'b0001; 

//-------------------------------------------------------------------//
//mem has received the write info
always @(posedge clk)begin
    if(!aresetn)
        wdata_received <= 1'b0;
    else if(wvalid && wready && wlast)
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
