/*
	输入一个正整数，并判断其是否为质数 
*/
#include <stdio.h> 
#include <stdlib.h>

int main(void) {

	int i, num;
	printf("请输入一个正整数：");
	scanf("%d", &num);

	if (num <= 1) {
		printf("1既不是质数，也不是合数\n");
		system("PAUSE");
		return 0;
	}

	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			break;
		}
	}

	if (i == num) {
		printf("%d是一个质数\n", num);
	} else {
		printf("%d不是一个质数\n", num);
	} 

	system("PAUSE");
	return 0;
}
