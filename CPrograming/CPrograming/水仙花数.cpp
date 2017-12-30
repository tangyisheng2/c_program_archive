#include<stdio.h>
int main(void) {

	int a, b, c, i;
	for (i = 99; i<1000; i++) {
		a = (i / 100)*(i / 100)*(i / 100);
		b = (i % 100 / 10)*(i % 100 / 10)*(i % 100 / 10);
		c = (i % 10)*(i % 10)*(i % 10);
	
	if (i == a + b + c)
		printf("%d", i);
	else printf(" ");
	}
	return 0;
}