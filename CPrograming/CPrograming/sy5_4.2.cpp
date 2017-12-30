#include<stdio.h>
#include<stdlib.h>
int fact(int n);

int main() {
	int n, m, result;
	printf("Please input m,n:");
	scanf_s("%d%d",&m,&n);
	printf("\n");
	//check data
	if (n<m) {
		printf("Data invaild!Exiting...");
		return 0;
	}
	result = (fact(n)) / (fact(n - m)*fact(m));
	printf("Result = %d\n", result);
	system("pause");
	return 0;
}

int fact(int n) {
	int fact, i;
	for (i = 1, fact = 1; i <= n; i++) {
		fact = fact*i;
	}
	return fact;
}