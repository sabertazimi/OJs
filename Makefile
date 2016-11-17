#
# Makefile
# sabertazimi, 2016-11-13 17:29
#
#

OJNAME=ccf/201312
PROG=interesting_number

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
	$(RM) ./*.out
	$(RM) .gdb_history

debug:
	$(DEBUG) $(OJNAME)/$(PROG).out -q -ex "b $(OJNAME)/$(PROG).cc:1" -ex "r"

# vim:ft=make
#
