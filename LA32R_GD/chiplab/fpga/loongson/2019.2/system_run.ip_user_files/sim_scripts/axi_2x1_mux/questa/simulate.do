onbreak {quit -f}
onerror {quit -f}

vsim  -lib xil_defaultlib axi_2x1_mux_opt

set NumericStdNoWarnings 1
set StdArithNoWarnings 1

do {wave.do}

view wave
view structure
view signals

do {axi_2x1_mux.udo}

run 1000ns

quit -force
