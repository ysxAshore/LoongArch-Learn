// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Sun Mar 10 14:09:18 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top data_way1_bank0 -prefix
//               data_way1_bank0_ data_way0_bank0_sim_netlist.v
// Design      : data_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "data_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_way1_bank0
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
  data_way1_bank0_blk_mem_gen_v8_4_6 U0
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
