#include<stdio.h>
#include<stdlib.h>
int f(int i) {
	i = i*i - 1;
	return (i);
}

int main(void) {
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d,%d,",i, f(i));
	}
	printf("\n");
	system("pause");
	return 0;
}