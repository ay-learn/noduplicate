#!/bin/make

CFLAGS=-g -Wno-format -Wno-deprecated-declarations -Wno-format-security -lm `pkg-config --cflags --libs gtk+-3.0` -export-dynamic
LDFLAGS=`pkg-config --libs gtk+-3.0`

all: noduplicate


util.o: util.c util.h
	gcc  -c util.c $(CFLAGS)

main.o: main.c
	gcc -c main.c $(CFLAGS)

noduplicate: main.o util.o
	gcc main.o util.o -o noduplicate $(CFLAGS)

clean:
	rm -rf *.o noduplicate

