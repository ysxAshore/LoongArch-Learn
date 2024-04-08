`timescale 1ns / 1ps

module testbench();
    reg clk;
    reg resetn;
    initial
    begin
        $dumpfile("dump.vcd");//为所要创建的vcd文件指明文件名
        $dumpvars;//指定需要记录到VCD文件中的信号，无参记录所有 $dumpvar(level, module_name);
        clk    = 0;
        resetn = 1'b0;
        #200;//200时才不复位
        resetn = 1'b1;
    end
    always #5 clk <= ~clk;//一次时钟上升下降10ns
    
    scroller #(
    .CNT_1S(27'd100)
    ) u_scroller (
    .clk(clk),
    .resetn(resetn),
    .led()
    );
endmodule
