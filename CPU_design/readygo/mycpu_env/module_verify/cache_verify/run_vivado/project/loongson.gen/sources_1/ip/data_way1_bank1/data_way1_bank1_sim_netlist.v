// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Sun Mar 10 14:09:18 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top data_way1_bank1 -prefix
//               data_way1_bank1_ data_way0_bank0_sim_netlist.v
// Design      : data_way0_bank0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "data_way0_bank0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_way1_bank1
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
  data_way1_bank1_blk_mem_gen_v8_4_6 U0
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
