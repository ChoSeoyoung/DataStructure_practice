#pragma warning(disable: 4996)
#include <stdio.h>
#include <math.h>
#include "f.h"

float coef[5] = {6.7,3.2,-1,1,-2};
int power[5] = {4,3,2,1,0};

int main() {
	//1.그래프 그리기, 텍스트 파일로 결과를 출력한후, 파이썬으로 그림
	FILE* fp_x = fopen("output_x.txt", "w");
	FILE* fp_y = fopen("output_y.txt", "w");

	for (float i = -10; i <= 10; i += 0001) {
		fprintf(fp_x, "%f,", i);
		fprintf(fp_y, "%f,", f(coef, power, i));
	}

	fclose(fp_x);
	fclose(fp_y);

	//2.f(x)=0을 만족하는 x찾기
	for (float i = -10; i <= 10; i += 0.0001) {
		if (f(coef, power, i) == 0) {
			printf("f(x)=0, x: %f\n", i);
		}
	}

	//3. f(x)의 최소값 찾기
	float min = f(coef, power, -10);
	float min_x = -10;
	for (float i = -10; i <= 10; i += 0.0001) {
		if (f(coef, power, i) < min) {
			min = f(coef, power, i);
			min_x = i;
		}
	}

	printf("x=%f, minimun=%f", min_x, min);
}