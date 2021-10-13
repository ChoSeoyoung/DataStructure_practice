/*main.c*/
#include <stdio.h>
#include "queue.h"

int main() {
	Queue queue;
	queue.front = 0;
	queue.rear = 0;
	queue.flag = 0;

	for (int i = 65; i < 85; i++) {
		enqueue(&queue, i);
		printQueue(queue);
	}
	enqueue(&queue, 85);
	printQueue(queue);
	for (int i = 65; i < 85; i++) {
		dequeue(&queue);
		printQueue(queue);
	}
}