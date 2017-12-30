/*查找指定字符*/
#include<stdio.h>
#include<string.h>
#define M 80 
int main()
{
	int i, index;
	char char1;
	char str[M];
	printf("Enter a character:");
	scanf("%c", &char1);//获取字符
	fflush(stdin);//去除回车符
	printf("Enter a string:");
	gets(str,80);//获取字符串
	index = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == char1)
			index = i;
	}
	//从字符串头到字符串尾逐元素比较
	if (index == 0)
		printf("Not Found!");
	else
		printf("We have found it! And the maximum index is%d", index);
	return 0;
}