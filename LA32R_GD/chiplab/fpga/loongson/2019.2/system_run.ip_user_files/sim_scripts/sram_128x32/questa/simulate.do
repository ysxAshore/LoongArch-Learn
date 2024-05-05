onbreak {quit -f}
onerror {quit -f}

vsim  -lib xil_defaultlib sram_128x32_opt

set NumericStdNoWarnings 1
set StdArithNoWarnings 1

do {wave.do}

view wave
view structure
view signals

do {sram_128x32.udo}

run 1000ns

quit -force
