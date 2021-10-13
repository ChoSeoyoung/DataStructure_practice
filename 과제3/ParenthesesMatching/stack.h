/*stack.h*/

#pragma once
#include <stdio.h>
#ifndef _STACK_
#define _STACK_
#define nsize 100

typedef struct {
	char element[nsize];
	int top;
} Stack;

int isFull(Stack S, int N);
void push(Stack* S, int E);
int isEmpty(Stack S);
int pop(Stack* S);
void printStack(Stack S);

#endif