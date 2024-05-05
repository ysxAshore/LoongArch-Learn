// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
// Date        : Sun May  5 21:04:48 2024
// Host        : ysxAshore running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ dpram_512x32_sim_netlist.v
// Design      : dpram_512x32
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-2
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "dpram_512x32,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
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
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_blk_mem_gen_v8_4_6 U0
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 20512)
`pragma protect data_block
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
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
