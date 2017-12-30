#include<stdio.h>
#include<stdlib.h>
#define NUM 10
int bisection(int value[], int key, int low, int high);
int main() {
	//int value[NUM] = { 10,20,30,40,50,60,70,80,90,100 };	Debug用数组定义
	int value[NUM];
	int result, target;
	//获取数组	
	int i;

	for (i = 0; i < NUM; i++) {
		scanf_s("%d", &value[i]);
	}
	printf("\nEnter a target:");
	scanf_s("%d", &target);
	result = bisection(value, target, 0, NUM - 1);
	if (result != -1)
		printf("\nThe %d th element\n",  result);
	else
		printf("\n404 NOT FOUND\n");
	system("pause");
	return 0;
}


int bisection(int value[], int target, int low, int high) {
	int mid = 0;
	//验证参数合法性
	if (low > high)
		return -1;//返回空
	while (target!=value[mid])
	{
		mid = (low + high) / 2;//求中间位置
		if (target<value[mid]) {
			high = mid;
		}
		else if(target>value[mid]){
			low = mid;
		}
		else if (target == value[mid])
			return mid;
		//验证参数合法性
		if (low >= mid)
			return -1;//返回空
	}
}
