#include<stdio.h>
void main() {
	int i, s = 0;
	for (i = 1; i <= 5; i++) {
		s = s + i;
	}
	printf("S=%d\n", s);
}