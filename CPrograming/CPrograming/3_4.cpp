#include<stdio.h>
#include<stdlib.h>
int main() {
	int i,printf_count,digit1,digit2,digit3,sum;
	printf_count = 0;
	for (i = 100; i <= 200; i++) {
		//获取每一位数数字
		digit1 = i / 100;
		digit2 = (i % 100) / 10;
		digit3 = i % 10;
		sum = digit1 + digit2 + digit3;
		if (sum % 5 == 0) {
			printf("%d,", i);
			printf_count++;
		}
		if (printf_count == 5) {
			printf("\n");
			printf_count = 0;
		}
	}
	printf("\n");
	system("pause");
	return 0;
}