#
# makefile
#
CC=gcc -g
LIBS= -L C:/sd/MinGW/lib/gcc-lib/mingw32/3.2.3/ -lstdc++

all: CircleQueue

CircleQueue: queue.o main.o
	$(CC) -o CircleQueue queue.o main.o

queue.o: queue.c queue.h
	$(CC) -c queue.c -o queue.o  $(LIB)

main.o: main.c
	$(CC) -c main.c -o main.o $(LIB)

clean:
	del -f CircleQueue.exe
	del -f *.o