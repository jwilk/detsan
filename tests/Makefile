PYTHON =
CC = clang
SANCOV = sancov

CFLAGS = -g -Og
CFLAGS += -Wall
CFLAGS += -fsanitize-coverage=trace-pc-guard -fsanitize=address

.PHONY: all
all: target
	$(PYTHON) ../detsan -p --sancov=$(SANCOV) ./$(<)

.PHONY: clean
clean:
	rm -f target

# vim:ts=4 sts=4 sw=4 noet
