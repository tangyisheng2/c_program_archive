#include<stdio.h>
#include<stdlib.h>
int main() {
	int i = 8, j = 10, m = 0, n = 0;
	i = 8; j = 10;
	m+= i++; n-= --j;
	printf("i=%d,j=%d,m=%d,n=%d\n", i, j, n, m);
	system("pause");
	return 0;
}