#include<stdio.h>
#include<stdlib.h>
int main() {
	char letter;
	letter = getchar();
	if (letter >='A'&&letter <='Z')
	{
		letter = letter + 32;
		printf("%c\n", letter);
	}
	else printf("%c\n", letter);

	system("pause");
	return 0;
}