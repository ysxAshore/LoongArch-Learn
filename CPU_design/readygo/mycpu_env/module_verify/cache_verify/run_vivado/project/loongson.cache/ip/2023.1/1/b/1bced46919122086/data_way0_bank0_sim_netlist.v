// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Sun Mar 10 14:09:18 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ data_way0_bank0_sim_netlist.v
// Design      : data_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "data_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (clka,
    ena,
    wea,
    addra,
    dina,
    douta);
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME BRAM_PORTA, MEM_SIZE 8192, MEM_WIDTH 32, MEM_ECC NONE, MASTER_TYPE OTHER, READ_LATENCY 1" *) input clka;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA EN" *) input ena;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA WE" *) input [3:0]wea;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA ADDR" *) input [7:0]addra;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DIN" *) input [31:0]dina;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DOUT" *) output [31:0]douta;

  wire [7:0]addra;
  wire clka;
  wire [31:0]dina;
  wire [31:0]douta;
  wire ena;
  wire [3:0]wea;
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
  wire [31:0]NLW_U0_doutb_UNCONNECTED;
  wire [7:0]NLW_U0_rdaddrecc_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_bid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_bresp_UNCONNECTED;
  wire [7:0]NLW_U0_s_axi_rdaddrecc_UNCONNECTED;
  wire [31:0]NLW_U0_s_axi_rdata_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_rid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_rresp_UNCONNECTED;

  (* C_ADDRA_WIDTH = "8" *) 
  (* C_ADDRB_WIDTH = "8" *) 
  (* C_ALGORITHM = "1" *) 
  (* C_AXI_ID_WIDTH = "4" *) 
  (* C_AXI_SLAVE_TYPE = "0" *) 
  (* C_AXI_TYPE = "1" *) 
  (* C_BYTE_SIZE = "8" *) 
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
  (* C_EST_POWER_SUMMARY = "Estimated Power for IP     :     3.53845 mW" *) 
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
  (* C_INIT_FILE = "data_way0_bank0.mem" *) 
  (* C_INIT_FILE_NAME = "no_coe_file_loaded" *) 
  (* C_INTERFACE_TYPE = "0" *) 
  (* C_LOAD_INIT_FILE = "0" *) 
  (* C_MEM_TYPE = "0" *) 
  (* C_MUX_PIPELINE_STAGES = "0" *) 
  (* C_PRIM_TYPE = "1" *) 
  (* C_READ_DEPTH_A = "256" *) 
  (* C_READ_DEPTH_B = "256" *) 
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
  (* C_USE_BYTE_WEA = "1" *) 
  (* C_USE_BYTE_WEB = "1" *) 
  (* C_USE_DEFAULT_DATA = "1" *) 
  (* C_USE_ECC = "0" *) 
  (* C_USE_SOFTECC = "0" *) 
  (* C_USE_URAM = "0" *) 
  (* C_WEA_WIDTH = "4" *) 
  (* C_WEB_WIDTH = "4" *) 
  (* C_WRITE_DEPTH_A = "256" *) 
  (* C_WRITE_DEPTH_B = "256" *) 
  (* C_WRITE_MODE_A = "WRITE_FIRST" *) 
  (* C_WRITE_MODE_B = "WRITE_FIRST" *) 
  (* C_WRITE_WIDTH_A = "32" *) 
  (* C_WRITE_WIDTH_B = "32" *) 
  (* C_XDEVICEFAMILY = "artix7" *) 
  (* downgradeipidentifiedwarnings = "yes" *) 
  (* is_du_within_envelope = "true" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_blk_mem_gen_v8_4_6 U0
       (.addra(addra),
        .addrb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .clka(clka),
        .clkb(1'b0),
        .dbiterr(NLW_U0_dbiterr_UNCONNECTED),
        .deepsleep(1'b0),
        .dina(dina),
        .dinb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .douta(douta),
        .doutb(NLW_U0_doutb_UNCONNECTED[31:0]),
        .eccpipece(1'b0),
        .ena(ena),
        .enb(1'b0),
        .injectdbiterr(1'b0),
        .injectsbiterr(1'b0),
        .rdaddrecc(NLW_U0_rdaddrecc_UNCONNECTED[7:0]),
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
        .s_axi_rdaddrecc(NLW_U0_s_axi_rdaddrecc_UNCONNECTED[7:0]),
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
        .s_axi_wstrb({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wvalid(1'b0),
        .sbiterr(NLW_U0_sbiterr_UNCONNECTED),
        .shutdown(1'b0),
        .sleep(1'b0),
        .wea(wea),
        .web({1'b0,1'b0,1'b0,1'b0}));
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 19760)
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
