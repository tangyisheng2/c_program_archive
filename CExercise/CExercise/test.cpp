#include<stdio.h>
#define M 10
int max(int a[]);
int average(int a[]);
int min(int a[]);
int main()
{
	int average, max, min, i, a[M];
	printf("输入十位学生的成绩：");
	for (i = 0; i < M; i++)
		scanf_s("%d", a[i]);
	printf("The average is %d\n", average(a[M]));
	printf("The maximun mark is %d\n", max(a[M]));
	printf("The minimun mark is %d\n", min(a[M]));
	return 0;
}
int average(int a[])
{
	int sum,  average,i;
	for (i = 0; i<M; i++)
		sum = sum + a[i];
	average = sum / M;
	return average;
}
int max(int a[])
{
	int   max = 0,i;
	for (i = 1; i<M; i++)
		if (a[max]<a[i])
			max = i;
	return a[max];
}
int min(int a[])
{
	int   min = 0,i;
	for (i = 1; i<M; i++)
		if (a[min]>a[i])
			min = i;
	return min;
}