transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

vlib work
vmap -link {E:/Projects/Studying/LA/LA32R_GD/chiplab/fpga/loongson/2019.2/system_run.cache/compile_simlib/riviera}
vlib riviera/xpm
vlib riviera/fifo_generator_v13_2_8
vlib riviera/axi_interconnect_v1_7_21
vlib riviera/xil_defaultlib

vlog -work xpm  -incr -l xpm -l fifo_generator_v13_2_8 -l axi_interconnect_v1_7_21 -l xil_defaultlib \
"E:/Softwares/Vitis/Vivado/2023.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"E:/Softwares/Vitis/Vivado/2023.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93  -incr \
"E:/Softwares/Vitis/Vivado/2023.1/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work fifo_generator_v13_2_8  -incr -v2k5 -l xpm -l fifo_generator_v13_2_8 -l axi_interconnect_v1_7_21 -l xil_defaultlib \
"../../../ipstatic/simulation/fifo_generator_vlog_beh.v" \

vcom -work fifo_generator_v13_2_8 -93  -incr \
"../../../ipstatic/hdl/fifo_generator_v13_2_rfs.vhd" \

vlog -work fifo_generator_v13_2_8  -incr -v2k5 -l xpm -l fifo_generator_v13_2_8 -l axi_interconnect_v1_7_21 -l xil_defaultlib \
"../../../ipstatic/hdl/fifo_generator_v13_2_rfs.v" \

vlog -work axi_interconnect_v1_7_21  -incr -v2k5 -l xpm -l fifo_generator_v13_2_8 -l axi_interconnect_v1_7_21 -l xil_defaultlib \
"../../../ipstatic/hdl/axi_interconnect_v1_7_vl_rfs.v" \

vlog -work xil_defaultlib  -incr -v2k5 -l xpm -l fifo_generator_v13_2_8 -l axi_interconnect_v1_7_21 -l xil_defaultlib \
"../../../../../../../IP/xilinx_ip/2019.2/axi_2x1_mux/sim/axi_2x1_mux.v" \

vlog -work xil_defaultlib \
"glbl.v"

