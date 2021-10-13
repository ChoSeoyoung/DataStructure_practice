/*main.c*/
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
	List L = NULL;
	L=AddItem(L,10);
	L = AddItem(L,20);
	L = AddItem(L,30);
	WriteListItem(L);
	L = DeleteItem(L, 20);
	WriteListItem(L);
	return 0;
}