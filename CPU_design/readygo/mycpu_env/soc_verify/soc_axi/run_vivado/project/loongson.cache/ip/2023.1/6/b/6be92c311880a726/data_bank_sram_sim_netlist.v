// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
// Date        : Thu Apr 11 21:17:07 2024
// Host        : ysxAshore running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ data_bank_sram_sim_netlist.v
// Design      : data_bank_sram
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "data_bank_sram,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
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
  (* C_INIT_FILE = "data_bank_sram.mem" *) 
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
  (* C_USE_DEFAULT_DATA = "0" *) 
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
