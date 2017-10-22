PYTHON =
CC = clang
SANCOV = sancov

CFLAGS = -g -Og -fsanitize-coverage=trace-pc-guard -fsanitize=address 

.PHONY: all
all: target
	$(PYTHON) ../detsan --sancov=$(SANCOV) ./$(<)

target: target.c

# vim:ts=4 sts=4 sw=4 noet
