#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a, b, num;
	char op;

	printf("사칙연산 입력(정수) : ");
	scanf("%d%c%d", &a, &op, &b);

	switch (op) {
	case '+': 
		num = a + b;
		printf("%d %c %d = %d", a, op, b, num); break;
	case '-':
		num = a - b;
		printf("%d %c %d = %d", a, op, b, num); break;
	case '*':
		num = a * b;
		printf("%d %c %d = %d", a, op, b, num); break;
	case '/':
		num = a / b;
		printf("%d %c %d = %d", a, op, b, num); break;
	}
	return 0;
}