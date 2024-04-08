// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (lin64) Build 3865809 Sun May  7 15:04:56 MDT 2023
// Date        : Sun Mar 10 14:13:08 2024
// Host        : ysxAshore-Ubuntu running 64-bit Ubuntu 22.04.4 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/ysxashore/Data_DISK/Projects/Studying/LoongArch-Learn/CPU_design/cdp_ede_local_LA_readygo/mycpu_env/module_verify/cache_verify/run_vivado/project/loongson.gen/sources_1/ip/tagv_way0/tagv_way0_sim_netlist.v
// Design      : tagv_way0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "tagv_way0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module tagv_way0
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
  (* C_INIT_FILE = "tagv_way0.mem" *) 
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
  tagv_way0_blk_mem_gen_v8_4_6 U0
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 20256)
`pragma protect data_block
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
yBTcSIvMcIA/iyZQSNCjxD2p5rp0
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
