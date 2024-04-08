// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:41 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top data_way0_bank0 -prefix
//               data_way0_bank0_ inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_way0_bank0
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
  (* C_INIT_FILE = "inst_way0_bank0.mem" *) 
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
  data_way0_bank0_blk_mem_gen_v8_4_6 U0
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 19488)
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
