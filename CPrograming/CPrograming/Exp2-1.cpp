#include<stdio.h>
#include<stdlib.h>
double f(double x);

int main() {
	double x,y;
	printf("ÇëÊäÈëXµÄÖµ\n");
	scanf_s("%lf", &x);
	printf("y=%.2f\n", y = f(x));
	system("pause");
	return 0;
}

double f(double x) {
	double y;
	if (x <= 0) y = x;
	else if (1 <= x&&x <= 10) y = 5 * x - 10;
	else if (x >= 10) y = 10*x - 20;
	return y;
}