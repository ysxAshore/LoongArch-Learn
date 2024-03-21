// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:25:41 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top data_way0_bank2 -prefix
//               data_way0_bank2_ inst_way0_bank0_sim_netlist.v
// Design      : inst_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_way0_bank2
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
  data_way0_bank2_blk_mem_gen_v8_4_6 U0
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
