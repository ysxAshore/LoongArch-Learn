transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+sram_32x52bit  -L xpm -L blk_mem_gen_v8_4_6 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.sram_32x52bit xil_defaultlib.glbl

do {sram_32x52bit.udo}

run 1000ns

endsim

quit -force
