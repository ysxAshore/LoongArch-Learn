transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+axi_interconnect_0  -L xpm -L fifo_generator_v13_2_8 -L axi_interconnect_v1_7_21 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.axi_interconnect_0 xil_defaultlib.glbl

do {axi_interconnect_0.udo}

run 1000ns

endsim

quit -force
