module FPGA_green_test(
    input clk,
    input resetn,
    input btn_clk,
    
    input btn_ledgr,
    
    input [7:0] sw,

    output [15:0] led,
    output [1:0] ledr,
    output [1:0] ledg,

    output [7:0] num_csn,
    output num_a,
	output num_b,
	output num_c,
	output num_d,
	output num_e,
	output num_f,
	output num_g,
	output num_dp,
    
    output [3:0] key_col,
    input [3:0] key_row,

    output [8:1] dot_r,
    output [8:1] dot_c,

    //触摸屏相关接口，不需要更改
    output lcd_rst,
    output lcd_cs,
    output lcd_rs,
    output lcd_wr,
    output lcd_rd,
    inout [15:0] lcd_data_io,
    output lcd_bl_ctr,
    inout ct_int,
    inout ct_sda,
    output ct_scl,
    output ct_rstn
    );

    single_cycle_cpu_display screen_test(
        .clk(clk),
        .resetn(resetn),
        .btn_clk(btn_clk),

        .lcd_rst(lcd_rst),
        .lcd_cs(lcd_cs),
        .lcd_rs(lcd_rs),
        .lcd_wr(lcd_wr),
        .lcd_rd(lcd_rd),
        .lcd_data_io(lcd_data_io),
        .lcd_bl_ctr(lcd_bl_ctr),
        .ct_int(ct_int),
        .ct_sda(ct_sda),
        .ct_scl(ct_scl),
        .ct_rstn(ct_rscn)
        );

    PRJ_TEST board_test(
        .clk_in(clk),
        .rstn_in(resetn),
        .sw(sw),
        .led(led),
        .ledr(ledr),
        .ledg(ledg),
        
        .key_col(key_col),
        .key_row(key_row),
        .btn_ledgr(btn_ledgr),
        
        .num_csn(num_csn),
        .num_a(num_a),
        .num_b(num_b),
        .num_c(num_c),
        .num_d(num_d),
        .num_e(num_e),
        .num_f(num_f),
        .num_g(num_g),
        .num_dp(num_dp),

        .dot_r(dot_r),
        .dot_c(dot_c)
        );
endmodule
