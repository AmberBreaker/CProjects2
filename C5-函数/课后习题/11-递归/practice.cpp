/*
	���õݹ�ķ������ʵ�֣��û�����һ�������������룺345
	����������3 4 5 
*/
#include <stdio.h>
#include <stdlib.h>

void printInfo(int);

int main(void) {
	int i;
	printf("����һ��������");
	scanf("%d", &i);
	
	printInfo(i);
	printf("\n");
	
	system("PAUSE");
	return 0;
}

void printInfo(int i) {
	if (i / 10 == 0) {
		printf("%d ", i % 10);
	} else {
		printInfo(i / 10);
		printf("%d ", i % 10);
	}
}
