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

void printArray(int* arr, int n) {

	printf("printArray\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}

void insertionSort(int* arr, int n) {
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		for (int j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
			arr[j] = key;
		}
	}
}