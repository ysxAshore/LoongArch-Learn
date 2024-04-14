// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
// Date        : Wed Apr 10 14:49:00 2024
// Host        : ysxAshore running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim
//               e:/Projects/Studying/LA/LA32R_GD/Chiplab/chiplab_env/IP/xilinx_ip/dpram_512x32/dpram_512x32_sim_netlist.v
// Design      : dpram_512x32
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-2
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "dpram_512x32,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module dpram_512x32
   (clka,
    ena,
    wea,
    addra,
    dina,
    clkb,
    addrb,
    doutb);
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME BRAM_PORTA, MEM_SIZE 8192, MEM_WIDTH 32, MEM_ECC NONE, MASTER_TYPE OTHER, READ_LATENCY 1" *) input clka;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA EN" *) input ena;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA WE" *) input [0:0]wea;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA ADDR" *) input [8:0]addra;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DIN" *) input [31:0]dina;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTB CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME BRAM_PORTB, MEM_SIZE 8192, MEM_WIDTH 32, MEM_ECC NONE, MASTER_TYPE OTHER, READ_LATENCY 1" *) input clkb;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTB ADDR" *) input [8:0]addrb;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTB DOUT" *) output [31:0]doutb;

  wire [8:0]addra;
  wire [8:0]addrb;
  wire clka;
  wire clkb;
  wire [31:0]dina;
  wire [31:0]doutb;
  wire ena;
  wire [0:0]wea;
  wire NLW_U0_dbiterr_UNCONNECTED;
  wire NLW_U0_rsta_busy_UNCONNECTED;
  wire NLW_U0_rstb_busy_UNCONNECTED;
  wire NLW_U0_s_axi_arready_UNCONNECTED;
  wire NLW_U0_s_axi_awready_UNCONNECTED;
  wire NLW_U0_s_axi_bvalid_UNCONNECTED;
  wire NLW_U0_s_axi_dbiterr_UNCONNECTED;
  wire NLW_U0_s_axi_rlast_UNCONNECTED;
  wire NLW_U0_s_axi_rvalid_UNCONNECTED;
  wire NLW_U0_s_axi_sbiterr_UNCONNECTED;
  wire NLW_U0_s_axi_wready_UNCONNECTED;
  wire NLW_U0_sbiterr_UNCONNECTED;
  wire [31:0]NLW_U0_douta_UNCONNECTED;
  wire [8:0]NLW_U0_rdaddrecc_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_bid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_bresp_UNCONNECTED;
  wire [8:0]NLW_U0_s_axi_rdaddrecc_UNCONNECTED;
  wire [31:0]NLW_U0_s_axi_rdata_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_rid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_rresp_UNCONNECTED;

  (* C_ADDRA_WIDTH = "9" *) 
  (* C_ADDRB_WIDTH = "9" *) 
  (* C_ALGORITHM = "1" *) 
  (* C_AXI_ID_WIDTH = "4" *) 
  (* C_AXI_SLAVE_TYPE = "0" *) 
  (* C_AXI_TYPE = "1" *) 
  (* C_BYTE_SIZE = "9" *) 
  (* C_COMMON_CLK = "0" *) 
  (* C_COUNT_18K_BRAM = "1" *) 
  (* C_COUNT_36K_BRAM = "0" *) 
  (* C_CTRL_ECC_ALGO = "NONE" *) 
  (* C_DEFAULT_DATA = "0" *) 
  (* C_DISABLE_WARN_BHV_COLL = "0" *) 
  (* C_DISABLE_WARN_BHV_RANGE = "0" *) 
  (* C_ELABORATION_DIR = "./" *) 
  (* C_ENABLE_32BIT_ADDRESS = "0" *) 
  (* C_EN_DEEPSLEEP_PIN = "0" *) 
  (* C_EN_ECC_PIPE = "0" *) 
  (* C_EN_RDADDRA_CHG = "0" *) 
  (* C_EN_RDADDRB_CHG = "0" *) 
  (* C_EN_SAFETY_CKT = "0" *) 
  (* C_EN_SHUTDOWN_PIN = "0" *) 
  (* C_EN_SLEEP_PIN = "0" *) 
  (* C_EST_POWER_SUMMARY = "Estimated Power for IP     :     3.68295 mW" *) 
  (* C_FAMILY = "artix7" *) 
  (* C_HAS_AXI_ID = "0" *) 
  (* C_HAS_ENA = "1" *) 
  (* C_HAS_ENB = "0" *) 
  (* C_HAS_INJECTERR = "0" *) 
  (* C_HAS_MEM_OUTPUT_REGS_A = "0" *) 
  (* C_HAS_MEM_OUTPUT_REGS_B = "0" *) 
  (* C_HAS_MUX_OUTPUT_REGS_A = "0" *) 
  (* C_HAS_MUX_OUTPUT_REGS_B = "0" *) 
  (* C_HAS_REGCEA = "0" *) 
  (* C_HAS_REGCEB = "0" *) 
  (* C_HAS_RSTA = "0" *) 
  (* C_HAS_RSTB = "0" *) 
  (* C_HAS_SOFTECC_INPUT_REGS_A = "0" *) 
  (* C_HAS_SOFTECC_OUTPUT_REGS_B = "0" *) 
  (* C_INITA_VAL = "0" *) 
  (* C_INITB_VAL = "0" *) 
  (* C_INIT_FILE = "dpram_512x32.mem" *) 
  (* C_INIT_FILE_NAME = "no_coe_file_loaded" *) 
  (* C_INTERFACE_TYPE = "0" *) 
  (* C_LOAD_INIT_FILE = "0" *) 
  (* C_MEM_TYPE = "1" *) 
  (* C_MUX_PIPELINE_STAGES = "0" *) 
  (* C_PRIM_TYPE = "1" *) 
  (* C_READ_DEPTH_A = "512" *) 
  (* C_READ_DEPTH_B = "512" *) 
  (* C_READ_LATENCY_A = "1" *) 
  (* C_READ_LATENCY_B = "1" *) 
  (* C_READ_WIDTH_A = "32" *) 
  (* C_READ_WIDTH_B = "32" *) 
  (* C_RSTRAM_A = "0" *) 
  (* C_RSTRAM_B = "0" *) 
  (* C_RST_PRIORITY_A = "CE" *) 
  (* C_RST_PRIORITY_B = "CE" *) 
  (* C_SIM_COLLISION_CHECK = "ALL" *) 
  (* C_USE_BRAM_BLOCK = "0" *) 
  (* C_USE_BYTE_WEA = "0" *) 
  (* C_USE_BYTE_WEB = "0" *) 
  (* C_USE_DEFAULT_DATA = "0" *) 
  (* C_USE_ECC = "0" *) 
  (* C_USE_SOFTECC = "0" *) 
  (* C_USE_URAM = "0" *) 
  (* C_WEA_WIDTH = "1" *) 
  (* C_WEB_WIDTH = "1" *) 
  (* C_WRITE_DEPTH_A = "512" *) 
  (* C_WRITE_DEPTH_B = "512" *) 
  (* C_WRITE_MODE_A = "NO_CHANGE" *) 
  (* C_WRITE_MODE_B = "WRITE_FIRST" *) 
  (* C_WRITE_WIDTH_A = "32" *) 
  (* C_WRITE_WIDTH_B = "32" *) 
  (* C_XDEVICEFAMILY = "artix7" *) 
  (* downgradeipidentifiedwarnings = "yes" *) 
  (* is_du_within_envelope = "true" *) 
  dpram_512x32_blk_mem_gen_v8_4_6 U0
       (.addra(addra),
        .addrb(addrb),
        .clka(clka),
        .clkb(clkb),
        .dbiterr(NLW_U0_dbiterr_UNCONNECTED),
        .deepsleep(1'b0),
        .dina(dina),
        .dinb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .douta(NLW_U0_douta_UNCONNECTED[31:0]),
        .doutb(doutb),
        .eccpipece(1'b0),
        .ena(ena),
        .enb(1'b0),
        .injectdbiterr(1'b0),
        .injectsbiterr(1'b0),
        .rdaddrecc(NLW_U0_rdaddrecc_UNCONNECTED[8:0]),
        .regcea(1'b0),
        .regceb(1'b0),
        .rsta(1'b0),
        .rsta_busy(NLW_U0_rsta_busy_UNCONNECTED),
        .rstb(1'b0),
        .rstb_busy(NLW_U0_rstb_busy_UNCONNECTED),
        .s_aclk(1'b0),
        .s_aresetn(1'b0),
        .s_axi_araddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arburst({1'b0,1'b0}),
        .s_axi_arid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arready(NLW_U0_s_axi_arready_UNCONNECTED),
        .s_axi_arsize({1'b0,1'b0,1'b0}),
        .s_axi_arvalid(1'b0),
        .s_axi_awaddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awburst({1'b0,1'b0}),
        .s_axi_awid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awready(NLW_U0_s_axi_awready_UNCONNECTED),
        .s_axi_awsize({1'b0,1'b0,1'b0}),
        .s_axi_awvalid(1'b0),
        .s_axi_bid(NLW_U0_s_axi_bid_UNCONNECTED[3:0]),
        .s_axi_bready(1'b0),
        .s_axi_bresp(NLW_U0_s_axi_bresp_UNCONNECTED[1:0]),
        .s_axi_bvalid(NLW_U0_s_axi_bvalid_UNCONNECTED),
        .s_axi_dbiterr(NLW_U0_s_axi_dbiterr_UNCONNECTED),
        .s_axi_injectdbiterr(1'b0),
        .s_axi_injectsbiterr(1'b0),
        .s_axi_rdaddrecc(NLW_U0_s_axi_rdaddrecc_UNCONNECTED[8:0]),
        .s_axi_rdata(NLW_U0_s_axi_rdata_UNCONNECTED[31:0]),
        .s_axi_rid(NLW_U0_s_axi_rid_UNCONNECTED[3:0]),
        .s_axi_rlast(NLW_U0_s_axi_rlast_UNCONNECTED),
        .s_axi_rready(1'b0),
        .s_axi_rresp(NLW_U0_s_axi_rresp_UNCONNECTED[1:0]),
        .s_axi_rvalid(NLW_U0_s_axi_rvalid_UNCONNECTED),
        .s_axi_sbiterr(NLW_U0_s_axi_sbiterr_UNCONNECTED),
        .s_axi_wdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wlast(1'b0),
        .s_axi_wready(NLW_U0_s_axi_wready_UNCONNECTED),
        .s_axi_wstrb(1'b0),
        .s_axi_wvalid(1'b0),
        .sbiterr(NLW_U0_sbiterr_UNCONNECTED),
        .shutdown(1'b0),
        .sleep(1'b0),
        .wea(wea),
        .web(1'b0));
endmodule
`pragma protect begin_protected
`pragma protect version = 1
`pragma protect encrypt_agent = "XILINX"
`pragma protect encrypt_agent_info = "Xilinx Encryption Tool 2023.1"
`pragma protect key_keyowner="Synopsys", key_keyname="SNPS-VCS-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
aMT3usC6uizzcwnzOCX4OsS16Ob+YxFcsGovFpFklbnaIaD1S0lVdxenTwHPp6ByIEi+ehwr6Rgg
z/3AlTheI5NFTM8ihiMA18/wmUxI7EbaftJACA1LykUKCuj5myy0T+DACuv3sGYIZS38TZTZnnBC
FGAlvTZmRWs+JzneH3o=

`pragma protect key_keyowner="Aldec", key_keyname="ALDEC15_001", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
lR9ZerhYSAb39nzEkeYvhnwEs5t9y/+yTDf8KuoUtR1BGeHZq8pA/YxtjzQLtaOW1R1IQUb0FtSI
e3CYAb7WHYbIjcpw3vKHvW1SqcGn9CMGa556CYKmD2oF12Kow8xRaFvMSBUVxX7HsHxNWnRd+PU1
+C0YayU2KFIY/7Yl6cZ5luAzhw/6SW3PFYUIyyqWy5MCIXweHOwQR2IpQEdlDur5nluN7i7BeB+i
fxwwHh8TU/g7T4mhZFkiTuBKdLAtQOjxWxzqTMxgcuAjlTylY16FgMFOASdvvSbqBZJjbxMdVloU
rYjS8O/8rWktv8GXcaIdBJ2BRj01q7jsChsbwA==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VELOCE-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
Qvl63GHz9mq2xOB7elt/vAQ7URLGdD1Lkcz7f3Wtw31dwjjjbP62Ny/Jr6OmBIheWlgejx38qxAT
TrHiiEyjKmGcnPn1Tn2n+cH4RAxCbOFnCI9n6+YsYMTe9JkplGhGGr39SkFgJz0I2IKpPsuqTjCj
rhf49TAryNMQeRpREJA=

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VERIF-SIM-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
MA+9Ro+dh339m0iZrkKbqTKN8gQ5xkxN/SPCfhkOn+5jjgCTS5IOKLHil+HsZDjX333ebxnornwG
MOBxyEdFfLM8SA+bs2r41J/j0af2VVMmCM3hOh8JmZxB4X9Jg/glegNCbvwzqxMbOQNEy+zt7j5t
TFVD82RtPFmYVVYZZyll/WvAA+0aVpyjzLCIM1GznFky0RWLv65Wp4MJJnNRRrtG3muMznVO/u2s
tACsJ9jzv9M0IlMYjYH9BixhG6cZX02I4LEXXaPkhdOINlMMhsbArXtc9NphzmS4bY1/1yF1D6YD
EKLyS2Sr3HDl0O/lefN+jvfG8iKuVl55PNNrVQ==

`pragma protect key_keyowner="Real Intent", key_keyname="RI-RSA-KEY-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
wpMTg7STjFkUDhOqdNPa0FHXTnHQgKmhvqDv+rRVBvMiQ8O7u8oj7ibITq3o+jugJsMJ60B410gQ
JFTcqCJKYmYJvqi8rPLLOYDmFG6ZLP/Ixr3n62IyIaCeDltBahi3yV009QN0X+iuzuFCL+Y7g9ff
IvAgyBly+Z3Itv2H9EJMZPMl17Sa7IkgjmWqzVXIKNMKn0iDVYsQw6ZgzQDYQ8N8IvTIEggU3/lh
6Nf0hV0ev3qOv/2P+4w0U766Ux3yLuzPJSI7bKm3/ip9NjhOytxOiKKqVXhKG8dzbbuS5u3EE/eq
q6YxkL7gpvNltVqqBnJB6vHSyWrD6+MqsCtR9A==

`pragma protect key_keyowner="Xilinx", key_keyname="xilinxt_2022_10", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
Q7Q4SSp70lxFryaopuic9VVP/Ire0pSsPEIMYdURBAczC7ShkuYeV02U7L3BlAiyBE4vBKcwYSQd
cWiaj8sVP7q4kxoRHKxLV1R5PIO6l4DsLWE2E+1MLyUPME0w5KTular/oX8EPCJ5n/8VCtW7x4Vf
dpeyki1/IAPJkAyi3zVZKHzgKhEwnZaZZtZYuMWoPZMt4V38sAcE42Raf+7yfFWG5HO74JY6iEnW
gJeRk58K+avB/XLF2/j2RQZfjTYizrprT2tUMBK6e7DRWZZtk8AOcsMhUikev44IFGNbNXjP8BXC
0J3y3P7pCFT6l+saU83nRwi/H25fSA34diJtNw==

`pragma protect key_keyowner="Metrics Technologies Inc.", key_keyname="DSim", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
a/8ooC+s+6nfvfa1+oBhsvYWLJjFgp83DI1kNyOi5Am+ugPbGRmgGZudfyo6yw6Yd5gGbLm5aToQ
5G4cGF5HaXD5TU6A0ZZFMTIbzFLE76JMjjIxX8JcaJIZpSmrXqlru8l5gDINUEAmwUY3mRQnjcGJ
0Z+kMRH8iAEF+gEviPiFZSBbJeOPqivIS217kimQJX3BeNbNPQTP+GUidcRywpGMh5avxtA0kDRO
F9SoCSyTm9hr2v9hsK1IUAYQLb7n2/R+z5YNKNzt1oN4qgJH1wZfdI8if2K8+ohyOdnxrrgJOWdj
cOqr7cGqEOYfBMTIQeHVZzb7NGWVN+9B8XSUaQ==

`pragma protect key_keyowner="Atrenta", key_keyname="ATR-SG-RSA-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=384)
`pragma protect key_block
FLPvOUNRWNW2GU+FEGmt2XWthOT5bY/31DRbol2cUmEGNF6b2XzpCosNKGx/o2n6sQvGP39KRFCs
nJu0ihe2dUGee9nEZZUcpwPjnEfXVI3yJaRVYy8iL+rm59lXq0jX4sjAPieDvv8shgAnoXLTZGlq
K+2c1JhaHt+nFi27TDrYar/+P8nP1MhocOS7BjzCvSs0foEXj92/qD+71Sm/LqGr8cjlH2qTJJ8B
ynxoH6iT+bksVA2VbtPT9o6h1kJ/zwP4wcsL9l+qSlJhd4GI11JPux26DlNyIi41WmufQcfiT0PB
r6O9+0E9lV9ODwKdjaxfZRK29rjKeq2yr0jWhMV38XKKqHAJli7MIypGRXcCo+u89H87KgYt+ebw
s3foIqCe0JKR57WzI8VD6XdNtOL8eBxK539oemx4vkE0cGYECZKYru6A2hPeZOYDD5eyWSUlQl1R
EciK49WM8HnssyRVcmE6di6bISMbVi0TZG/v98bz+9UZa8DtqMVYH0tz

`pragma protect key_keyowner="Cadence Design Systems.", key_keyname="CDS_RSA_KEY_VER_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
fphquQOeFuqByo36Gh2C1zEC1J6u9swSMbMzsKldIvLm+SZ6/hr/N8KJ/G2vBABzX6UtbVuP1ZXx
AxdftP4Aqis1B3Bs6989aQG9eo0SOHA7r6aFLtFb3qoD5Pvqw4aVNU4z4EtTpFpn/jCWD21lKROf
q5X32HRfFq1jwqod+9vIbUNRRzz5y9VHvXfacZlxDazSPmcCF4hxB1KqWqT44KmYVkDedgkgnYgb
ZGidHnTb3W7C8tSqC9ac4kNJCL429QndtddweESJNlpX+65pt9Irok9pkOodwoj0QScswOIFjhBZ
/GrzZLQcFWiD3gXRU4DazzxQnGdRH4qEIRWziw==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
1lUYYHPCt1BUJOvcBbgMU2GSQiqfxItz4ntieMaenjrtsE9SLwaU6xB0tBl8Atw5yP/RRNww1kX/
9uZbTz5He3r9mPVt+mGxB4N3f9BbCrQRb4USVPgKO/+vWUfMQERGklScy0+fz75WuxH74CjRUoDI
8iyssb2cUNnfDe13jIoI8gM1w4w/Pkxkmb6Mef53QMxacHAWEZeytcH3fuL/adO263D8P90U3XJv
vBXJmbjkRVi9qzjBzfMxuOy2KbZaZgR3BLzaffIfFnMwg/Rb8sGls5pQsZv5jL2wk3+Bj3OXBYdd
pDyjGoalJBzObKzd/t15kNHwY4FXYFcZLQPncw==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-PREC-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
YRmSEzaa2WFVvMH1BwWc1TIUpVbzSEIP0VbI6n0sEgct/X4PiTfMQmK1jBVCaISIzwBxscKQwZOt
mb/nmINGg6I7ih39LSbBMtx6cdCUiyaLkPeRbqfyPpKhvnUIFmdKVvTd1dYzxeOeuDnhSVaBaAcN
3lngSg7lIbmhLIGjC29yQrBTiLArbVZi6IRGronMK51e3UrYa6GspsznhiuRcXjEb4bHKrJ2CM5Z
BUwA+E9949sQgyOagFZbLVle2ESbwBaoxcAPn2gxfRHlT0leqyLgUGDZLsfArzGzw9BTGzyEG2TR
XOrKFNYRfMXMrnGsBM7acIelY4LdAMgsKgDH/A==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 20480)
`pragma protect data_block
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
ZhUswxXqRrMjc5MOlEZtxws=
`pragma protect end_protected
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
