SHELL:=/bin/bash

export VIVADO_VERSION ?= 2023.2
VIVADO_SETTINGS ?= /tools/Xilinx/Vivado/$(VIVADO_VERSION)/settings64.sh

.PHONY: all
all: ip

.PHONY: ip
ip: hls_axis_test.prj/AXI4-Stream/impl/export.zip

hls_axis_test.prj/AXI4-Stream/impl/export.zip: hls_axis_test.cpp hls_axis_test.h common.tcl
	source $(VIVADO_SETTINGS) && vitis_hls -f ip.tcl hls_axis_test

clean:
	rm -rf *.prj *.log