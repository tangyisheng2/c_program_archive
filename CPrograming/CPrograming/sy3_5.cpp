#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, sum;
	sum = 0;
	i = 10;
	while (!i == 0) {
		sum = sum + i;
		i--;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}