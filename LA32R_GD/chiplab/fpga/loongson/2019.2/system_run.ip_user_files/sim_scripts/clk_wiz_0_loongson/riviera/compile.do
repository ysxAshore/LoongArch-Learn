transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

vlib work
vmap -link {E:/Projects/Studying/LA/LA32R_GD/chiplab/fpga/loongson/2019.2/system_run.cache/compile_simlib/riviera}
vlib riviera/xpm
vlib riviera/xil_defaultlib

vlog -work xpm  -incr "+incdir+../../../ipstatic" -l xpm -l xil_defaultlib \
"E:/Softwares/Vitis/Vivado/2023.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"E:/Softwares/Vitis/Vivado/2023.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93  -incr \
"E:/Softwares/Vitis/Vivado/2023.1/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work xil_defaultlib  -incr -v2k5 "+incdir+../../../ipstatic" -l xpm -l xil_defaultlib \
"../../../../../../../IP/xilinx_ip/2019.2/clk_wiz_0_loongson/clk_wiz_0_clk_wiz.v" \
"../../../../../../../IP/xilinx_ip/2019.2/clk_wiz_0_loongson/clk_wiz_0.v" \

vlog -work xil_defaultlib \
"glbl.v"

