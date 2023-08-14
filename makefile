# PrintC
# A new C logging and printing library
# Github: https://www.github.com/lewisevans2007/printc
# Licence: GNU General Public Licence v3.0
# By: Lewis Evans

CC=gcc
CFLAGS=-I src
DEPS=src/printc.h
OBJ=main.o src/printc.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean run

clean:
	rm -f $(OBJ) test

run:
	./test
