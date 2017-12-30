#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, fact,i;
	scanf_s("%d", &n);
	for (i = 1,	fact=1; i <= n; i++) {
		fact = fact*i;
	}
	printf("fact%d = %d\n", n, fact);
	system("pause");
	return 0;
}