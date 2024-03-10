// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Sun Mar 10 14:09:18 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top data_way1_bank2 -prefix
//               data_way1_bank2_ data_way0_bank0_sim_netlist.v
// Design      : data_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "data_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_way1_bank2
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
  data_way1_bank2_blk_mem_gen_v8_4_6 U0
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
