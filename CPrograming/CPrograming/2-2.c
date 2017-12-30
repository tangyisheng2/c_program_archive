#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int calc_number(int input);
int reverse(int input);
int sequence(int input, double number);
	int main() {
	int input;
	double number;
	/*char choice;switch用*/
	int choice;
	printf("Please Choose:\n"
	"1:计算字符个数\n"
	"2.按顺序输出每个数字\n"
	"3.倒序输出\n"
	"请选择：");
	scanf_s("%d", &choice);
	/*scanf_s("%c", &choice,sizeof(choice));
	switch用*/
	printf("\n");
	printf("Input:");
	scanf_s("%d", &input);
	printf("\n");//输入字符
	number=calc_number(input);//为顺序和倒序输出做准备

 	/*switch (choice)
	{
	case '1':
		printf("Input has %.0f digit.\n", number);//计算个数
		break;
	case '2':
		printf("按顺序输出数字");
		sequence(input, number);//按顺序输出
		break;
	case '3':printf("Reversed number is:");
		reverse(input);//倒序输出
		printf("\n");
		break;
	default:
		break;
	}*/

	if (choice == 1) {
		printf("Input has %.0f digit.\n", number);//计算个数
	}
	else if (choice == 2) {
		printf("按顺序输出数字");
		sequence(input, number);//按顺序输出
	}
	else if (choice == 3) {
		reverse(input);//倒序输出
		printf("\n");
	}
	else
	{
		printf("Error!");
	}

	printf("\n");
	system("pause");
	return 0;
}

int calc_number(int input) {
	int count = 1;
	while (input / 10 != 0) {
		count++;
		input = input / 10;
	}
	return count;
	
}

int reverse(int input) {


	while (input != 0) {
		printf("%d", input % 10);
		input = input / 10;
	}
	return 0;
}

int sequence(int input,double number) {
	/*//int output;
	int tmp, denominator,i;
	denominator = 1;
	//number--;
	while (input != 0) {
		for (i = 0; i < number; i++) {
			denominator = 10 * denominator;
		}
		
		printf("%d", input/denominator);
		input=input/10;
		number--;
	}*/
	int digit;
	digit = 0;
	while (input != 0) {

		digit = input / (int)pow(10.0, (number - 1));
		printf("%d", digit);
		input = input - digit*(int)pow(10.0, (number - 1));
		number--;
	}
	return 0;
}