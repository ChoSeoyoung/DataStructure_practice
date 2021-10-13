#
# makefile
#
CC=gcc -g
LIBS= -L C:/sd/MinGW/lib/gcc-lib/mingw32/3.2.3/ -lstdc++

all: ParenthesesMatching

ParenthesesMatching: stack.o main.o
	$(CC) -o ParenthesesMatching stack.o main.o

stack.o: stack.c stack.h
	$(CC) -c stack.c -o stack.o  $(LIB)

main.o: main.c
	$(CC) -c main.c -o main.o $(LIB)

clean:
	del -f ParenthesesMatching.exe
	del -f *.o