// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Sun Mar 10 14:09:18 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top data_way0_bank2 -prefix
//               data_way0_bank2_ data_way0_bank0_sim_netlist.v
// Design      : data_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "data_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
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
