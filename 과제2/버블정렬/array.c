#include <stdio.h>
#include <stdlib.h>
#include"array.h"

int* array(int n) {
	int* arr;
	arr = (int*)malloc(sizeof(int) * n);
	return arr;
}

void freeArray(int* arr) {
	free(arr);
}

void printArray(int* arr,int n) {

	printf("printArray\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}

void bubbleSort(int* arr,int n) {
	for (int i = n-1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
}

void swap(int *a, int *b) {
	int tmp = (*a);
	(*a) = (*b);
	(*b) = tmp;
}
