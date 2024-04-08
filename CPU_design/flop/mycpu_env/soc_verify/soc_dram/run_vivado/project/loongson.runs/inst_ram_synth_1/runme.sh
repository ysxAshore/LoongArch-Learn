#!/bin/sh

# 
# Vivado(TM)
# runme.sh: a Vivado-generated Runs Script for UNIX
# Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
# Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
# 

if [ -z "$PATH" ]; then
  PATH=/home/ysxashore/App/Xilinx/Vitis/2023.1/bin:/home/ysxashore/App/Xilinx/Vivado/2023.1/ids_lite/ISE/bin/lin64:/home/ysxashore/App/Xilinx/Vivado/2023.1/bin
else
  PATH=/home/ysxashore/App/Xilinx/Vitis/2023.1/bin:/home/ysxashore/App/Xilinx/Vivado/2023.1/ids_lite/ISE/bin/lin64:/home/ysxashore/App/Xilinx/Vivado/2023.1/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=
else
  LD_LIBRARY_PATH=:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='/home/ysxashore/Data_DISK/Projects/Studying/LoongArch-Learn/CPU_design/cdp_ede_local/mycpu_env/soc_verify/soc_dram/run_vivado/project/loongson.runs/inst_ram_synth_1'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

EAStep vivado -log inst_ram.vds -m64 -product Vivado -mode batch -messageDb vivado.pb -notrace -source inst_ram.tcl
