// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
// Date        : Thu Apr 11 21:17:08 2024
// Host        : ysxAshore running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim
//               E:/Projects/Studying/LA/CPU_design/readygo/mycpu_env/soc_verify/soc_axi/run_vivado/project/loongson.runs/data_bank_sram_synth_1/data_bank_sram_sim_netlist.v
// Design      : data_bank_sram
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a200tfbg676-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "data_bank_sram,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module data_bank_sram
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
  (* C_INIT_FILE = "data_bank_sram.mem" *) 
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
  (* C_USE_DEFAULT_DATA = "0" *) 
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
  data_bank_sram_blk_mem_gen_v8_4_6 U0
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 19744)
`pragma protect data_block
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
UznlhYmzXlE+eyQv//M8zzdlqBSnBQ==
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
