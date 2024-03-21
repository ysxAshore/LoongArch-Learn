// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Mon Mar 11 12:31:00 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/ysxashore/Data_DISK/Projects/Studying/LoongArch-Learn/CPU_design/cdp_ede_local_LA_readygo/mycpu_env/soc_verify/soc_axi/run_vivado/project/loongson.gen/sources_1/ip/inst_tagv_way1/inst_tagv_way1_sim_netlist.v
// Design      : inst_tagv_way1
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "inst_tagv_way1,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module inst_tagv_way1
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
  (* C_INIT_FILE = "inst_tagv_way1.mem" *) 
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
  inst_tagv_way1_blk_mem_gen_v8_4_6 U0
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
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
6lSxQH7KyYMmOOMDzURmvaVMqHEhw+8YzacitQ==
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
