PYTHON ?= python3
XLSX ?= APB_BUS_Example.xlsx
SHEET ?= MM-INFO

.PHONY: all rtl tb run clean lint-vc

all: rtl tb

rtl:
	$(PYTHON) apb_rtl_generator.py $(XLSX) $(SHEET)

tb:
	$(PYTHON) apb_tb_generator.py $(XLSX) $(SHEET)

run: all
	$(MAKE) -C sim/vcs run APB_BUS_GENERATOR_HOME=$(CURDIR)

# Lint targets
lint-vc: rtl
	cd lint/vc_static && ./run_lint.sh

clean:
	rm -rf RTL Debug
	rm -f source_me.sh sim/vcs/tb.sv
	$(MAKE) -C sim/vcs clean || true
