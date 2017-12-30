#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int i, result,digit1,digit2,digit3;
	double sum;
	i = 100, result = 0;
	for (; i <= 999; i++)
	{
		//获取每一位数数字
		digit1 = i / 100;
		digit2 = (i % 100) / 10;
		digit3 = i % 10;
		sum = pow(digit1, 3) + pow(digit2, 3) + pow(digit3, 3);
		if (i == sum) {
			printf("%d,", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}