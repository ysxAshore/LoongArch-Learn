// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:30:36 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/ysxashore/Data_DISK/Projects/Studying/LoongArch-Learn/CPU_design/cdp_ede_local_LA_readygo/mycpu_env/soc_verify/soc_axi/run_vivado/project/loongson.gen/sources_1/ip/inst_tagv_way0/inst_tagv_way0_sim_netlist.v
// Design      : inst_tagv_way0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_tagv_way0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module inst_tagv_way0
   (clka,
    ena,
    wea,
    addra,
    dina,
    douta);
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME BRAM_PORTA, MEM_SIZE 8192, MEM_WIDTH 32, MEM_ECC NONE, MASTER_TYPE OTHER, READ_LATENCY 1" *) input clka;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA EN" *) input ena;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA WE" *) input [0:0]wea;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA ADDR" *) input [7:0]addra;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DIN" *) input [20:0]dina;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DOUT" *) output [20:0]douta;

  wire [7:0]addra;
  wire clka;
  wire [20:0]dina;
  wire [20:0]douta;
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
  wire [20:0]NLW_U0_doutb_UNCONNECTED;
  wire [7:0]NLW_U0_rdaddrecc_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_bid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_bresp_UNCONNECTED;
  wire [7:0]NLW_U0_s_axi_rdaddrecc_UNCONNECTED;
  wire [20:0]NLW_U0_s_axi_rdata_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_rid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_rresp_UNCONNECTED;

  (* C_ADDRA_WIDTH = "8" *) 
  (* C_ADDRB_WIDTH = "8" *) 
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
  (* C_EST_POWER_SUMMARY = "Estimated Power for IP     :     3.08085 mW" *) 
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
  (* C_INIT_FILE = "inst_tagv_way0.mem" *) 
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
  (* C_READ_WIDTH_A = "21" *) 
  (* C_READ_WIDTH_B = "21" *) 
  (* C_RSTRAM_A = "0" *) 
  (* C_RSTRAM_B = "0" *) 
  (* C_RST_PRIORITY_A = "CE" *) 
  (* C_RST_PRIORITY_B = "CE" *) 
  (* C_SIM_COLLISION_CHECK = "ALL" *) 
  (* C_USE_BRAM_BLOCK = "0" *) 
  (* C_USE_BYTE_WEA = "0" *) 
  (* C_USE_BYTE_WEB = "0" *) 
  (* C_USE_DEFAULT_DATA = "1" *) 
  (* C_USE_ECC = "0" *) 
  (* C_USE_SOFTECC = "0" *) 
  (* C_USE_URAM = "0" *) 
  (* C_WEA_WIDTH = "1" *) 
  (* C_WEB_WIDTH = "1" *) 
  (* C_WRITE_DEPTH_A = "256" *) 
  (* C_WRITE_DEPTH_B = "256" *) 
  (* C_WRITE_MODE_A = "WRITE_FIRST" *) 
  (* C_WRITE_MODE_B = "WRITE_FIRST" *) 
  (* C_WRITE_WIDTH_A = "21" *) 
  (* C_WRITE_WIDTH_B = "21" *) 
  (* C_XDEVICEFAMILY = "artix7" *) 
  (* downgradeipidentifiedwarnings = "yes" *) 
  (* is_du_within_envelope = "true" *) 
  inst_tagv_way0_blk_mem_gen_v8_4_6 U0
       (.addra(addra),
        .addrb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .clka(clka),
        .clkb(1'b0),
        .dbiterr(NLW_U0_dbiterr_UNCONNECTED),
        .deepsleep(1'b0),
        .dina(dina),
        .dinb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .douta(douta),
        .doutb(NLW_U0_doutb_UNCONNECTED[20:0]),
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
        .s_axi_rdata(NLW_U0_s_axi_rdata_UNCONNECTED[20:0]),
        .s_axi_rid(NLW_U0_s_axi_rid_UNCONNECTED[3:0]),
        .s_axi_rlast(NLW_U0_s_axi_rlast_UNCONNECTED),
        .s_axi_rready(1'b0),
        .s_axi_rresp(NLW_U0_s_axi_rresp_UNCONNECTED[1:0]),
        .s_axi_rvalid(NLW_U0_s_axi_rvalid_UNCONNECTED),
        .s_axi_sbiterr(NLW_U0_s_axi_sbiterr_UNCONNECTED),
        .s_axi_wdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 20320)
`pragma protect data_block
STVU3yxE6HaW7gyzCFRihuET9A/N0yg7SAMYdXX1LEOI4l+XEDXJ1cNgeTJTBGMWd5tleOyOWpVs
k64TAnlWIkOPTYO0EjR3JthFbzUbDOiTKLaQ6I7brD3xR2+3hGBrQzX5zQMwxLhXMyMXRl8ZBGqU
dW2F/BC+OaRckcfeCZIMkHT4S1x9/qyGDkLeBFWgz2OUCtg0Ne5syXHXpNKBg0PLvWt0A6mgZ9Au
aA1N1/UXp488DMKo9IJjhtxGfnGFC20F9BArAexcWUKM1g5QYnK20RGEtQYkK3DA4QZbkP+ekDKB
IR66tsyQS5Uht1kscH2jLZ8aN+DliFVy+A+5G2IH79RRdxloglXkFHMyXozefsZEz/X4ZriFL/57
iqadQyOi5RAMnb05dndIRG1UiYmfZNUxGSjph3ZCa3y41n6x/8jeCb5JYcXeXBEH++SlGdWQH6wq
BZl5veOsKbiyekSsebOTqByzRRlNNKRjI4MznKkHqmkehSD/avhBAdQF8HHnT2urSyT8hxLq2jBJ
5L0bM27559kBzNlhpH3ClTWDGtXX1PN2eg4jGQF0o3ZhbGcvqTQIKT9Z4zfwUrbx4ciqAKDjq/a4
e0hXWd30PArrMynWfOOs+yKr2XqJcw5faQBZzOKruvVsa+BsrzEL5wY1kye+aUGs/YtkRECFJbue
CIhPgAGacV4LRel5O8ZygZGG6XFit8ww1khv7lWpq44rxztwB4N/JA+ciXVKlO2YaEa5BIKozR/4
/gikkrZEBsn1I+GJxhkdJ/p7AUf/1gCibQek7/qQ6KQPX41zf7iqnL8hfQcP42RvI7ZO1FtCvPB6
k3FJB98SMqx0jO7ZLp1QhHqeNa/v7w/H+1gQ6u/rcsBFab4otLP1UYanjtQ93Yr546J9onZkjwW/
7i7WDMqGl0Me4rRBB+fKqHUWQGWQWDuyNN7gie0QXO5ogbSa8U931XQk3NZwRFx5hNQtdQb9vQbs
fmLeHuMQrCLuQYjUWjRN31MrSqHzN15esKGgMvIW0V/28WfwIMBDLTcI99gIYf8M2NSH3MdEt/C2
635BpslqVsZ3cjKLT+Y04nVA7/GkHkDYjwyEVNf83UjmnI4oRPH1EeOzYKRbJmGFFgtmJUxm6Vzt
D1mzqIJfPFQGTTIG3fmrcW80OOTf6nYx93B4QmBA68Hbc7saVX4oTQYA45KwaxICgdfhtCRsS5KT
xEcZxvaw/KjBD8E2PzFqlLEqBMzFoOwb4nVTZH5xin/47TEJyqYz8c8YL3louJnQXX6ysoEC6baf
hCGChi16iLsSWLKvUV7X8URwZnVn+u6/4kinkBNRE5DnQMcWEIITPNZlxXrx9AjwA2z8imt63LAK
Vq9RmxkAa+qW6n52HDBQTxiax4fyqgPqC6TR7eSUfm94EyuOyIG4UNiiHC0jKnbcIqk+HDJyre2s
7xXovLPqOB4eL4I/kkdFLyLEJCOgHVcKY/mX9oZL0+Q0KLQX2WYu0pZkmprFowihkuEnUk0u9rSE
XeeXf9Y6N6sImaxdk+MUVUSZWYkwIJvMh49maT93lWuHOyFlSw/g+nKM4s9g03GhtKJju3egXIrT
gLFtCMSh58eLNY+oF4smb20GV2GIUT/JgQ+biFWs5LWZ++kEO7P9jjOBcWkB16csb0e8MwgEoGv7
Aw1QS0/gI9/gj/RYg1njb8TBxQ1gdzT0NyWTQnIl1XDLUEkvU5czbULVUj0BtaN/z3jamOpNaKdq
MeRCBAMjUtzZsgFrU7HUID0WWRdSn6ANq7opDom+4zZJVVHfJ3VwJ87Au1YDew5iGeJ3rdCM0hFQ
TkzFeDgcheC+XZq/BLTL2T0J9qySYudTJXm0y3kCazIRlhAKNm+8SxdQ0hOEZiS0XXFX8BV3Ts0Q
KhMwXVx8sAFTMha+pUsS3sHVpSE/thHkic6NrTikr4BL9FbS3G5PYE0h7ry/7MDDls2E1C7LpoUV
QiIx1Qyol2GTuBhZXM17nN+Y08DahCKzUDlwi0BN3o92CZLgO/emRB5UHHzdwNwh7LnnkOsG36lt
TLSLncdHq97hZXIqhgQBxwsNucyucj1PLZ7q+wi+iqSPxSa5iamY7I7xJn3xUOReuHra40d4YAYd
mv+F/7GPuf6cmcyBDWxATj3ST3d4y3EEifj66wsev2B1lAFc7R2QNeRtefZxbsotnBbw+VGUiyo+
QqPG43MV/nGhiYkOC1qOqTwBOCxqb1tb9vSNTDlKE1bMG1VcodYo/F+I2rbjOQfqcTxUWmJQDfGg
i6A4qbaswPRqENIVML89kceDxGVKD7uogXNJus12Y4jQRLO12B3Z3l1gWJXqAKb2eloXim7of2/8
aT65zyrk8xxnn0oLvmwiDCO3sSbN8Kk/7bhb5valvqYVejde/S9dVRlVbA726z6Z6slc4w3aw9Aq
RvCD1sQHf2ibtCfTxBiPF3Rolst8GkVToLUwdw2V0wL5rZIq/8LaqCKAzsagzYL0MDWIa8CmPu6p
mp5Hhw7mtApvI29NVuT82IRBp77anz/sY1cICcMB1rNh+xbHh83wC4lAbv4EROB0V2JaqpkN8F+y
mULtM+OFcmRre/CKBo4CStjwmCdoBwesIOaWCe1XvydgFMB+shLJOF2Q+1dRO4ktOIsVUO7d2DN7
uKtnKCvrLnBomL6eBA5QtddGMJZ/z3VQG4wk1gniIr3QwlN5IcN9Hub9mnEpsibkge2SwdujuDYi
9cPXDGOw7KaVoqicLS3i8XgZ/FkGfstc5vbqynPpLc958kMsoQxMO28Fq0atf22lQ8saIrFwf8K8
VXLAjby6zV/N8ly/gomLTNqy7dz2SlZHDJou4n3iBVykv8KNlSp6HAFYll7qvszPR3LzGZyzWJLJ
fcpXgDj0Ksg4kahQNlnHOuixzpX0iuV+GjhwVKgUjM1v64YrcFGrTA5zEeGLXO0Ttwh+LSGtyFie
dCf2KZobIew90XNkmI0NXYDtfNEG/d9lCzBAqGz3v8po02sNeYiBht4wU3NAezXpNbc8/YH1XgoK
BNxCtVWW+VOUtN3O/LnQL9MnsmCLbk+Osnu0ieCrBoR9qV7Pj8/9OrKROzPrhgE4obvndVL9Xb1U
x60NFAEu1d6OekzYTMomt5WSb8Veun3G+ImVSSv81qVunAhhpNj9iLsLfxlcyHFhvUhJweZ2aamK
vJ4zcOJ0di1Ekw3IR54vM8cvg45U845YKGhMpTGwJIKnF5/MssZrFnwJ5jtHwHz7l1vm+fnZqx+P
Q26OwthN208YkbTRuoFi5jwv0ZL/VqlTD134BtYuXXwogq3qU7BA2DrxfnqfYlQ6gB0WbBGk9C9r
fwUAUopKNKlotnWb40E+leuUVAMHaso9PphpsLK9WxGv8Rmtc1XY+1s/bto23C3GOTbZIniOFKll
NoPY/OELoN9bbUXaeSSuwzZlO5aFZIUPNewQEvGFnno/+EPM9gc/7blgYzgIH/Pw8L/iWpNDkNml
rD1CRBoaXuNetrdADKI8ymdHrS3rkieMNEJEOiyX00tYxJRqiaH400IapTETKqA3Wyf6OK5yW9gj
4JNfHO970Y1rWPNA0w/VvueWrXJP8axLgVZ9HRld13cw8Eob8FRbMVENqgCUkJFl9GGO6uly4rsh
shTUs2OZ79r0/1Gbmfbz/Ar1eC5G8VUqokICxM7Qa7R6/s/h9kNEr7EE/3aHVJYSXQBDx0Om8pEO
LJchXDQBo7HRYvMOfb5LyIh5c7+eIJXrveX+7HpuLf5kVx0j1FRzXaf+vxwSepKyAHUEXg3krd1y
F4jjAmG07lYe9jogXZM9UjclXA2QEM3cuDFPxcGoEABXhNh29IFpEPXMKZ3xuoVKqZYinsanNc2n
IwMwOHEfOd3PZTnSg8T8MN6YojHC8GcYUK+/HDVzGzQleiet4i8flwRXwOqCaPAkMdtsb+Qs5Zw2
3lAPNlQGm1eOSSRm+G31wFj+1Fzf3nw/bJPuEpaloDKRaNoeebSD2ime0Xb/p326VDetk47drDdm
ZpPlw0EtMQ0on/e7wahwiFCqJFTrweApwyNSAykUh/8GFye6GcjRGetrPJDo9Do36jlwOM9UPMC6
23zJMzKyl4PnMbxiNdWSkK0s2wAXhP2rlBrPuv/6muODXtTnjJSAI3C30wkeDwOMtKgAVGIobcB9
V0P7kBrrnTWJEzisNTbTHW254JFHzvd1G89A9Wr0h8sn+qKpasjKG46g6RKGcYcTR+fkYjqhgMrS
lhYUSe0ap3f10nnSsXX7heXqnkTZ87f3n23EH6n5NkYykYUjG+WuV6B74Xtx8bofWRhFB0YFNFAK
An9/l0GLPTToevfZvKGHImAW40AMQ3CcXKFLtlCucI69XYYN3gtNPodg8eO1K3usqbJq+2IB4918
b/rlSEX2LCNOGpBeEkUEmX2XUAerpkPF+3WcOcs1/6JQpOD7k3oSDFigXhbKDIhw/8zWTbcpHnk8
Ko5F8U+GmZHB4EJGChRzbgvZj1ulrGZ4GSR7/Bg2vhSSWVUc3bYjHjVwf9NDbLkp3cvMYpsWIMCJ
8VlcjAbFtIAcZFXDRgaYzfpwwmPfMvp1fUac8aRNrjqY+bYBP7ZL47XJ6YrxMH0+qcr/E4/GK6o6
+pMyVD88aeMg1VpCJSsALm53taxPygRSGlA/FsDN76HiTlBVm7Ku9QoPQKRtjeyXdaAp8GuBfYr9
MSoz1AasluwfflvpJmoF5n7XR57YSyPT3ElK7akSgWGvyGGqML35r5p/OE14tNrf1twkGsfENGIs
vPnmiwH/xKAvgWtZ81jvcaOXvEzS9Ho4jWTJ7IqmAcMmYOBJPLcwWuMimyKQraQ08mOPOr+UAsvn
vdZYuCBRXB4GNT8SqTwPU8xp+PYxPJCUMwsqJVYnHgtbcltmGq52q/xE1JR/uL5F8H9RjIIhPZI8
MN4i6lXc5QQEJ3gQsdaM35IefKQtw9ialk9To4ggu+Wqp5wFS5NQmep33BvBIEDddqey8qxRgbYV
9N2b+VLDKL75epY+kqmnt22hHQiMOSCqkoPJ+kWWd/llMPr+j3cFKvgyQpea174iza0F86TxAbxm
3SKXf2VofYUapRBv3ebbTdooS1cOMzEiWxN5MwK9cvowv3D4J1hmj+YXF0CWA3+Vj2IDKyR/6GnW
QxlcTN5qQYYkNg2qDMXXBK7uSuVPdMBqOEY5FEglTMXDathqAzWHTN5HKETB2oBf9xbpQPBJKt/n
jN9MVDPeorrjSgaWvvgFzCwZvDlK84NQOuXChUA26JL/PvUR2idyCySPrCGeOi0+JYJ8VXQ9Z6uq
iIMmdY7S+1stx08JNds/IMXfpu4j55E/XPB4kaQrLrh4GGCUZzS8xsR4zAgSeOcV5sEGUg/cMFYQ
3U3FSx6K524czc4t0g32sPoH9EE6HulMEUPM9zwOJ8PIzPks/uZT+Z5C2PeZCJ6TdS5iF+N/hbeu
rFSn0asz78JnkK8Ad3v/vxsLgqEA75LhMCf5Bcz8DbpMSwZDZRXaIZ7MG8SkqPRNAyW2WgCMTHPi
EJ2ACGHiW2RdeDg2lpKY375ik3N6mYMze0kclBY+TrKKftquv1WNFTw5a8RNj4GxVJvVg79jMM57
5DZPwfhiNYGXFBNF4jiWwU1IvGVd82gO1nPCiGDSY6pjKZjMum6dbYXPRB6ReuRdG2bEjugYl95W
/Kn+y3V07RpVDVlWX2gJvnpsjh2s3RHt+/l0SAU56PRI+X2b5BH+1E/hcqpo7M0krnSDwbpHnOmq
hxBxecw9bIJxtMLr32PxpUAZmoWpw7tnN0Y0wyxnPSd1Yk6NgQorHlcP4tRrReEiNRfxQTdkQaQ9
9eLvq3TQNziWIUaRUaZawO5mwAhcbADwyuV5ChHsgx/cGuZUvemdxnmftTljetmaGd/rnS14OCLc
coTXKQQEB3T6Rw7ZygsIGlmos1uv5IJpmam/6udqCUTKLEhknuvJ4wg5OM/Cu44Iv55yo+lgR+hw
P9pwEygxjVUQZ7l8yaysZaIsuQRoNLfSwbg9Icvsl0PRyHhGcgYxp4+EJRxqEkSBsIZK9snIIltf
/oze3x44Y0xpNuNlEPKRExiq+bZ1liOfIiEDR49nJ/5KGAsTc8d1hLWweATyH5J57T4GXL3whZY7
1i04g5ZuLg1fPAE33M2t4BM8aOu0gLGKvMBH/JWtJaqNjHbPcL8YWT8JjtkJJNWJMo8B+uYl88Jq
2pLaIwV9Zzbuzf/rIrQyRVtr359G/cXlUbNOXy/p/ouA+JSPykrpqm35/cPqR1RQsieexaYoXAjB
H9PJ9pxmFImKcK9VnXSp4GfKlzYUE1ZKobbhDJlAl2wCRfyf8Ywhcv5otcIyx4gB1MEY8fh4WtWi
XLr11JyFiPX3MrUP3s1FeUJa9DnlFMpk2eAefYjS2Mb3F0zkKwhkAYQzhikMplpEZCL4rp7dqTpo
cbUy4Oobg8oJpMiJRzhoLjvUymW0RlUGz/zaQEdKJKsUOJFX8+njwkO848HsN+NhNTHhm3CxTbHU
en9lCXxNkajEg0Ysv5A3t4fP9cRYCQ7dwslVa8bN3Y7jvFZL0fKYZhezmcjaNEwHcol7xR+YvR+j
UfmGlvdr+PQRAf414cscIXlrJXUCytjTYZmC1Sjs6gOBr9PKdIHNXq8YPjmttcUk030541STReYd
mIyOohqckSCnU1R4X4uJrLyqH1GCWvXp/KOCX+0zG5dBlhtCv3nM+w0qTUfYmPHdpOW6hXsajF0K
utcMPWino7qLkwHTQvIRIuHFqtb77TgodJPN6KBRTcM4gNzz1SIjyCWEl5MJJZ20w1ckGwVdgwub
fgujZq3Ybh7nYdJgPYinRMFdFV6+G/r7Qg7f+EzSmkSuHm9xYPAjPKBKnC1P7C792EXutQqnCX8u
Lsfzs4R68I7gkEJ6+MgBXTTUdmq574skJiX1TdJ782mrBJjECK6dREJBWSboaI9dzZDFbx6wRutx
bITQjurr4xmv5C5EeZN/dBzzEFDO0+OxBMAMuGvtVPEGDxKs7nzZkraVTqZUArvA+I44DKmI3BcH
yXH2zseZH4o0rq5Zr4QNMbjWxwEhJ9Ch8PENDQQ1O5KscHxwgCum0Wb7URguFL93HocCfn2Os0mV
0C6VvXR92An8Lg4eNCg2sn1RmnXuCj8bmqi93xTM6e+/sGA+YoJlb+x3hj+bhJgD1j5B9MHBrkAf
Z8U6rz/FbYV3e00TFWHvDSQzcYc9tJyIzwPix6qObePdPEIxhoRt3Xhho/2eiA2JDTwvV5cPirTG
3w5FK2x46iBpLoGc5JmpchkjwumgKW8TW9LRXWYKTJKUXROyUVVS+70OaWeyDz5V8bm9Cc0FtOkL
MtuxjqpShhy3MFqFpkzCeJfhIErbzwxiA6ZaPeVOiwY290mLhsX0IAlIhn68316mgC1o8Jk95IsG
mRzbIVb+4e5X/DRUzPsj/nNG0eICv8I23ELgG1ecNIQdco/61tRQ4cVMjH2FZ6HEWvZqRcIE6a44
/plbDhggZPaB5gegPx9TZsTBw/gdn/xIieHO8RhH0e1ipiOdfLKHQaKLC5Bc3+NarKjCUOBKxEPU
30QLZAntfM6L1kHHQI57Nz1WgMPjKNgJYda6/NwxNXsuUQA6eTjy53WruaZRRXiCDTAyXoPmVXKc
7c/QF7wk6QjIGZTXmpATC5KaqEqPKszoiIb8oRLG2afGogb8wYaQVtVrkcprz+PfdDoq7AZ39XoU
CX+aZ/lGY5sB2ZzJhDVMIXREuacV34jufoWMJ9ftH3lh+UMJDkFU4KXK0upJ1M4s+e3li21WoU/j
0t3ba4RSKJFxXym4E+I7p+09SEMRj8SdKEUo0avVvvfaOgj8uHX0GRQNjMpRY78cNQAWf9GOvHWO
29H8Ps76o4EJGMiI6kDXMrk969Y0RPdMKEEpV5y9lZHsZLRRRj58F8RlPDtmnDCmOVT3/dxsWdVQ
+YFXhSNrueGkOJHc69SGz6te51ccGHPcHnDGxkJHBn0winJyBpRkbl6a42MhY6fYfAPkV903z9np
xAWYi+X4YLNGz6rNY1o7P2nUlsIUh15TS5cfc+xxt/1caXlfiSQFH3HWCzds95J1pFCJ5xs9fybP
PJNjFHSE9X+EKA4rWoIuoySy7IVfU8RzVYR/pwkwyfe8lfwtdDA28fYaZxoKKrL78H+AI8rj+0DT
gK9U7YgV62UGo8JhY+uQ9G7qVdYGboBZqF/B6ITG/96dgsiv1bBnksl4Rd5YTdaNpxJEiVST8aeU
oSIQMxjy6YWPfgQTwip0J9Srnbjp7TWLs+3RyGDalArrFVyJqGv34hHNktQgH3vstMmisuDNpu0X
3JYrjVOxcUCi1j83DIZNZx14f/VFWjAeOdpO4FuJi3huu5dlMRY2Hvb0LwC0KEuQEgvYOuCTPga5
hxLJw7tretPHpjESnTS4qR00zFlmKMaYklnwDvvxlJSdd4mRxON6H7eqWuY5OdwuXpyhj5PtSHCE
fEQnc8sMRxyOjv+ubnp5Z5HwiDd3dMmAUbCDOnlBRxPkonM5dLIGLWBcx02sW/pJFziZrhJA2+d4
uYCg3cyLSpkTkKDztc8xa4NfUu1pIGNbguTx2sDLSehc6xWTr1ih1LJVQyr3Wnl4NoT2fIeSTNLr
eXKA098ZVeBrVx5gN8ogcFLj5SZBxKCNcaU+9Kz6r2AOINMK6xxcF0KhXoLd1OV8OsytbQhJvKkc
DJXPQSkBybKaiGU19Gxn9k+bkk2iDutgAQhnFsu0R+QU1Q/VumRIAXKtGYR8PEjLovOFTOr1ODQo
kbXZPfKTBmg4xfAHY7sAPltzhfedPVM9HdhKHh/LwLjdxXMtku5vAYev2sv53bSdc0odazlpYCuM
mucbCt9FRKwsAeMj629XKtECSz/pwyI9UE79h4lHaTAbVs4ZxPeJwrrN178SJFxRRkkVgZkdiRTd
fQ9BrAfbWeQZM5uKioB6Gzq7U2wLHsA5pgdr9TZIAE/ZPe7TOtHl5foFh+5ZP8kPpzM87mGloLLy
H99h4yNomELom3N7bixR3hyTBHjX4g4BkQFXS9dkEqQs6IzgpWcbekK7XeIqqVuJ6tZN5Jz3DKYy
VQV15OA1LmW8hU39L5DDU9CBpyNIEIVndOAtwLqj+FKsuNbkg90Jr9ByGf0e8TkpjYqU8+fnZNJ1
CM2tBQzIBEV4e00pJIJz2upxfzzCzD3qj0ISdqruuHtsc/EnxK4+Yi7OqDyS/Jd9CJfItwyHM5ku
zEAL/6Xp35cnESaLABptJkMEfAaCmYXzBiXW6rFPbz+LKQYbX34uS+fdZO3PNN9Dno/CUacvjbli
fOoEh//bIqxrXrXIuLzU+H2nWb/3JscMSSjoY/t3E6AqZ3QzS5RknJWGrV2Ap/lBPOv30BOfZyoL
lCHPFFMguvckHLruLQcsH53PUTdZ2pd28EKCiVuXRmep9nNBUSWCAxIBFdtnaEFrYu4T/Eq88N16
Mjn5Xz6Ju6KgWLxpHmDxRVO+R2opkmNEbR+8M/vPwvOEHMHEG7ZmVSKB+ZZ/4+dBuQcQB5KzPw7t
deeGpYB4wHtYUidOLwFI+BF0F1ChJDUyVPXpaf1YQhyCQRDLu5+jRyyd8ebnZVhjGL9EscqKGfvk
fkC9LF0IAlhFCvr9Z5z4zHrIlu7wnOxqgsR9UAUeIMgiSYd6IMQD1lanA3+QCLlJNGFH5iaYHAIx
TCY54ls567EwWJkFXIH5sYvSTl3t94sB9+gG3JfSVDD13RqOUZHXGYH5SNfFt2xzJFfE6MaZVmVE
z1fLt/v4wc9o8QWhOi96oDNg7j6qc+qWKbR6YWtof57QqTD/crjhmURU6FCCiHJljQVpLTEQ8BnF
906lZDNTdOuxH07WAlMDQ2Y8kHFgrzKQ7wrmMDGJtNr+5/eqfclc7SjU9rYKggjWs+vUfYuKh3F4
AiDxrUKR+9sf2iXs9G/hXqYpIQ6iSVai5vfYxK1zDpD8e2wwA4mJgTSTspNs3k/q94Oo5ny2KUgl
LBMc+eL6xSPgTElacs9EuKJ34gGvU+h3q24QNZHFSVQlhxuh2Ypd+u2Bb5exfGE0hJ+3/NkDm8V2
TaBcgiTdatf+po+phYk/sdgk78crXCbJRw6X7GFcK8L5255H16dUG2Htl8Kf1rSR2XuYXhI11hGN
PREMfdvk1X7CqTpsPxFx4dB+J4OQghihdj+wXG3v8w4CcUZiO6EegSBhqPDYcq1Qi5WIyU2ZHa9B
KoC26V2+fgW0drXdOY2REr683awph5NJvVi2WQ2FUoee6eEcf2UqKEYm7pcyvw0Ob8+5r9wFRxak
sdtSO9YXu7KWngI/t/bkRA0IleaJ5B11srAWHUF+enQV5SzViSwXtZmvIE1G0PeU0M0eYiTkUDjw
A4bTK9mK50OaM1mY6+6METDgCWDZ9HPnItqKU0LqP6P/t6yBpGELxyf3CW1uQ7GDIpSTjw+8BVmF
XE+cYPVh0JwZNYfFhJ+dBFgKgPR3b74KVFyoObsCLbu2qGLKoCqFG8oraBNe2TGvHushyqf+oE3y
N2vnvXJKzPKEXgkvNjX0WooGMTMk37dQZPXX7N/IX5iDaNy7n1CSKj+ql9g2Vj2TRK7J6EdmZKTM
NpNw596VWNT8xslJjedHxRLCvchIlX4yT5oXKu+ETtlCITr3TprLKd8Y+CetrWIT1qQLGi/dIfnw
cFgf0ImhSLuPhJTrhCQSlQx+8hq0GcGQ+sahZJyqDg8UGdS6wtiASuI7M4AOCEN6ouLKZVVIjaj8
ShSpbi0QgkmlXVsEpR0+86g1ZBmv3L4AVodP0uPKb3vv6Jgok+hYbVDcdxEQFwMZMDSfJjuBZQHI
lcX9l1p9zJ65ePwe3tyQYxKn7Ehxiyv1wSPZDPhDokviuWh9tlza4doMTbfk+X5aie/uKCkPM8eE
cTvfe4zjKvEUSLVLN78IKTVd4XunQ7Kq07qMuGu4v+0KFP3Q3190gFhWPosBySt62Yc/DcK5zrpS
eYb2PczsRaLqvYo5JufoVc/tpQEAmsFHSKhyxv2pId77VlImDZOFROwH0aOGO+RdozB4NdQtq0md
nnwKbOYnzNAqQjZrLuV50amuEONK8kI3XzY+t9AeF4CQ94AKJreH3lC6AedU0PR7Y7Qn/V+vOGIo
/8OVLLJLjVgEzpZIePvpiE2tOZxj6XBdIns8x/yRPdKm1Oek/ZTWRQgg9LbVK4xhTg4u7ISvqTKS
oSf3+9yqGoAR5YF4XzBwT2C4UPqErYCf3wVSdus/FuDlYAr0LUVr3K/AGVr54MBPn+uqO4xYKpOW
SnMLvLSPmqdoCJAq00i6dywg5KNnJOSLKYbvIaMR9w94Cs1lGsqgO/EFOnwMU4SAwyFcHrjZv9Mv
IFtnVv0LaA9RRo4PJUsPcwfEP1lroC1U5ly7As7f+wWSzdLEecD213t6bud1UUYpB3XGatJCecgn
itIEGCzjaJIKWO0jAjGAnASuLkie9YObAllaTNboNTSV0MIfb9OS6rX8fXWcLKQcJ0sIyZW7P0lD
D1sXH0UAOsin70sq4kj9cYpHsUTqZrZJt9VxfPZjGd2IeIH8oJNCFL2NkW4HAIZ0iYivjOh7cx3v
GkcEbe5m5zhnS1O8R0p6cm9hcbmTn05LVJjOqpDRKHqUt1NgeULSDNlclBUzA3+UmQ63y3ijWgnL
wdp0vNvoN6svYeyXvpdO3+B3XydnUR0O3SQW4lC9Oq0Lhhz+Gb/Sv5j/NuMCD/fEnVZYZDkSUjK9
ug9u+0iiiWDiCfoNPjjc0WSTxrBgjt+fL7/uRk1Yqq0fUwwm9KmykshMXSo/ccS4ib5IgJD86JsY
FehH7AX0cYTfd2a3qfl383vqEk7uhzH6hjqe6rGob4Sv14/eLnhn6XxvLstOASGVC4J6ypZlRcvF
HaJxUKPI2zC5TbwxVLi9FmnS9DnikDZEN68MPlpkDOCMzQnDPosvlta3SADRBPXw6FEOh80kQ72k
k8UVaAAnkihoexaNnBHb+3ZMf4LRPl+2dfmWxpR5Bpo07DCA5tBstu6yk704Ij35m26XsdLCSflX
HjPHVnGnbum9oLYcvE8AEN7sfOZ5L5sYMEZvlwpxNPs+fnh5/AOx3/eMeAtouqeJWJj1p5EDgZ13
81kawn+E0EHZNQVgTOJIV0ALuAyu0Wypk5lfrqaptlV3ux2cvSAN1bNdVRtFE4MDIyF4qY11EovZ
bplBU6HZ2FvgUi9cU9A1fUD/LCaWW2j1Qv7D263Zu7EcTJwK1Aqg8S3Ny6QyhXBlWfv4ciWgQtdD
kHKqr8ZRwEBx2bKoMuhENMGEQf63NI5UEPxtkUUnhAVtyWKm5ZBRRerId1hLDK4ytBhoVTwAyOM0
p8pXdnIh0iKGmHzBTOlNVSGby2OTE00NFTvk10DZi2Qnx4e6ULQMu+1nQvChlmasUNREcxuHf9Tw
+EYeJoiF1RO3DOiajDCCAmOuzyGxEHFgREmB5MQApmhERAN1Xj4SexVQTJXqnYCx8bz379JYA0tP
JzDX+iN+P4aLG7pm9DlDSSXHfY5bhtvbxSSnmNEzXxI3tGq/uDHMTL+Ab9ygfrUrfivK2WHDMEOg
csENz45lLtK5Ttt+jJj7GjO9TxY8YKdHw8cYnOjjwFH9mKzwDstStuvAm3NnRKO0k9RvcVUj/mz7
I34iIrJlII7q87mUsEW/SK5mZOJoCqW5lmUBiLXkpY/wmTzme517dTIGhssw/DzolHr2mZpkUX9B
7aV2RzUt3yigrG08Yh/8/qVZfAEuBVwLsN1C8lpmcliIMbikQf4aNAaOvMro2Vf/he0jau/7Vvzx
a5IqW3YqaE8u43QZ+EhdKzdeINe3iBQOB/TwPywGQhpDxuRy4XqNq8iCs0c75Bef1NL8pE6JqDzT
2riXLsNrcan4F8378puktrm7BaI+O8hgqn+9AjzV6yLYcZgOj5Gymhra8QPi2QYRDrqt7ZVU/0Y6
XqWIKuBfryGfm8n7/88jEAPQs12ruZyrdbeqQpNsa6K0TSWoXzMjO+Z7tNJG5H4psxNjZC7FGHA9
UKRJbJQXA5MGkj81GUBXzZ/SqS1FiFTTEoyEcmZCd/Mcn48qBvBHuGUfWrTePN98S1y8fUbCyJro
p3o0orhujQf9pbsYDzqZ/L1LWfAz+7Y6FdLsgUtwOJAZBq91YtzrsQ7101R8jE+HDNo+9Diyzuve
cPDE8HfcEVzvrNQR+odjXhbRlxm/tXJ6lUu0CNeAqzJQ+wkRe6cEFWh7BSJtKsDHpS5r0xokNcv6
N4+bit/NWH7KNvfYmOu308uTi0MnrRJaRlgtiJX6Ibhi80om/eLPF0p4M7le17gagY3Tk/qrELyH
MJv/rDAW/BRKgHmgXwJbIE7KqzA5QH0BSkHNI6PJuY4Li+QYQzEUeHgaXOkizHaRV8aRP0o0o7l8
M5ipz8VuUyyORs6NjMDJHYME1pfT/1+V15GZ9V9BOAPVzAHroqbdCGs02U5mc6OdY38rC13oj4AV
PdR5ombi4q6V1nMcWL+hT8JH4J/w7EVhjHHTNOnlbaZZBA8HEPmhRUMqA6nvVjNfzuhIl0OSGiX3
pgpIJoi/UzjO0zhTO8RipJguFkRGZRj7cxXVm9boqgWLr1T1pSHIXOQPqALkRVy/gCLnoH91EU6/
M6U/YJo3lr3hXievVXtzArPbaJydyXod754xCRN6V+/qwoG9pUgi3yPqxcdqdb83yjTYcrVGIQ29
V49TQ2Yr3LTvvM4HoMVZamG7yz1c74f9nfgM7Lu06kygRRtnykDA3ezNn9Quz1ActJxMptn/Fzox
JorZP2WFsqJQOnTHQsIMxc2TGhd0GNNqsOeycdLKjcdaVMCW3rL1TBH17u++YwiNtGNmmobhqe/i
txoJBdn8umSFLhpXP0GTYAzqYm3qGD2z2jjXP8JTLGBnCyfTznhbjmUqkGQUdpDfAiw5CIO0qWZ8
BpYOcBN4m3JPde+vCpHjCOT+t3v/+1JaJ6PNf1Rwyh8ij25Uo3tOhnO4OrrvLmcCF4YVJDbZKG9e
mhDvLaqQ9FTXUmqsn6SW2l49JLQAt94uLO/DovM4aO6EFXH/Kul+AsuDzYRKzbUudZewpVhk6d7H
ZrFJ30j38pPNFGPQ5UOEpcFLmRY5gH9dDmvj6ub1C4LZ8rSfPwgflLdQQq8RvxcGDwxN8MPzTg6I
FeD3AoRTsIbOotdGRwZaTnlJPWDmHB+EubSd9pkVUMCQr4lGMqPJqhpd8qX2PVhM8UIlflt3kQNM
e1lW3kdRSJAFflYNhlhHEySVCsA68hNClUMJrY/mFl1yIQw7+7Vxx87FYUZoDPx6euhbl4k2s66u
1LO/qaKkb4jjY5oLTm+coty6jnD4eaU7b+Ng1mJoBCOe7e7gJdzQrFOx6+8TQcQJg4GPmcT5Yyos
XB4q3s9SeI4PuS2RwjEL8wrOFahrSc90qktbo5NgnDJ8EVWUqbRoMCqTExAZaYVBnHAzhzkw9xPO
o1tzah9S0hwG205YCM8MmsgLBU6FrvAywlUdRv7KQSH+CinmpAcxVIKRx2mNdgfJuxcQMKKJXv3T
vbbuAKXQz315D7LpFpX9RGaYFT6s5AYMUUqE5N2KlcOn0tT73sMvJeTLaer29rxhqXk3XuslNoKJ
V2BAT1wq8thmPG8ViB6b7BdsnGwY5T6jLIwXSnMxaMldSiw9kwjb4hvb4NJBZfOJ7qwk7ZtBgMhm
J1CVko8shNtiwKmwP19Gk8aWu6WIDQ/YaIIHHYTIAXy6Gxn6PH9mbZ3hFXhZ1L/puJWDOwD8df8e
HeCqvKdr7b4X7Ibo3XxtdpEsw27AxJKNcv8r0kq/MdC+ialcC+zR1OeXQBMATMj1Pzjr7IEA6FwK
ZLv65Y2i2oNPgBBd7Xj1m4v4ExRwth51myPmoThX8T6v6QcIQQIUWZDMo2Q0PzgtXxOdvUeT4UZ6
2LnyvkEnhiad5bwz4TF0CxcRijUsjpjZjbbe6+h7BbXYU82dvyLEiQ4kA7cds9S2mSKtPSMo0q8R
W1JNFc+vx/gy+HWG2wx6Hndy7hS9VLZ8Yipb2E0PXen3HrtPjYgvxdNNjfChAwi44tg23opVxXW3
OUt1xHo/AERxtig9Xb2zmjlD5vRCDEFia/pBeernZn0n7in3+oP841cKu1Ym6ky4NuoAXi57G1cL
3+u0FPfwx6Klh6EDmP5u1PpHa1XIIi5wa+TcoFl4foNE3m+wNHoh4CsMrnmeVdD/vu4BnDC+LkBt
NYYrts3TkpmymJ9EpSNJA93qu3M7yXsci4My+GPqS40zAvzuAJGz29EaUTVIsLzhhctsmIMnorTH
EUMaDkv8GdkCosMLYOe/3HHhc41cewf4ahK7jSma2W6Duxvj0ja6Z5vRuiGRgi3zdUWxoNTwdE+f
AXZjlWMVAob+XjGIZQxJ6yinsAfR8pWrh2ahQabTkPcsflxyyfyv8P/WnA7wZ7Hb4N2BCH9rptEP
Bu4HcWuVkH9HkDdrKA8THN/KolKG43pK5a9kXmSJOHsK5YLpDm8FnCkRnny5PwSORHPBGAL0IBEO
rZFHdL7WEvzEslIs4kEaVQ1we2Kf8wzcwOTQXMjJtiztnrH0d5EMFTz859Vvc51y3V1WWZs111R+
WUa0Sh5ujIu1z1wYb2a5p7L9+xxvdzm9J9tw6wBEvwYItKpKj97n2DGmqF2BaqvXSakKQQ8CQSLA
b3JH23FcDaYiRKj14plm7qk5oNl92ZF6vIluFDnIGFbIAKF3Zq5Kqrszsvb8niWZRmd0CDk2UfDJ
ATKMqMXT9HWW8jODM1KP2Nc9xW94rPfPQs3MrmGyMtGo2PvtfGaeh0qVmla3sFmtpz5zrnO85UyU
rZKeMZ4nFznAvhJNcw4AvKGE0w71dhh8KV7U4m4MJBsvuDEDAc11nXqS0gfgD6LUew9D6LQeVIgF
Lsygf1QQDg5x5iSofkkgCRem8/Y/Slc1d1ah0NeKErARpDCMsNxzTf2+DyZ/fnpvLp8U0Bevgi1n
erffZA9ZuA+vrF7aO8JrLzCllRIgkRX0KLvYlfp8FTWQgIbDFyxeARUFsAbuuT/cosevpBFHXJSX
60AuDAsMO4mnSSgcjh2dmz+Xl95cMj+zvOZ7Ie/VXiOEJbNQqN3fkjE4d5HNpHhPcUnnndD04/YN
2qME4bRXQW1Wohep6s+V3Wx7zDHG9tIw0tLjOn6cqYW/9NQb8K5c344ciTs5HbhBbvIY59GMdPkt
NxmPBJIm3Ky+yTDMCmXYcQk/67FwV/1JGvd2GvLC5xd/7JiB41plO7VFbOvimIyWQ+2sYCuN8YKj
OrFpxUVKyyopB4/i0rRVPwvILlahgrVNMtD0ioH6jE+K71vQ92oWKsoGzrH+9LPbHqexxZMvNRPC
OHnNPw8cDRb2jNywhZ83Qo/Y8Lt1ZbDVCSBeT98pV9nPmhrHRLNFgSoEZcUv9q71yAc/qMJKcZkn
zQmrL1ouSM+RcqJNQ9HeaHGOSQAe047Vfcy2Zzbrhc+zMcyQywtWBaGWaNbSd1Sy7+Amz+a/E0m2
UDoazCamSX4CuwHlsD8M50/WoUP3Q6W11+59dC/RTkFaXg1Ukosl2mlBcoI+5EqG9Oq+QpI/nSW0
/CNTSOkmZUCt02KicHSONMhyWWOLBcWKfznf2ghKcjCQGT/Qg4icVoDb7ieXKdm/AsUmVf7M7N3m
rOqhZdbno+q7bJV0EeOlsgC621TD/Kz3j5MtLxNF8Z1riXaUloxGpu29FSoNc019zpV1V7dPzgvl
UDEMLdEVSC9CHf6IYgwcm9aiuP8bAwJKeqnI709HCgPs0cl4JzR8PoDgQs9+EWAAHFUlHEfi7Lsl
jkxa4t4ycKnfE8n1Lge7+pnLRC4FQF4HSbgZYvU9M64MpVgujAC8d14rDOH8HOYfFSovtx77qP4n
Et9B3NJ07G8DDAHTXXLJkWYIbXZ97ht7ndMOSRcEE1s0tDRQwHZ4XlQDwXoaLrRLjwL9WTcDbl/d
UNkK3BOY3kTiLGR9rUE44SBBknUJrK7vuoFxBbHg3GXaQ3Ph6rIiwCvVgSk+RNZDh51g+qAZ9MbS
Y59vtzVKo6exCFNefoNdvw/PhnfbB/3rWQpck/tiBoXg7mivn+aUXGJqq/C0ui8yOR24GmNGiVxI
FTk/mNa8E2ivoCtISOrWu4VrEnwragchOsPN3Mj6UfkSnFn/leQDo/zWHywBXH8qdo0juw6Zt0E/
Jau03X+p48xc4wLDCPzQuIVrqKaclJwUhLCGX1PfBaqYv7nl5oA3xnVPLWC5Ape+rcKq6wI2KiIY
W9uya6718dQb/6eFWTvlZHN8sxVtL6rxIyPgMqDqVYlnmGMk9Rq7f5phFMHRmsmB/nVXuJumByqX
lPaDhQS44tddNeKHj2iqd0XnGgvImAIbAJ62ktAbHoZwJUKdUiOw/9OrJ9guxkgNdc21JMMz4/Ex
6chqTyHUntuOvVyhYyISrozhO1bparaZiaUn4S2m5onsRNOwsosn53yYe4Jd6zodlIlmxKM06teA
mLuOrw+t4lwpnjk4zjTSzEmiK/yVNZGvK5YJGJeUusnaIaxPXBGXaXGx9V35R8NoTRvRuooeldmw
vROwY7G7PBa3mhZBYEVMArL625ZAlindY9pFO7lnZvsHGCxCrMDvJmY/uC3AHDtbsdEDLDFwWP6K
rx/E0fUEVBf8WornlterYGmsH4206HtdBL/rnri57MXQ2ya9ushBm9mpX2zE1DDJr3GC9JYbuu1c
BZF51+xBwpGDKjAM3j1taePhCGaIiglxw3sJp02OVbqCuAeh1SYoIspJcSTPcnsfQgH4bC/Ok4iC
ojeFQxWzMZLOpluBKbls3XJFpKHeCNH+fpuQMaYS+so9a41fCxmCDBwpBWNIOBbx/aDJ9VEDFHfd
LsIS/1eeIgmRzJLXg7Wd7KdZjDqL+0oMhN5vEMPFHs+xM39JNY0qXpyuQ3id8pQCDQbmucIbxQKc
Hh/MUVqi7dYsuutQCIftv1oRHC7HH1kkeNkfChu6ZEvlfKJENkmAKqnRNpz0HnqXFTnhyGe6yBGE
8ov9iQoOCxsqu8zbr7p56gHcRdDW4AjvZ6O+5CGgIkqHWS8qQQe4MjJrGy03nfknASatSyTw2gIc
NVI5VN46nBdlWfJrXOQ/xU7OUDY8n+tLbIztQd3ZUQ2WjSGcIIYWQBQ0SMWXHMFc0P7zvrygMg8/
VAtJwgED74uGOsFyLkmnStiWbB7PAnIDZln7PCUEsv9WHU4yX+OlbUvHrQD8i2CRE6L87n6u7+9s
+Yv0Zndz/GiAIark0esr2jWiKHDS+oBBIq6rfya7+oGSV5mXgwBfsTgvupZLgAo5vePVNZobM92s
yrWCeLNxKDBeJxJh3JQh2lnFoLjrKNsfcldQOKou7lGiMsbj2VcDKE9t0LxPTSaATJOOAdArVw15
HIDPfk1dAQCUWnD/k4c3jHrBPgMM9TiFQVA8T7xC9+IS7HgYiTx4wKh3cUQVjVDC1lQx250IVJqq
nOetI+bGvGd80fmDJSKCYmWCsZG0lTJKv+TDqbs6JILUY5YcbB3hW5yu5fPCmN2lalN5GmSP7xVF
d72EW5tAsACCAtFOFVG0RkZ+KA51Wr8QE3W6JdtRg9FrIb8YydnKG8fj0bCEk6twMihGAXMEfsk1
8vWb8ZNBUnN5fu7B7UXPiXgHDj7zZHoSKiYdfSsmWf2i6DttvF/MXKaOWDtRcDWBhQJfLvyw5ryh
IIuQw7sRgv5pqJOUHqVdBv5jjkWrU8CcnbK610al9JJoBWtyPhmwy5yWs/1Pwqmxo+hPIUoccw6z
CuZjj/vmB8LQS6YC5L9wFZaidhPeA9ZMPAgFB8ZI4q6qwxuEASWAHv5JAAAMBg8Zg2IKvIHW7Qtt
iApgNP+By+s1tJwXrSgcbCjPjvB6NK95ltNUOPByaA7+BB0ACD5RQbjA/Z0xA5kY7QAC1zOQXQvv
8wqJ2aq8v/ew4/UnRyXqMhnB48dih0MHnKeoNVITB2oR399eJURoTl0d8/J7M+OthdAbmJjiaMdm
qwKPeLfuyenK+UA2QhbrEIwbPYRc7yvXibqy0D1expIuB6v3bWG9iCYkDiG9YI40GgEiZK7hQICS
73mvN8yXENc63rdVmnI671XaScWHueuXNY4sC+60F+cmitsqcS+wA5sxBOh1MU/GL7qpytUDJapa
2nPIrM3zcd5S5z9X/0bAcUc9JNxp5APSe6zh14DhX/MC5DBK6ZQsGBEz1IMkCrRL5xVKgYXaEw0D
zRBCyVN/P88WNk7fRwf4YcPW9VqBdF7+5UjkF2tCjNh+Utg0IkiHw7Kk2PPA+jovXcCCTNV/vxVb
vwV2h4Xb6qu2AgMohbk4OsRxTjNR93pY4o8euWQ51HMwS/1iy+LYKGLAKspLMx27LA1/vebzq2PY
05A6MKnJhlf+CqS5cFhSibQ4vNx6Cj0sXsxH9hM1zihIJSvrcCkhXtfTuDPc1HVdpji0Np3Nas9j
Xoj8+A1UcAv1RBeIwOPt/IMGaHd+vkMPEUrcaFkxIfeD/3zZeQpqqkBQihgu9xBetyFyAMMYChAA
fP0Er44dM2ecjgOhQAOtcxA7i7mi0eV6uTr4m9odGgaK6LMTi6L/X3lKOhD/Z48Wa5wxA9boXPKf
WAaryVyh/KBhu1p0EoIDpeFq22TROUsftnT338OXzFMGb6CVXt3yKlFDaXka0C1sboU0jtTAPTVw
joITSnRMtfFJw+YQ53H5dMb3lQbuFaF0vVThSmV/Uvj7hDv9snkO7fzMyXCVIrK6kXe1lGpsSFoP
VfwxzRKDeablqNq+g7+9b6D9fQibycsfMda8mY1ZVbVDS2KPN/996jVWlWCNC89QvIcgh2EB6nEt
jogwz/QnLS7cWGVdPdW7WL/X//0S+GVBD/POGywzb6cr9XfqbBzVQ3WqwZifABsLKO9730pzU/cB
Djep9dcxGeJJ0D30SGRXTt2WTkIzJe8eAe81LRXgE6XkyNIGMK2gqmvXFRgUvmsuAEHmrP3bIuBe
aWJmsXaz0uyijB5mENSOBBZz4BP5+5KVba6Hrt/QjmaVNp8Hw4gmux+XxA0E2Pkj0G2yHMMAWgb1
jGszfOcySaO2K96+wTSv9k3s//G9DHlWgqMwSZM6RNVqTRhU37DGtPbPjuO6h9G3xhjaVWgU0dNN
/z061RrxCot3hj2UMX0K+z/XevZ7oMukqKrFPxc3/j63sGAQ8Dpbz3fN2M9g+6xXauzImoJFL/zN
bbNvcO9Xj2JcbIzmPwT4hPXsFxwBvYiliT0eNREsqcHeH+qZ8xhg4gW77NPZmu4JaRTd/HOYIOoL
FAsfx6biv//PUPtrND4r3dciKbN3EzrBHH0KCUqkecaHm0jk+tqBppTH2NKOogYfXe5Q84JshSsN
6Czb1CkVMvxyNIk0VgO33MJGBAQeTMTovoR8OeavmOIIOH3NWstadzv+IL8ilQrwtgJuyaGMfrfH
Ij1A+qor44h0cvD34Dnfom6yXl0k5bfqX4wpEDuq2byZUzIoIVjfBjJk/UeyerAoHHqu5VMiB1/N
BbrBEQXPDzh/ZygTXLYH31sasoHF08JxJ7CH3EfsCn2ms7CH5DyNwO8rNbfne4knDvSoS5cBBUKv
pm8FXjXoLmhhutM43irtK4XQ0l2WsfZ/wDYXNQwLQqpi/JPPsYDFVI1dfm14I1cm6myw4L72lqsX
zLnJdSuIq98gsRm7sFCOtYfEPkwza954fTwYLPQmV8y9gOAuHoBveeIHsty6Oyu8lBDbLcpQW0Wh
iBeh8dAxBycf55b3OQ008nZbtU5NzPXuRXQb1GXHjFlBmsZdJIEIuExSUptro4y72cYB8nnW1MkX
8y4VMISrMElF/8blilqvv4vr7q/gqRAEhNJ+egEMrcAJtI0TAI1eYB0zS8z9iYRu2pRdcyS+zKHr
1cHhHMu6gklNUJRhpMIm0ymQCBhDS7A+CBw17J7YKDCZa0AJBBB2OYd6YaKNdQ5Nk3kofp9swUhi
D/IdQFRsgWcALF1LO+q7ZABM8/382xIWYXi0GPSCoRW4emgTXZuOei9hl5aEhnSsPlLgvnvwMFQm
bwpBn4De2d/RSJNlobDyKWZH3v51LA14fXQexLLXI8BAUVA0LTr5QUdMWoA/nekwCBIVFSK0+YUm
zUyZHNCYK4rQvlqRC7LXOx8QRT6FCtXXFsdvcEuRV7lNy/+PoODhPSHGd30G/rsaNdcQrUAYf7FX
rodRALCfUjI5Fb27I+KUwEu6q2cimW9Phe2jvk4SQ7tLC7bUrA6TVmJtMGOzaiyCWFlTjcZrbZzn
CdYd5ON8wIAz2MnXSPiBQ4FVAG5e68NkWItXrUDe9/oxGrF9UrqUQUaZsgb7uohvSHdE7fUg+a6i
mlmwSZ179RoEv1D4ynK16ylv2Mq6Fnoj4r4AmjBnbDj+q0e45etzIWGTgIhkoXVo0m2SEaiF0CNS
JKeYIzoYxLiaU/1OIk/9tevgfqvPEFdh1U8xH3LWpLRLcI8XZBSjS61HCj8z2Xu1MTYNUt5XA7ar
ePHL9meTOpAYjwKVsQtHUrtsQaPoRLIdFlgkwVcNO1WtrSRjHMrNVIU2APnJHpC5lh6fuEklsFEn
qk0Pjhny3cu2m2bWyo4EYxhYZ4fyFPJEduePy0FqdB5XVAnbhSasJY17umNkxUriC1HjOKATgDA0
i/ICHFr/ngdvZ1aQDnpqdmD/Cf4c9QGopyoc4LQjbgYAk0PSg/zjXQKa1ytzOT8jEBWKt62LTys+
OQxligutKYB6MVeAQ6Rb1YkJ/Fp4lPePjYygD20stKlpSSFW2RCpJG79qrxpf893HsYsmGnTgC6m
Bn/MNR69C4d+IqtKfeCm8TL89Gcf2ojH80L6jtEreIfOmDU3Mph19MUZ9IUBRjPHFEucTtzONaf4
dP3+ZWhzfRrMaWSBVvB2AtBOtvJ1Cg6QZ4DfmfhpSN5stk1xXM0pZhBrFYZp5I+XTF+QQU3hOo1w
mCNYZrL3r71kk4IHe9EtyteoKahMKuY52HUKAE9OikNsVqlte9LnYgfOdzDpacm2OU0Y9T+2GBEZ
fQ8CgFF4W1rDSPWEsGWwtxrGTUKWe+Vl4JODqsTFeZUgzp4kx7ap8I/PwltwOHS5njzCabvRAXsC
qcpMhfSICZ3bCCOmRT3P0FiCoVkUz9yAeuAqC2Ks6BsdLBDOFofU5635hi0HvVnOeV+z3rzRyYom
zfDsiUTlqfSgw2MSOIip1WKYFRHOSkt/0hpz6yvridQWdxX9ChjNA9y4bNMep/FOQHQ/utjaHZVD
WZwphAC3X+23FhTnBj8qWLQ3A7dI1p7Yl8/IqCSxIXGyBjDOAPEgu4BDGxp7ooZbbOGDeDRP2bFh
kEkbkGYh4BeVv4/nNn2ldWqVfXBJICbyjkeXWUm/cwvnpX8dJiaY9r8lzA6xvLiB7dRiA78BgsLb
iqZWI3IOH94qIAYdqNMH6v2HsBFExAYh+bHIY+zKovr9Hk2ylJPMuxfOKEqcHaCTrtAWBwt8ycMV
p/y2w5hPlftObp08UHha0/vfqi1KL+hGAJQ/EWpNbb5cWjLSPxYBUqGBKdU89paES70aQakSl0I3
W/q4JqzZFqEHejPB3FNErubnNmIsN5hv6RDsk4njw2X9rJMeErwHhDHVpkRlbu6rA2zvELt1EbGt
ltz6pktPdkpGzj6WLONrxFZeiw2e/esYNh3YmZuLK8CG+FxTTp3jgBAYajvXf5QNeTtzhL1mG1bJ
pHtiRgS3rWsSoiQHnviSRHOx+SbpfpM2rzw+3ky/jnQvZkf6u10GbLHO1yX5m5uApdPScDhaHEy/
4pzsFtdy3k43WGKPUKQ7fCTP1H5Eii6Mq2iiKJ4cb3oyBtW0WFQh87OA/BpVO4IraOoxc3RhL4le
2C3ElbLeIGruE79ylzxnteYPNaIOrLNrlSkVePrc5Bzo7LYx4v7Gr2ZLtS6Tu1DSsBJoajwCp1GV
vuAH4TOn3Qbuni01JW69Lq7p4gSuWqmT5Led648loYCIrqgLyZK5Yf83PRwEOLM7tlK8OSsA8LS9
s5xjjJBL4VPdOJHS/ilJ0zT/UFFI52f35LC9DsVwUn00qDnkREvHyGfqRCYzCvo4oOG+JANkK6gI
MjmEHfgko6oApj4NIlcFTp+ezWr+Uqg2QAo7DLBIMEh+AdkgqXPb2gim4FvUFCY4HaAgSuk+wDpH
kEmuo4shCmcbwfjnu/ghE42NSZlyFdIMxB1WFzg3taxALhDb4rkEc7WRQFsjaQQ7Pv+mVCZM/AIH
saMTbvBRas+98pjkpYRNs1br3eedmRqgRChxIBBef1YwSJBssubwL5hD7ozkNtbY6kbIhAnNYmAF
xlTs4jTQyM+phApMNBxJIhC0ft3G0Cfqg6ShItIWTwJN0990BFxLUqWe7dWpx+mT9r/DNn9fU87U
qyx1odNQCOljPYUCLEARwWO8PaEO01XXDZ0mU7FCJgvhU0DjQxfJKaX1VzItO+Sjtzd8qZJ+COc1
p0eb6GqfNtyO/lqyuqAFzEK6knwGj+6v2eOP4sYMgOsoqIcM9y0DZbhxvbE7JGkbmRVNpmDgIbZN
IJXy0tNtUGbQQdUXsQGo1avUvqLRmxLQjM/hipkBPEvcK/bIc1M8hpmlsW0tSPqyRrY1kUX6iiXb
C33vjOHal9spU7g4qSoOBmI/pLzIp/fM/dp0BK+oriA1ZfvNIrpcHSVaL0pXypC3wR1K8u+2l+OP
q+AcYX13ydkbLtfSbLI56vhRl7T/UWuyu3FSTsxCXUIMLzcCbMwTRxVGXb2Q6mCSBc7gvdvpw+nR
t/z3qmmuC60niB7BaxvaVGqdPMysFUGQgU+BynC68M4hPwLwaPQAWVdwN0Z9bEWDNVUt+LQPK6LU
IqqspvGP91L1Ni/BwOTGODD9/LjOwH9FFV+V48uBlEMvJ+Eh4h4IVzmYRjkJPvm1OssyfYKdqSlj
YbfR/gIWuzT4p4NrgYNv63LZfPPVSo67TQMn9yMgIta8RyxP/DB3XFTNezhJBbISEgX4AUwKP441
eIki9k/jaGl4qoytPqcUzxesK8Nvke26WzcJS6ZNZPkls2J1lzSB+WCkfKh5vV1bWDc5nkJliJPH
PN4H3rDKPYaNYALcqjpJjc4Z49GZ/b9d7/SdHZJQl0SWQ3h8v3WgpBiMpvotZ8fzH/OnvQNwrasX
UesEUgucOdwg7kh0kSR0jxLY1AZMePl3QP2n5YN4wl62QsLWrk5bxt/wAX8rWLBUpOEfHRTDzExp
Tsutuwm1DeBAkR0MmMvgGzBckc+hRUueXPYiHJMq9Na1iUZl4s8QgnRVythSlXr7fGaBckAbGlDY
xQN7gVP9vfoTPjq0P1S55as+9LG7GXAdwa8lpQUP7ybOn4NGetzaYjyYrcIyj7VsrWmA8PUd3jbR
rkWyraeiFnrcS0wWQM5tINKDpf3eA6yMJ7MdAkSnTCelL22CJ7DJg6zIN/+L7QQOU744v4hwNhr+
KP7NuLmBlbiO+stUaFXpby2PTQ7m7qb0uS5gBxRlY9TEUpqW+k7wFmG38wM3mExyeGEmJsYri2U4
/DejvHJdgDkJGo+kcyWOa6VISlVqajSoy2EjUX2mSoxIvvSGc9f5v9sWktqCIZmyYDjmy7f3XP2s
kcHgJMYrbEhKQ5jZ5Guw0LQdlothVz1ICfFu/ksG6k2M1JzXkQdUf2kGpvY5yWbweCfoUcP5eOtC
6wrDvrmF5om8Ypb/Rv/LGM0km+OHw9J2PhP3OUMtoWhNVpfOof98d9irV9ud/SXvY8JUxchn3GtY
rQUhGK7WM7Fz6yIJJho1GJCHdvphbEGD1xmTXbS1bD3ha1l4WDnWkZcf8XICVfiQUGEczbnPmNhH
pUu6V9iSkG9T2ZzWvjL4wju/xWjFjnq5EuUbBxe2NY7aSI76PzoAioGN+/tOS/Qg7vFqdGa6fVAd
F5m3J92+bHrwQf5SfJlDb7GUWt9hMYDiJ3QNv4NW7D0BJiDGBY1XXfXaBRGx0CaoiD/NESKrlrxr
Z03jXjuVfYIJgpcVwYsbJNSPbKjKxZYf2GEbJLiSTv07yXYVurcRVdor9xLgEfEL8Ucclb4HhzvG
0RiiFm6RWZacQDjTmsNHS6vrPxZosjDYWBKtmzeIlu0hjHeBrwfHl1exZ8DvxEhYLdv4ge26bbFW
0ZQZdJav0r3/Yw/Btmo1UIvm0HRFSxCBiA4839HJotwoaDBlYjh74V8EMt+6M9V3cZBYH24NLuSx
AfmrPeZF8w6BqpoY1f7hC+lo/iZ8jKMhc6ngiMLzL6ebfI1VfqozU3PtJKuzT0bIYA3MHo2sUi9h
akKVjGFA8VdEA0RbTZiz6Ur/h3PAO7Up9cHsy5lUi+Q9V78pTMIKfsV0Q0JvIihYfsxpeXIacD1A
PWmAkOIchg3Zp3OFj97Kj/u4wzY0GRIYx9uhqegQRxTq2Wgwx+Nc1XgQ3BN0S2jurDS+6qFdN/tb
w/7lJDpwFdl9YNVRl9jVKW+6OBx0X0YezeGFKk5BxRHTI2irx8zMv1lU60IjWz5F2o2TfHlpR7kJ
oqZjANATdW7T//On+kfSbzi65epRG+oISX84DO1PRGvmJsTbsn4CL7tKjdkWVNWepBlixPdp+vnZ
6HA5h/at6MRAAZzjq+NqH7VtBqZrdrNzEgGfRquwDO1G5hJbPdrvyHxNd9F5iStR025KR1f+dpnd
YeXH8zbY8s/qqccRWklOZoBGdrYR3ZqCTjVPixH1TV2u10KqboTc/5TJb7Xwq/LKaHTdZGLMv/gl
bOUiLHU5s30dKzeCep+2rjlweiCMHsphOMW0flNMAsKiFIIuTvydJJ40HxNNL2289WK/s/olfeyI
Kzc7y7/Azx/XC5GGUHFZoYRAJ8VGTHvwVEjr06VuclADR0AGNegmWs1BEctYLWHwGwFFG3LbEjk9
z6aQ/20kCZiZ+p1TJx9tkx1RJyeKzFBiYykL4A3FCvng4owkK89OPZqlx8qgMFV4DxSHK1xj/gbl
FP5NhD2ej3emNwdBiXUAS2hRzk+TejtvQvlXP7tPDSoW9DMFZEPhzKooObxl4OrwZ+F4AcxRitWh
QSjwacGeCOH1/nm/K3n401s72fN66t9Oxh3/ZzRaJvS6OBcJE9hWnBduHkQ9kqFoO6YN9bQxSgN9
y7uESYVIcVokdM32OzU6rF2Dmmgqpv9bXwSzMwd4LR+8+AjXFH/Vnu1AHmjh55u3YLAj9uCieeXO
rp6xk1t1ipVb7GjToC6Ev/B7ZY/TFOj56InukAVkV+Ncxkrp/fF6ZLhK/B8GY0avYnUSdR3ckE6T
Yw2+IqtY2WI4KEkqEX+MCXaADvEALqJ09HFPKKZFhSSiUNCwq8mjs2tV1Y2g/HKHnUw2tPJMbgV3
EMmWnjPZdK0iJo1yIfEqpXlp9XRtz/DJMmu6W9ywG3LD86GwZLLqKTDZ1/3X7E8LGOSzNI4X8s7z
IZJRBkOVUs9+cyeM3EXSakXFCkvYHgpgALhs9oqMruGi7ZxFIrFRv7lFKKzCustLYBHC2vQdYrgl
wbu7juRdEyIsdoVThpJhFs7mB4zyqCSjBj92VsBFDuvTmLDdAk1vT1NCSiq0lA5oZEDKMNl918H3
DF4tKP2S1mYQyCgNGvzaOrA/bepcAeCPdKt2vF4ZWPeHBNu0AUG5wKiWyD6I3ALfBnOyJ40estkJ
ScBUQubbLn4PUv8Kdf7MD/vuLPQWYASlaxs96yAI9eXd17yflX9V34D1w79K6fJj5BNoNmU4ov3N
tJvr06/v+PsLRQYjLpkakWn+ynZYbVvhLUdESxiXXD0c3xtNTioaFU/FFMeBMq5o3FZ7NR5dJ5V8
1wgUhXFi8GIhhMGB4zYPbZM/a7+yHk3zXUfCwpsjvqDYtzG4BwS0koCiT7LLaU7Gw+Todimzmc5X
dapGJyjLI21uW4Oick5V9+6fFcLBEVvtdp8+7BoL+osqIewEEOrzFdjKbqtYKW675G16n4O98MPY
Mm+XO7ppsK3KOQb4m+NRUwUzYH6t8az2hpxQ2Q==
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
