#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int i, j, index, tmp;
	int begin_;
	//char str[5][80];
	char(*str)[5] = NULL;//ָ������
	for (i = 0; i < 5; i++) {
		gets(str[i]);//�����ַ���
	}
	//ѡ������
	for (i = 0; i < 5; i++) {
		index = i;
		for (j = i + 1; j < 5; j++) {
			if ((strcmp(str[j], str[i])) < 0) {
				index = j;
			}
		}
		//�����ַ�����ַ
		tmp = i;
		i = index;
		index = tmp;
	}
	//��˳������ַ���
	for (i = 0; i < 5; i++) {
		puts(str[i]);
	}
	system("pause");
	return 0;
}