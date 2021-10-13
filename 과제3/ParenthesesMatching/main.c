/*main.c: Parentheses Matching*/

#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>
#include "stack.h"

int main() {
	//1. 수식을 입력받는다.
	char expression[100];
	scanf("%s", &expression);

	//2. 스택을 생성한다.
	Stack stack;
	stack.top = 0;

	//3. for문을 통해 수식의 처음부터 끝까지 검사한다.
	// 	 if문을 통해 '('이면 현재 index를 스택에 넣고,')'이면 top의 원소를 pop하고 현재 인덱스와 출력한다.
	for (int i = 0; i < strlen(expression); i++) {
		if (expression[i] == '(') {
			push(&stack, i);
		}
		else if (expression[i] == ')') {
			printf("(%d,%d) ", pop(&stack), i);
		}
	}
}