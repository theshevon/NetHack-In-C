all: main

main: main.o
	  gcc -Wall -std=c99 -o main main.o -lncurses

.PHONY: clean cleanly all CLEAN

clean:
	rm -f main.o
CLEAN: clean
	rm -f main
