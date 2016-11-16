#
# Makefile
# sabertazimi, 2016-11-13 17:29
#

PATH=hackerRank
PROG=select2

CC=g++
CFLAGS=-g -Wall -Wextra
DEBUG=gdb
RM=rm -fr

all:
	$(CC) -o $(PATH)/$(PROG).out $(CFLAGS) $(PATH)/$(PROG).cc

.PHONY=run clean debug

run:
	./$(PATH)/$(PROG).out

clean:
	$(RM) ./*.out
	$(RM) .gdb_history

debug:
	$(DEBUG) $(PATH)/$(PROG).out -q -ex "b $(PATH)/$(PROG).cc:1" -ex "r"

# vim:ft=make
#
