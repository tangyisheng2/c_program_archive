#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int calc_number(int input);
int reverse(int input);
int sequence(int input, double number);
	int main() {
	int input;
	double number;
	/*char choice;switch��*/
	int choice;
	printf("Please Choose:\n"
	"1:�����ַ�����\n"
	"2.��˳�����ÿ������\n"
	"3.�������\n"
	"��ѡ��");
	scanf_s("%d", &choice);
	/*scanf_s("%c", &choice,sizeof(choice));
	switch��*/
	printf("\n");
	printf("Input:");
	scanf_s("%d", &input);
	printf("\n");//�����ַ�
	number=calc_number(input);//Ϊ˳��͵��������׼��

 	/*switch (choice)
	{
	case '1':
		printf("Input has %.0f digit.\n", number);//�������
		break;
	case '2':
		printf("��˳���������");
		sequence(input, number);//��˳�����
		break;
	case '3':printf("Reversed number is:");
		reverse(input);//�������
		printf("\n");
		break;
	default:
		break;
	}*/

	if (choice == 1) {
		printf("Input has %.0f digit.\n", number);//�������
	}
	else if (choice == 2) {
		printf("��˳���������");
		sequence(input, number);//��˳�����
	}
	else if (choice == 3) {
		reverse(input);//�������
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