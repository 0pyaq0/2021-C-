#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num;

	printf("2 �̻��� ������ �Է��Ͻÿ� : ");
	scanf("%d\n", &num);

	for (int i = 0; i < 5; i++) {
		for (int j = 2; j <= num; j++) {
			if (j % 2 == 1) {
				printf("%d", j);
			}
		}
		printf("\n");
	}
}