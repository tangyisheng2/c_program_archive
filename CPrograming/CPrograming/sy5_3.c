#include<stdio.h>
#include<stdlib.h>
#define N 10

int max_userdefine(int x[], int n);
int sel_sort(int x[], int n);

int main() {
	int a[N], i;
	for (i = 0; i < N; i++) {
		scanf_s("%d", &a[i]);
	}
	sel_sort(a, N);
	for (i = 0; i < N; i++) {
		printf("%d,", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}


int max_userdefine(int x[], int n) {
	int i, j;
	j = 0;
	for (i = 1; i < n; i++) {
		if (x[i] > x[j])
			j = i;
	}
	return j;
}

int sel_sort(int x[], int n) {
	int i, j;
	for (i = n; i > 1; i--) {
		j = max_userdefine(x, i);
		int temp = x[j];
		x[j] = x[i - 1];
		x[i - 1] = temp;
	}
	return 0;
}