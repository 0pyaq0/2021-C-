#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int res;

	res = (sizeof(short) > sizeof(long));

	printf("%s\n",(res == 1 ) ? "short" : "long"); //res�� 1�� ������ short���� ũ�Ⱑ ũ�Ƿ� ����ϰ� �׷��� ������ long��� , ���ǿ����� ��� �ܿ��
	//�� �ƴϸ� �� -> ���ǿ����� ,���� ������

	return 0;
}