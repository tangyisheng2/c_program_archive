#include<stdlib.h>
#include<stdio.h>
#define num 100

int main() {
	int i,result;
	i = 0, result = 0;
	//3_1:while���
	while (i<=num)
	{
		result = result + i;
		i++;
	}
	printf("%d\n", result);

	//3_2:do-while���
	i = 0, result = 0;//����ֵ
	do {
		result = result + i;
		i++;
	} while (i <= num);
	printf("%d\n", result);

	//3_3:for���
	i = 0, result = 0;//����ֵ
	for (; i <= num; i++) {
		result = result + i;
	}
	printf("%d\n", result);
	system("pause");
	return 0;

}
