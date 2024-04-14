transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+data_bank_sram  -L xpm -L blk_mem_gen_v8_4_6 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.data_bank_sram xil_defaultlib.glbl

do {data_bank_sram.udo}

run 1000ns

endsim

quit -force
