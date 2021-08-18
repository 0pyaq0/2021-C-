#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int res;

	res = (sizeof(short) > sizeof(long));

	printf("%s\n",(res == 1 ) ? "short" : "long"); //res가 1과 같으면 short형의 크기가 크므로 출력하고 그렇지 않으면 long출력 , 조건연산자 사용 외우기
	//모 아니면 도 -> 조건연산자 ,삼항 연산자

	return 0;
}