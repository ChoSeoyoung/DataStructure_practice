#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include "gettime.h"

int main() {
	int n;
	printf("n:");
	scanf("%d", &n);

	int* a = array(n);

	/* assign some values to the arrays */
	for (int i = 0; i < n; i++)
		a[i] = rand() % 10;

	//정렬 전 배열
	//printArray(a, n);

	long start_time = get_runtime();
	selectionSort(a, n);
	long end_time = get_runtime();
	long taken_time = end_time - start_time;
	printf("\n\n%d\n", taken_time);

	//정렬 후 배열
	//printArray(a, n);
	return 0;
}