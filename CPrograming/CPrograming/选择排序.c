#include<stdio.h>
#include<stdlib.h>
#define len 10


int main() {
	int i, j, tmp, min,number[len];
	for (i = 0; i < len; i++) {
	printf("Input number%d:", i);
	scanf_s("%d", &number[i]);//ÊäÈëÊý¾Ý
	}
	for (i = 0; i < len-1; i++) {

		min = i;
		for (j = i + 1; j < len; j++) {
			if (number[j] < number[min]) {
				min = j;
			}
		}
				tmp = number[i];
				number[i] = number[min];
				number[min] = tmp;
			
	}
	for (i = 0; i < len; i++) {
		printf("%d,", number[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
