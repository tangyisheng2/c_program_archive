/*����ָ���ַ�*/
#include<stdio.h>
#include<string.h>
#define M 80 
int main()
{
	int i, index;
	char char1;
	char str[M];
	printf("Enter a character:");
	scanf("%c", &char1);//��ȡ�ַ�
	fflush(stdin);//ȥ���س���
	printf("Enter a string:");
	gets(str,80);//��ȡ�ַ���
	index = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == char1)
			index = i;
	}
	//���ַ���ͷ���ַ���β��Ԫ�رȽ�
	if (index == 0)
		printf("Not Found!");
	else
		printf("We have found it! And the maximum index is%d", index);
	return 0;
}