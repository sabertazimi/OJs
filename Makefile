#
# Makefile
# sabertazimi, 2016-11-13 17:29
#
#

OJNAME=ccf/201403
PROG=cpu

CC=g++
CFLAGS=-g -Wall -Wextra
DEBUG=gdb
RM=rm -fr

all:
	$(CC) -o $(OJNAME)/$(PROG).out $(CFLAGS) $(OJNAME)/$(PROG).cc

.PHONY=run clean debug

run:
	./$(OJNAME)/$(PROG).out

clean:
	$(foreach filename, $(shell find . -name "*.out"), $(RM) $(filename);)
	$(RM) .gdb_history

debug:
	$(DEBUG) $(OJNAME)/$(PROG).out -q -ex "b $(OJNAME)/$(PROG).cc:1" -ex "r"

# vim:ft=make
#
