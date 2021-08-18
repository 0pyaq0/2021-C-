#include<stdio.h>

int main(void)
{
	int seats = 70;
	int audience = 65;
	double rate;

	rate = ((double)audience / (double)seats) * 100.0;

	printf("입장률 : %.1lf%%", rate); // % 출력할때는 두번쓰기

	return 0;
}