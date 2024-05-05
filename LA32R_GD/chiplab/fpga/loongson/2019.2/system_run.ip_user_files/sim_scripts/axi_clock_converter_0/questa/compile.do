vlib questa_lib/work
vlib questa_lib/msim

vlib questa_lib/msim/xpm
vlib questa_lib/msim/axi_infrastructure_v1_1_0
vlib questa_lib/msim/fifo_generator_v13_2_8
vlib questa_lib/msim/axi_clock_converter_v2_1_27
vlib questa_lib/msim/xil_defaultlib

vmap xpm questa_lib/msim/xpm
vmap axi_infrastructure_v1_1_0 questa_lib/msim/axi_infrastructure_v1_1_0
vmap fifo_generator_v13_2_8 questa_lib/msim/fifo_generator_v13_2_8
vmap axi_clock_converter_v2_1_27 questa_lib/msim/axi_clock_converter_v2_1_27
vmap xil_defaultlib questa_lib/msim/xil_defaultlib

vlog -work xpm  -incr -mfcu  -sv "+incdir+../../../ipstatic/hdl" \
"E:/Softwares/Vitis/Vivado/2023.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"E:/Softwares/Vitis/Vivado/2023.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm  -93  \
"E:/Softwares/Vitis/Vivado/2023.1/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work axi_infrastructure_v1_1_0  -incr -mfcu  "+incdir+../../../ipstatic/hdl" \
"../../../ipstatic/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work fifo_generator_v13_2_8  -incr -mfcu  "+incdir+../../../ipstatic/hdl" \
"../../../ipstatic/simulation/fifo_generator_vlog_beh.v" \

vcom -work fifo_generator_v13_2_8  -93  \
"../../../ipstatic/hdl/fifo_generator_v13_2_rfs.vhd" \

vlog -work fifo_generator_v13_2_8  -incr -mfcu  "+incdir+../../../ipstatic/hdl" \
"../../../ipstatic/hdl/fifo_generator_v13_2_rfs.v" \

vlog -work axi_clock_converter_v2_1_27  -incr -mfcu  "+incdir+../../../ipstatic/hdl" \
"../../../ipstatic/hdl/axi_clock_converter_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -incr -mfcu  "+incdir+../../../ipstatic/hdl" \
"../../../ip/axi_clock_converter_0/sim/axi_clock_converter_0.v" \

vlog -work xil_defaultlib \
"glbl.v"
