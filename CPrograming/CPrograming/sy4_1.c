#include<stdio.h>
#include<stdlib.h>
#define M 10

int main() {
	int a[M + 1] = { 10,20,30,40,50,60,70,80,90,99 };
	int i, n, p;
	printf("原始数据列为：\n");
	for (i = 0; i < M; i++) {
		printf("%d ", a[i]);
	}
	printf("\n请输入要插入的数据：\n");
	scanf_s("%d", &n);
	a[M] = n;
	for (i = 0; i <= M; i++) {
		if (n <= a[i]) {
			p = i;
			break;
		}
	}
	for (i = M-1; i >= p; i--) {
		a[i + 1] = a[i];
	}
	a[p] = n;	//插入数据
	printf("\n插入数据后的数列：\n");
	for (i = 0; i < M + 1; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}