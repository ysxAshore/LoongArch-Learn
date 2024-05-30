`include "mycpu.h"
module axi_bridge(
    //AXI信号 主方
    input         clk,
    input         aresetn,
    
    //读请求通道
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
    
    //读响应通道
    input   [3:0]    rid,
    input   [31:0]   rdata,
    input   [1:0]    rresp,
    input            rlast,
    input            rvalid,
    output  reg      rready,
               
    //写请求通道              
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
    
    //写数据通道
    output  [3:0]   wid,
    output  [31:0]  wdata,
    output  [3:0]   wstrb,
    output          wlast,
    output  reg     wvalid,
    input           wready,
    
    //写响应通道
    input   [3:0]   bid,
    input   [1:0]   bresp,
    input           bvalid,
    output  reg     bready,
  
    //类SRAM信号 从方
    //inst
    input inst_sram_req,
    input inst_sram_wr,
    input [1:0] inst_sram_size,
    input [3:0] inst_sram_wstrb,
    input [31:0] inst_sram_addr,
    input [31:0] inst_sram_wdata,
    output  inst_sram_addr_ok,
    output  inst_sram_data_ok,
    output [31:0] inst_sram_rdata,

    //data
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

//读写通道分离 分离addr_ok信号
wire        rdata_sram_addr_ok;
wire        wdata_sram_addr_ok;

//读请求通道 触发器Q端信号
reg         arvalid_r; //输出arvalid
reg [ 3:0]  arid_r;    //输出arid 根据arid在指令addr、size和数据addr、size选择生成arsize、araddr
reg [ 1:0]  inst_sram_size_r; //输出访指令arsize
reg [31:0]  inst_sram_addr_r; //输出访指令存araddr
reg [ 1:0]  rdata_sram_size_r; //输出访数据arsize
reg [31:0]  rdata_sram_addr_r; //输出访指令存araddr 

//请求完毕，等待读响应
reg         data_read_wait; 
reg         inst_read_wait;

reg [ 1:0]  wdata_sram_size_r; //输出awsize
reg [ 3:0]  wdata_sram_wstrb_r;//输出wstrb
reg [31:0]  wdata_sram_addr_r;//输出awaddr

reg [31:0]  data_sram_wdata_r;//输出awaddr

reg         wdata_received;//表示从设备已收到写数据，wready可再有效
reg         waddr_received;//表示从设备已收到写地址，awready可再有效

//-----------------------------------读请求相关信号--------------------------------------//
//因为读请求时，需要传输地址等信息，所以需要在req和addr_ok确认对应请求并且类SRAM总线从方收到地址后再设置
//arid_r  不同事务都用同一个id，先请求的先响应
always @(posedge clk)begin
    if(~aresetn)
        arid_r <= 4'b0000;
    else if(inst_sram_req & inst_sram_addr_ok)//读指令存储请求且读指令地址成功收到
        arid_r <= 4'b0000;
    else if(data_sram_req & rdata_sram_addr_ok)//读数据存储请求且读数据地址成功收到
        arid_r <= 4'b0001;
    else
        arid_r <= arid_r;//存在阻塞、等待时的处理 是不是实现的不改变值 ready还未为1时
end

//arsize_r选择之一 inst_sram_size_r
always @(posedge clk)begin
    if(~aresetn)
        inst_sram_size_r <= 2'b00;
    else if(inst_sram_req & inst_sram_addr_ok)
        inst_sram_size_r <= inst_sram_size;
    else
        inst_sram_size_r <= inst_sram_size_r;
end

//araddr_r选择之一 inst_sram_addr_r
always @(posedge clk)begin
    if(~aresetn)
        inst_sram_addr_r <= 32'b0;
    else if(inst_sram_req & inst_sram_addr_ok)
        inst_sram_addr_r <= inst_sram_addr;
    else
        inst_sram_addr_r <= inst_sram_addr_r;
end

//arsize_r选择之一 data_sram_size_r
always @(posedge clk)begin
    if(~aresetn)
        rdata_sram_size_r <= 2'b00;
    else if(data_sram_req & rdata_sram_addr_ok)
        rdata_sram_size_r <= data_sram_size;
    else
        rdata_sram_size_r <= rdata_sram_size_r;
end

//araddr_r选择之一 data_sram_addr_r
always @(posedge clk)begin
    if(~aresetn)
        rdata_sram_addr_r <= 32'b0;
    else if(data_sram_req & rdata_sram_addr_ok)
        rdata_sram_addr_r <= data_sram_addr;
    else
        rdata_sram_addr_r <= rdata_sram_addr_r;
end

//读通道正在进行读指令，等待读响应
always @(posedge clk)begin
    if(~aresetn)
        inst_read_wait <= 1'b0;
    else if(arvalid & arready & arid_r == 4'b0000)
        inst_read_wait <= 1'b1;
    else if(rvalid & rready & rid == 4'b0000)//读响应已收到，且是读指令
        inst_read_wait <= 1'b0;
end

//读通道正在进行读数据，等待读响应
always @(posedge clk)begin
    if(~aresetn)
        data_read_wait <= 1'b0;
    else if(arvalid & arready & arid_r == 4'b0001)
        data_read_wait <= 1'b1;
    else if(rvalid & rready & rid == 4'b0001)//读响应已收到，且是读数据
        data_read_wait <= 1'b0;
end

//arvalid
always @(posedge clk)begin
    if(~aresetn) //
        arvalid_r <= 1'b0;
    else if(arvalid & arready) //读请求收到响应则复位
        arvalid_r <= 1'b0;
    else if(data_sram_req & rdata_sram_addr_ok | inst_sram_req & inst_sram_addr_ok) //这里可以加req吧？加req更好理解
        arvalid_r <= 1'b1;
end

//AXI主方，除了常量，其余输出信号的均来自触发器Q端 
//读请求通道输出信号
assign arvalid = arvalid_r;
assign arid    = arid_r;
assign araddr  = (arid == 4'b0000) ? inst_sram_addr_r : rdata_sram_addr_r; 
//size是3位，000->1B 001->2B 010->4B 011->8B 100->16B 101->32B 110->64B 111->128B
assign arsize  = (arid == 4'b0000) ? {1'b0, inst_sram_size_r} : {1'b0, rdata_sram_size_r};

assign arlen   = 8'b0;
assign arburst = 2'b01;
assign arlock  = 2'b0;
assign arcache = 4'b0;
assign arprot  = 3'b0;

assign rdata_sram_addr_ok = //这为什么不用data_read_wait load优先级大于取指 设置了有写请求就暂停读 addr_ok无效
        (~arvalid & data_sram_req == 1'b1 & data_sram_wr == 1'b0) ? 1'b1 : 1'b0; //读通道没有被占用且进行读数据RAM请求
assign inst_sram_addr_ok = 
        (~arvalid & inst_sram_req == 1'b1 & inst_sram_wr == 1'b0 & 
            (data_sram_req == 1'b0 | data_sram_wr == 1'b1)) ? 1'b1 : 1'b0;//load优先级大于取指，需要判断没有读数据请求或者有但是是写数据

//-----------------------------------读响应相关信号-------------------------------------//
always @(posedge clk)begin
    if(~aresetn)
        rready <= 1'b0;
    else if(rready & rvalid)
        rready <= 1'b0;
    else if(inst_read_wait | data_read_wait) //等待准备接收数据
        rready <= 1'b1;
end

assign inst_sram_data_ok = (rvalid & rready & rid == 4'b0000);
assign data_sram_data_ok = (rvalid & rready & rid == 4'b0001) | bvalid & bready;//数据存储的data_ok包括读数据存储和写响应

assign inst_sram_rdata   = (rvalid & rready & rid == 4'b0000) ? rdata : 32'b0;
assign data_sram_rdata   = (rvalid & rready & rid == 4'b0001) ? rdata : 32'b0;

assign data_sram_addr_ok = rdata_sram_addr_ok | wdata_sram_addr_ok;//读写通道分离

//-----------------------------------写请求相关信号-------------------------------------//
//处理写地址
always @(posedge clk)begin 
    if(~aresetn)
        wdata_sram_addr_r <= 32'b0;
    else if(data_sram_req & wdata_sram_addr_ok)
        wdata_sram_addr_r <= data_sram_addr;
    else
        wdata_sram_addr_r <= wdata_sram_addr_r;
end

//处理写长度
always @(posedge clk)begin
    if(~aresetn)
        wdata_sram_size_r <= 2'b00;
    else if(data_sram_req & wdata_sram_addr_ok)
        wdata_sram_size_r <= data_sram_size;
    else
        wdata_sram_size_r <= wdata_sram_size_r;
end

//处理写数据 写请求和写数据同时设置
always @(posedge clk)begin
    if(~aresetn)
        data_sram_wdata_r <= 32'b0;
    else if(data_sram_req & wdata_sram_addr_ok)
        data_sram_wdata_r <= data_sram_wdata;
    else
        data_sram_wdata_r <= data_sram_wdata_r;
end

//处理写选通
always @(posedge clk)begin
    if(~aresetn)
        wdata_sram_wstrb_r <= 4'b0000;
    else if(data_sram_req & wdata_sram_addr_ok)
        wdata_sram_wstrb_r <= data_sram_wstrb;
    else
        wdata_sram_wstrb_r <= wdata_sram_wstrb_r;
end

//从设备已收到写数据
always @(posedge clk)begin
    if(!aresetn)
        wdata_received <= 1'b0;
    else if(wvalid & wready)
        wdata_received <= 1'b1;
    else if(wdata_received & waddr_received)
        wdata_received <= 1'b0;
end

//从设备已收到写地址
always @(posedge clk)begin
    if(~aresetn)
        waddr_received <= 1'b0;
    else if(awvalid & awready)
        waddr_received <= 1'b1;
    else if(wdata_received & waddr_received) //写地址和写数据都被从设备收到后再开始新的写请求
        waddr_received <= 1'b0;
end

//写请求 valid信号的发送
always @(posedge clk)begin
    if(!aresetn)
        awvalid <= 1'b0;
    else if(data_sram_req & data_sram_wr)//这里是不是可以替换成req&addr 可以 组合逻辑
        awvalid <= 1'b1;
    else if(awvalid & awready)
        awvalid <= 1'b0;
end

always @(posedge clk)begin
    if(~aresetn)
        wvalid <= 1'b0;
    else if(data_sram_req & data_sram_wr)//写请求和写数据同时置有效
        wvalid <= 1'b1;
    else if(wvalid & wready)
        wvalid <= 1'b0;
end

assign awaddr   = wdata_sram_addr_r;
assign awsize   = wdata_sram_size_r;
assign awid     = 4'b0001;
assign awlen    = 8'b0;
assign awburst  = 2'b01;
assign awlock   = 2'b0;
assign awcache  = 4'b0;
assign awprot   = 3'b0;

assign wdata    = data_sram_wdata_r;
assign wstrb    = wdata_sram_wstrb_r;
assign wid      = 4'b0001;
assign wlast    = 1'b1;  

assign wdata_sram_addr_ok = (data_sram_req == 1'b1 && data_sram_wr == 1'b1) ? 1'b1 : 1'b0;

//-------------------------------------写响应相关信号-----------------------------------//
always @(posedge clk)begin
    if (!aresetn) begin
        bready <= 1'b0;
    end
    else if (wvalid & wready & awvalid & awready) begin
        bready <= 1'b1;
    end
    else if (wdata_received & awvalid & awready) begin
        bready <= 1'b1;
    end
    else if (wvalid & wready & waddr_received) begin
        bready <= 1'b1;
    end
    else if (bvalid & bready) begin
        bready <= 1'b0;
    end
end

endmodule
