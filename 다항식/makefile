#
# makefile
#
CC=gcc -g
LIBS= -L C:/sd/MinGW/lib/gcc-lib/mingw32/3.2.3/ -lstdc++

all: Poly

Poly: list.o main.o
	$(CC) -o Poly list.o main.o

list.o: list.c list.h
	$(CC) -c list.c -o list.o  $(LIB)

main.o: main.c
	$(CC) -c main.c -o main.o $(LIB)

clean:
	del -f Poly.exe
	del -f *.o