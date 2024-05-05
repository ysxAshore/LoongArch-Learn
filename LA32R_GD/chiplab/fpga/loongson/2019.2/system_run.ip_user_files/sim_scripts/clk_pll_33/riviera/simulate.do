transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+clk_pll_33  -L xpm -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.clk_pll_33 xil_defaultlib.glbl

do {clk_pll_33.udo}

run 1000ns

endsim

quit -force
