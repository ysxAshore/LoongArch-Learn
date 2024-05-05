// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
// Date        : Sun May  5 21:04:49 2024
// Host        : ysxAshore running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim
//               e:/Projects/Studying/LA/LA32R_GD/chiplab/IP/xilinx_ip/2019.2/dpram_512x32/dpram_512x32_sim_netlist.v
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
rgymiNC8S5Ksvdn5N3/50Ho=
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
