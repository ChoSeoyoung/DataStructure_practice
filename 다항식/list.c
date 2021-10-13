/*list.c*/
#include "list.h"

COMPARE(int a, int b) {
	if (a < b)
		return -1;
	else if (a == b)
		return 0;
	else
		return 1;
}



poly_ptr getNode() {
	poly_ptr node;

	node = (poly_ptr)malloc(sizeof(poly_ptr));
	if (node == NULL) {
		fprintf(stderr, "The momory is full\n");
		exit(1);
	}
	return node;
}

void append(int coe, int exp, poly_ptr* pptr) {
	poly_ptr temp;
	temp = (poly_ptr)malloc(sizeof(poly_ptr));
	if (temp == NULL) {
		fprintf(stderr, "The momory is full\n");
		exit(1);
	}
	temp->coef = coe;
	temp->expon = exp;
	temp->link = NULL;
	(*pptr)->link = temp;
	*pptr = temp;
}

void erase(poly_ptr* pptr) {
	poly_ptr temp;
	while (*pptr) {
		temp = *pptr;
		*pptr = (*pptr)->link;
		free(temp);
	}
}

poly_ptr poly_add(poly_ptr a, poly_ptr b) {
	poly_ptr front, rear, temp;
	int sum;
	rear = (poly_ptr)malloc(sizeof(poly_ptr));
	if (rear == NULL) {
		fprintf(stderr, "The momory is full\n");
		exit(1);
	}
	front = rear;
	while (a && b) {
		switch (COMPARE(a->expon, b->expon)) {
		case -1: /*a->expon<b->expon(b의 차수가 더 클 때)*/
			append(b->coef, b->expon, &rear);
			b = b->link;
			break;
		case 0: /*a->expon=b->expon*/
			sum = a->coef + b->coef;
			if (sum) {
				append(sum, a->expon, &rear);
				a = a->link;
				b = b->link;
			}
			break;
		case 1: /*a->expon>b->expon*/
			append(a->coef, a->expon, &rear);
			a = a->link;
			break;
		}
		for (; a; a = a->link) {
			append(a->coef, a->expon, &rear);
		}
		for (; b; b = b->link) {
			append(b->coef, b->expon, &rear);
		}
	}
	rear->link = NULL;
	temp = front;
	front = front->link;
	free(temp);
	return front;
}

void WritePolyItem(struct term_node L) {
	poly_ptr tnode;
	tnode = &L;
	while (tnode != NULL) {
		printf("%d %d\t", tnode->coef, tnode->expon);
		tnode = tnode->link;
	}
	printf("\n");
}