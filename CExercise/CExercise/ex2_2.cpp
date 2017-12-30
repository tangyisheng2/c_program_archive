#include<stdio.h>
int main()
{
	int begin_;
	int i, j, temp, n, k, max=0, min=0;
	int a[10];
	double average, sum;

	printf("请输入10个学生的成绩：");
	sum = 0;
	for (i = 0; i<10; i++)
	{
		scanf_s("%d", &a[i]);
		sum = sum + a[i];
	}
	average = sum / 10;
	printf("average=%.2f", average);

	j = 0;
	for (i = j + 1; i<10; i++)
	{
		if (a[i]<a[j]) j = i;
		temp = a[j];
		a[j] = a[min];
		a[min] = temp;
	}
	printf("\n");
	printf("min=%d", a[min]);

	n = 0;
	for (i = n + 1; i<10; i++)
	{
		if (a[i]>a[n]) n = i;
		k = a[n];
		a[n] = a[max];
		a[max] = k;
	}
	printf("\n");
	printf("max=%d", a[max]);
	return 0;
}
