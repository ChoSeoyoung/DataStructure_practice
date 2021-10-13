#
# makefile
#
CC=gcc -g
LIBS= -L C:/sd/MinGW/lib/gcc-lib/mingw32/3.2.3/ -lstdc++

all: calc

calc: f.o main.o
	$(CC) -o calc f.o main.o

f.o: f.c f.h
	$(CC) -c f.c -o f.o  $(LIB)

main.o: main.c
	$(CC) -c main.c -o main.o $(LIB)

clean:
	del -f calc.exe
	del -f *.o