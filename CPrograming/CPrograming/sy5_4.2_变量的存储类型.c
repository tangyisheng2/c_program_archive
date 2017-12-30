#include<stdio.h>
#include<stdlib.h>
void auto_static(void) {
	int var_auto =0;
	static int var_static = 0;
	//printf("var_auto=%d,var_static=%d\n", var_auto, var_static);
	++var_auto;
	++var_static;
	//return 0;
}

int main() {
	int i;
	for (i = 0; i < 5; i++)
		auto_static();

	system("pause");
	return 0;
}
