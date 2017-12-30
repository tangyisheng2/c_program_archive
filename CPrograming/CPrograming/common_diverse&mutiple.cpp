#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int max(int a, int b);
int min(int a, int b);

int main() {
	double  comon_divisor, common_multiple;
	int value1, value2, min_value, max_value, i;
	common_multiple = 0;
	comon_divisor = 0;
	scanf_s("%d,%d", &value1, &value2);
	max_value = max(value1, value2);
	min_value = min(value1, value2);
	//求最大公约数
	for (i = 2; i <= min_value; i++) {
		if ((value1) % i == 0 && (value2) % i == 0) {
			comon_divisor = i;
		}
	}
	printf("%f", comon_divisor);

	//求最小公倍数
	i = (int)max_value;
	while (i%value1 != 0 && i%value2 != 0)
	{
		i++;
	}
	common_multiple = i;
	printf("%f", common_multiple);

	system("pause");
	return 0;
}

int max(int a, int b) {
	if (a > b)return a;
	else if (a < b)return b;
}

int min(int a, int b) {
	if (a < b)return a;
	else if (a > b)return b;
}