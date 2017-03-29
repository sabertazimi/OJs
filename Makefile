#
# Makefile
# sabertazimi, 2016-11-13 17:29
#
#

OJNAME=nowcoder
PROG=package

CC=g++
CFLAGS=-g -Wall -Wextra
DEBUG=gdb
BREAK_LINE=55
RM=rm -fr

all:
	$(CC) -o $(OJNAME)/$(PROG).out $(CFLAGS) $(OJNAME)/$(PROG).cc

.PHONY=run clean debug

run:
	./$(OJNAME)/$(PROG).out

clean:
	$(foreach filename, $(shell find . -name "*~" -not -path "./samples/*"), $(RM) $(filename);)
	$(foreach filename, $(shell find . -name "*.out" -not -path "./samples/*"), $(RM) $(filename);)
	$(foreach filename, $(shell find . -name ".gdb_history" -not -path "./samples/*"), $(RM) $(filename);)
	$(RM) .gdb_history

debug:
	$(DEBUG) $(OJNAME)/$(PROG).out -q -ex "b $(OJNAME)/$(PROG).cc:$(BREAK_LINE)" -ex "r input.dat"
# $(DEBUG) $(OJNAME)/$(PROG).out -q -ex "b $(OJNAME)/$(PROG).cc:$(BREAK_LINE)" -ex "r"

# vim:ft=make
#
