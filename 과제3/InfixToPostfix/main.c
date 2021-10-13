/*main.c: InfixToPostfix*/
#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>
#include "stack.h"

int main() {
	//1. Infix 표기식을 입력받는다.
	char expression[100];
	scanf("%s", &expression);

	//2. 스택을 생성한다.
	Stack stack;
	stack.top = 0;

	//3. for문을 통해 Infix 표기식의 처음부터 끝까지 검사한다.
	// 	 if문을 통해 '('이면 다음문자를 scan하고,
	// 				피연산자이면 출력하고
	// 				연산자이면 stack에 삽입하고
	//				')'이면 stack에서 원소를 꺼내 출력한다.
	for (int i = 0; i < strlen(expression); i++) {
		if (expression[i] == '(') {
			continue;
		}
		else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
			push(&stack, expression[i]);
		}
		else if (expression[i] == ')') {
			printf("%c ", pop(&stack));
		}
		else {
			printf("%c", expression[i]);
		}
	}
}