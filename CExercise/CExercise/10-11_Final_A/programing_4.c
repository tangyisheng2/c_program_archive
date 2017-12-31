#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fun(char str[], char del);
int fun_1(char s[], int c);

int main() {

	char str[80], a;
	gets_s(str, sizeof(str));
	scanf_s("%c", &a,1);
	fun_1(str, a);
	puts(str);
	system("pause");
	return 0;
}

int fun(char str[], char del) {
	int i = 0, j = 0, k = 0;
	for (i = 0; i < strlen(str); i++) {
		for (k = 0; k < strlen(str); k++) {
			if (str[i] == del) {
				strcpy_s(str + i, 80 - i, str + i + 1);
			}
		}
	}
	return 0;
}

int fun_1(char s[], int c) {
	char *q = s;
	for (; *q; q++)
		if (*q != c) *(s++) = *q;
	*s = NULL;
	return 0;
}
