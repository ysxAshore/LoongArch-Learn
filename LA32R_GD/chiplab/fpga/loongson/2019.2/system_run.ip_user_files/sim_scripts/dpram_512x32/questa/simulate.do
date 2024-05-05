onbreak {quit -f}
onerror {quit -f}

vsim  -lib xil_defaultlib dpram_512x32_opt

set NumericStdNoWarnings 1
set StdArithNoWarnings 1

do {wave.do}

view wave
view structure
view signals

do {dpram_512x32.udo}

run 1000ns

quit -force
