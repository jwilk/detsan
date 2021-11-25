# Copyright © 2017 Jakub Wilk <jwilk@jwilk.net>
# SPDX-License-Identifier: MIT

PYTHON =
CC = clang
SANCOV = sancov

CFLAGS = -g
CFLAGS += -Wall
CFLAGS += -fsanitize-coverage=trace-pc-guard -fsanitize=address

.PHONY: all
all: target
	$(PYTHON) ../detsan -p --sancov=$(SANCOV) ./$(<)

.PHONY: clean
clean:
	rm -f target

.error = GNU make is required

# vim:ts=4 sts=4 sw=4 noet
