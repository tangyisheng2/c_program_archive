#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j, number[4] = { 22,34,3,32 }, len = 4, tmp;
	/*for (i = 0; i < 4; i++) {
		printf("Input number%d:", i);
		scanf_s("%d", &number[i]);//输入数据
	}*/
	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - i - 1; j++) {
			if (number[j] > number[j + 1]) {
				tmp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 4; i++) {
		printf("%d,", number[i]);//输出数据
	}
	printf("\n");
	system("pause");
	return 0;
}