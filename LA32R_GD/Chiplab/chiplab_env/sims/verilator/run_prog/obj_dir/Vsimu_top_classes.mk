# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vsimu_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vsimu_top \
	Vsimu_top___024root \
	Vsimu_top___024root__1 \
	Vsimu_top___024root__2 \
	Vsimu_top___024root__3 \
	Vsimu_top___024root__4 \
	Vsimu_top___024root__5 \
	Vsimu_top___024root__6 \
	Vsimu_top___024root__7 \
	Vsimu_top___024root__8 \
	Vsimu_top___024root__9 \
	Vsimu_top___024unit \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vsimu_top__ConstPool_0 \
	Vsimu_top___024root__Slow \
	Vsimu_top___024root__1__Slow \
	Vsimu_top___024root__2__Slow \
	Vsimu_top___024root__3__Slow \
	Vsimu_top___024root__4__Slow \
	Vsimu_top___024root__5__Slow \
	Vsimu_top___024root__6__Slow \
	Vsimu_top___024root__7__Slow \
	Vsimu_top___024root__8__Slow \
	Vsimu_top___024unit__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vsimu_top__Dpi \
	Vsimu_top__Trace \
	Vsimu_top__Trace__1 \
	Vsimu_top__Trace__2 \
	Vsimu_top__Trace__3 \
	Vsimu_top__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vsimu_top__Syms \
	Vsimu_top__Trace__Slow \
	Vsimu_top__Trace__1__Slow \
	Vsimu_top__Trace__2__Slow \
	Vsimu_top__Trace__3__Slow \
	Vsimu_top__Trace__4__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_save \
	verilated_fst_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
