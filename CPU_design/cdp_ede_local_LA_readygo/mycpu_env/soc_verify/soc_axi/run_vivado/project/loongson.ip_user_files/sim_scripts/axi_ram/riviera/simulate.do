transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+axi_ram  -L xpm -L blk_mem_gen_v8_4_6 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.axi_ram xil_defaultlib.glbl

do {axi_ram.udo}

run 1000ns

endsim

quit -force
