#include<stdio.h>
#include<stdlib.h>
int sum(int value[]);
int average(int value[]);
int main() {
	printf("Please input 4 value:");
	int input[4], i;
	for (i = 0; i < 4; i++) {
		scanf_s("%d", &input[i]);
	}
	sum(input);
	average(input);
	system("pause");
	return 0;
}

int sum(int value[]) {
	int sum=0, i;
	for (i = 0; i < 4; i++) {
		sum+=value[i];
	}
	printf("SUM = %d\n",sum);
	return 0;
}

int average(int value[]) {
	int sum=0, i;
	double avg;
	for (i = 0; i < 4; i++) {
		sum += value[i];
	}
	avg = sum*1.0 / 4;
	printf("Average = %.1lf\n", avg);
	return 0;
}