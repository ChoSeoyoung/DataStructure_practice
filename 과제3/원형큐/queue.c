/*queue.c*/
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int isFull(Queue Q) {
	if ((Q.front == Q.rear) && Q.flag == 1)
		return 1; //true
	else
		return 0; //false
}

void enqueue(Queue* Q, int E) {
	if (isFull(*Q)) {
		printf("Queue is Full!\n");
	}
	else {
		(*Q).rear = (((*Q).rear+1) % nsize);
		(*Q).element[(*Q).rear] = E;
		((*Q).flag) = 1;
	}
}

int isEmpty(Queue Q) {
	if ((Q.front == Q.rear) && Q.flag == 0)
		return 1; //true
	else
		return 0; //false
}

int dequeue(Queue* Q) {
	if (isEmpty(*Q)) {
		printf("Queue is empty!\n");
		exit(-1);
	}
	else {
		(*Q).front = (((*Q).front+1) % nsize);
		((*Q).flag) = 0;
		return (*Q).element[(*Q).front];
	}
}

void printQueue(Queue Q) {
	if (isEmpty(Q)) {
		printf("Queue is empty!\n");
	}
	else {
		if (Q.front + 1 <= Q.rear) {
			for (int i = Q.front + 1; i <= (Q.rear); i++) {
				if (i == nsize) {
					i = -1;
				}
				printf("%c ", Q.element[i]);
			}
		}
		else {
			for (int i = Q.front + 1; i < nsize; i++) {
				printf("%c ", Q.element[i]);
			}
			for (int i = 0; i <= (Q.rear); i++) {
				printf("%c ", Q.element[i]);
			}
		}
	}

	printf("\n");
}