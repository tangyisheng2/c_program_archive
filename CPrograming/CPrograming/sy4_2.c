#include<stdio.h>
#include<stdlib.h>

int main() {
	char ch1[20] = { 'H','e','l','l','o','\0' }, ch2[10] = { ' ','w','o','r','l','d','\0' };
	int i=0;
	printf("ch1=");
	while (ch1[i] != '\0') {
		printf("%c", ch1[i]);
		i++;
	}
	i = 0;
	printf("\n");
	printf("ch2=");
	while (ch2[i] != '\0')
	{
		printf("%c", ch2[i]);
		i++;
	}
	printf("\n");
	for ( i = 0; i <=7; i++)
	{
		ch1[i + 5] = ch2[i];
	}

	i = 0;
	printf("After:");
	while (ch1[i] != '\0') {
		printf("%c", ch1[i]);
		i++;
	}

	printf("\n");
	system("pause");
	return 0;
}