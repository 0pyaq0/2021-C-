#include<stdio.h>

int sum(int x, int y); //sum 함수 선언
int main(void)
{
	int a = 10, b = 20;
	int res;

	res = sum(a, b);
	printf("result : %d\n", res);

	return 0;
}
int sum(int x, int y) {
	int temp;
	temp = x + y;
	return temp;
}