#include<stdio.h>
#include<stdlib.h>
#define NUM 10
int average(int j);
int min_user(int j);
int max_user(int j);

int mark[2][NUM] = { {76,85,76,87,97,68,56,89,99,93},{87,58,76,58,57,99,76,98,87,68} };
int main() {
	//int i,sum,j;
	//Group1
	printf("Group1:\n");
	average(0);
	max_user(0);
	min_user(0);
	//Group2
	printf("Group2:\n");
	average(1);
	max_user(1);
	min_user(1);
	system("pause");
	return 0;

}

int average(int j) {
	int average, i,sum=0;
	for (i = 0; i < NUM; i++) {
		sum += mark[j][i];
	}
	average = sum / NUM;
	printf("The average is %d\n", average);
	return 0;
}
int max_user(int j) {
	int max,i;
	max = 0;
	for (i = 1; i < NUM; i++) {
		if (mark[j][i] > mark[j][max])
			max = i;
	}
	printf("The maximun mark is %d\n", mark[j][max]);
	return 0;
}

int min_user(int j) {
	int min, i;
	min = 0;
	for (i = 1; i < NUM; i++) {
		if (mark[j][i] < mark[j][min])
			min = i;
	}
	printf("The minimun mark is %d\n", mark[j][min]);
	return 0;
}
