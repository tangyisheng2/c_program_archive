#include<stdio.h>
#include<stdlib.h>
#define M 10

int main() {
	int a[M + 1] = { 10,20,30,40,50,60,70,80,90,99 };
	int i, n, p;
	printf("ԭʼ������Ϊ��\n");
	for (i = 0; i < M; i++) {
		printf("%d ", a[i]);
	}
	printf("\n������Ҫ��������ݣ�\n");
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
	a[p] = n;	//��������
	printf("\n�������ݺ�����У�\n");
	for (i = 0; i < M + 1; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}