/*stack.c*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int isFull(Stack S, int N) {
	if (S.top == N)
		return 1; //true
	else
		return 0; //false
}

void push(Stack* S, int E) {
	if (isFull(*S, nsize)) {
		printf("Stack is Full!\n");
	}
	else {
		(*S).element[(*S).top] = E;
		((*S).top) += 1;
	}
}

int isEmpty(Stack S) {
	if (S.top == 0)
		return 1; //true
	else
		return 0; //false
}

int pop(Stack* S) {
	if (isEmpty(*S)) {
		printf("Stack is Empty!\n");
		exit(-1);
	}
	else {
		((*S).top) -= 1;
		return (*S).element[(*S).top];
	}
}

void printStack(Stack S) {
	for (int i = 0; i < S.top; i++) {
		printf("%d ", S.element[i]);
	}
	printf("\n");
}