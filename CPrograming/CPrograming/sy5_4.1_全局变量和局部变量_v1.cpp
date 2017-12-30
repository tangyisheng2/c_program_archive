#include<stdio.h>
#include<stdlib.h>
#define NUM 10
int mark[NUM] = { 87,58,76,58,57,99,76,98,87,68 };
int main() {
	int i,sum,average;
	//average
	sum = 0;
	for (i = 0; i < NUM; i++) {
		sum += mark[i];
	}
	average = sum / NUM;
	printf("The average mark is %d\n", average);
	//Max

	int max;
	max = mark[0];
	for (i = 1; i < NUM; i++) {
		if (mark[i] > max)
			max = i;
	}
	printf("The maximun mark is %d\n", mark[max]);
	//Min
	int min;
	min = mark[0];
	for (i = 1; i < NUM; i++) {
		if (mark[i] <min)
			min = i;
	}
	printf("The minimun mark is %d\n", mark[min]);
	system("pause");
	return 0;

}
