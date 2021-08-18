#include<stdio.h>

double centi(double cm);
int main(void)
{
	double res;

	res = centi(187);
	printf("%.2lfm\n", res);

	return 0;
}
double centi(double cm)
{
	double m;
	m = cm * 0.01;
	return m;
}