#pragma once
/*queue.h*/
#include "queue.h"
#define nsize 20

typedef struct {
	int element[nsize];
	int front, rear; //front: 첫번째 element의 인덱스보다 1작은 인덱스, rear: 마지막 element의 인덱스
	int flag; //isEmpty, isFull이 조건이 같기 때문에 필요
}Queue;


int isFull(Queue Q);
void enqueue(Queue* Q, int E);
int isEmpty(Queue Q);
int dequeue(Queue* Q);
void printQueue(Queue Q);