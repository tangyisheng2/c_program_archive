#include<stdio.h>
#include<stdlib.h>
int main() {
	int value[4], i,j,k,t;
	for (i = 0; i < 4; i++) {
		printf("Input Value%d", i);
		scanf_s("%d", value[i]);
		printf("\n");
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 3 - j; k++) {
				if (value[i] < value[i + 1]) {
					t = value[i];
					value[i] = value[i + 1];
					value[i + 1] = t;
				}
			}
		}
		printf("%d", value[i]);
	}
	system("pause");
	return 0;
}