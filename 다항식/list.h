/*list.h*/
#pragma once
#ifndef _LIST_H_
#define _LIST_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct term_node* poly_ptr;
struct term_node {
	int coef;
	int expon;
	poly_ptr link;
};


poly_ptr getNode();
void append(int, int, poly_ptr*);
void erase(poly_ptr*);
poly_ptr poly_add(poly_ptr a, poly_ptr b);
void WritePolyItem(struct term_node);

#endif