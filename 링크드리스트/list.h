/*list.h*/
#pragma once
#ifndef _LIST_H_
#define _LIST_H_
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int Element; /*value field of a node*/
typedef struct list_node* list_pointer; /*node pointer*/
typedef list_pointer List;
typedef list_pointer Node;
struct list_node { /*definition of a node*/
	Element value;
	list_pointer link;
};

int IsEmpty(List);
void WriteListItem(List);
List AddItem(List, Element);
Node FindItem(List, Element);
List DeleteFirstItem(List);
List DeleteItem(List, Element);

#endif