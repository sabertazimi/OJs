#
# Makefile
# sabertazimi, 2016-11-13 17:29
#
#

# OJNAME=ccf/201409
# PROG=best_takeout
OJNAME=hust
PROG=dijkstra

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
	$(foreach filename, $(shell find . -name ".gdb_history"), $(RM) $(filename);)

debug:
	$(DEBUG) $(OJNAME)/$(PROG).out -q -ex "b $(OJNAME)/$(PROG).cc:1" -ex "r"

# vim:ft=make
#
