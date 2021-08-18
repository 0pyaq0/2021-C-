#include<stdio.h>

int rec_func(int n);
int main(void)
{
	rec_func(10);
	return 0;
}
int rec_func(int n)
{
	int res = 0;
	for (int i = 1; i <= n; i++) {
		res += i;
	}
	printf("%d", res);
}