#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name); // 배열에는 &를 사용하지 않는다.
	printf("%s의 학접은 %c입니다.\n", name, grade);

	return 0;
}