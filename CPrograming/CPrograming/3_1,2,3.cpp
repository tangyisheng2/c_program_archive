#include<stdlib.h>
#include<stdio.h>
#define num 100

int main() {
	int i,result;
	i = 0, result = 0;
	//3_1:whileÓï¾ä
	while (i<=num)
	{
		result = result + i;
		i++;
	}
	printf("%d\n", result);

	//3_2:do-whileÓï¾ä
	i = 0, result = 0;//¸³³õÖµ
	do {
		result = result + i;
		i++;
	} while (i <= num);
	printf("%d\n", result);

	//3_3:forÓï¾ä
	i = 0, result = 0;//¸³³õÖµ
	for (; i <= num; i++) {
		result = result + i;
	}
	printf("%d\n", result);
	system("pause");
	return 0;

}
