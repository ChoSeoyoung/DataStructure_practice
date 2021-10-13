#include <stdio.h>
#include <math.h>
#include "f.h"

float f(float coef[], int power[], float x) {
	float result = 0;

	for (int i = 0; i < 5; i++) {
		if (power[i] == 0) {
			result += coef[i];
		}
		else {
			float temp = 1;
			for (int j = 0; j < power[i]; j++) {
				temp *= x;
			}
			result += coef[i] * temp;
		}
	}

	result = floor(result * 1000);
	return result / 1000;
}