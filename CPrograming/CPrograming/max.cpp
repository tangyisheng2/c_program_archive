#include<stdio.h>
#include<stdlib.h>
double max(double value1, double value2, double value3);
double value1, value2, value3;
int main() {
	printf("Please input 3 digit\n");
	scanf_s("%lf%lf%lf", &value1, &value2, &value3);
	printf("max=%.2lf\n", max(value1, value2, value3));
	system("pause");
	return 0;
}

double max(double value1,double value2,double value3)
{
	if (value1 > value2&&value1 > value3) return value1;
	else if (value2 > value1&&value2 > value3) return value2;
	else if (value3 > value1&&value3 > value2) return value3;
}