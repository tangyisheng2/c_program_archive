#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {

	char str[80], a;
	gets_s(str, sizeof(str));
	scanf_s("%c", &a,1);
	int i = 0, j = 0, k = 0;
	for (i = 0; i < strlen(str); i++) {
		for (k = 0; k < strlen(str); k++) {
			if (str[i] == a) {
				strcpy_s(str + i, 80 - i, str + i + 1);
			}
		}
	}
	puts(str);

	system("pause");
	return 0;
}