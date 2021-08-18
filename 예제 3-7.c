#define _CRT_SECURE_NO_WARNINIGS
#include<stdio.h>
#include<string.h> //문자열을 다룰 수 있는 string.h 헤더 파일 포함

int main(void)
{
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	strcpy(fruit, "banana"); //furit에 banana복사
	printf("%s\n", fruit);

	return 0;
}