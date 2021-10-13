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

void selectionSort(int* arr, int n) {
	for (int i = 0; i < n-1; i++) {
		int min = i;
		for (int j = i + 1; j < n;j++) {
			if (arr[min] > arr[j]) {
				min = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}