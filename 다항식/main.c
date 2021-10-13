/*main.c*/
#include "list.h"

int main() {
	struct term_node a = { 1,1,getNode() };
	append(1, 1, &a.link);
	WritePolyItem(a);
	
	poly_ptr b = getNode();
	append(2, 2, &b);
	WritePolyItem(*b);
	return 0;
}