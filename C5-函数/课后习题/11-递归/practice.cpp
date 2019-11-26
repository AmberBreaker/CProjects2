/*
	利用递归的方法编程实现：用户输入一个整数，如输入：345
	则程序输出：3 4 5 
*/
#include <stdio.h>
#include <stdlib.h>

void printInfo(int);

int main(void) {
	int i;
	printf("输入一个整数：");
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
