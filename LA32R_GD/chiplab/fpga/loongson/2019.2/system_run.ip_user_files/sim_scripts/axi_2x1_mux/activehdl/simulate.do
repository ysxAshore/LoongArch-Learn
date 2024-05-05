transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+axi_2x1_mux  -L xpm -L fifo_generator_v13_2_8 -L axi_interconnect_v1_7_21 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.axi_2x1_mux xil_defaultlib.glbl

do {axi_2x1_mux.udo}

run 1000ns

endsim

quit -force
