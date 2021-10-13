/*list.c*/
#include "list.h"

int IsEmpty(List L) {
	if (L == NULL)
		return TRUE;
	else
		return FALSE;
}

void WriteListItem(List L) {
	list_pointer tnode;
	tnode = L;
	while (tnode != NULL) {
		printf("%d\t", tnode->value);
		tnode = tnode->link;
	}
}

List AddItem(List L, Element el) {
	list_pointer ptrNode;
	ptrNode = (list_pointer)malloc(sizeof(struct list_node));
	if (ptrNode == NULL) {
		printf("::Unable to allocate more memory!!!\n");
		exit(0);
	}
	ptrNode->value = el;
	ptrNode->link = L;
	L = ptrNode;
	return L;
}

Node FindItem(List L, Element el) {
	Node tnode = L;
	while (tnode != NULL) {
		if (tnode->value == el) {
			printf("%d is in L.\n", el);
			return tnode;
		}
		tnode = tnode->link;
	}
	printf("%d does not exist.\n", el);
	return NULL;
}

List DeleteFirstItem(List L) {
	Node anode = L;
	if (anode == NULL) {
		printf("L is empty.\n");
	}
	else {
		L = anode->link;
		free(anode);
	}
	return L;
}

List DeleteItem(List L, Element el) {
	Node anode = L;
	Node dnode = L->link;
	while (dnode != NULL) {
		if (dnode->value == el) {
			anode->link = dnode->link;
			free(dnode);
			break;
		}
		anode = dnode;
		dnode = anode->link;
	}
	return L;
}
