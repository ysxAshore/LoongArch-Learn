// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
// Date        : Thu Apr 11 21:17:08 2024
// Host        : ysxAshore running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim
//               E:/Projects/Studying/LA/CPU_design/readygo/mycpu_env/soc_verify/soc_axi/run_vivado/project/loongson.runs/tagv_sram_synth_1/tagv_sram_sim_netlist.v
// Design      : tagv_sram
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "tagv_sram,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module tagv_sram
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
  (* C_INIT_FILE = "tagv_sram.mem" *) 
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
  (* C_USE_DEFAULT_DATA = "0" *) 
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
  tagv_sram_blk_mem_gen_v8_4_6 U0
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 20240)
`pragma protect data_block
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
ZcgYJrc=
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
