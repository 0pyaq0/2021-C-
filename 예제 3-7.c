#define _CRT_SECURE_NO_WARNINIGS
#include<stdio.h>
#include<string.h> //���ڿ��� �ٷ� �� �ִ� string.h ��� ���� ����

int main(void)
{
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	strcpy(fruit, "banana"); //furit�� banana����
	printf("%s\n", fruit);

	return 0;
}