/*
	判断输入的正整数是否既是5的倍数，又是7的倍数。
	若是，输出 yes，否则输出 no 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i;
	printf("请输入一个正整数，判断是否为5和7的倍数：");
	scanf("%d", &i);

	if (i % (5 * 7) == 0) {
		printf("yes\n");
	} else {
		printf("no\n");
	}

	system("PAUSE"); 
	return 0;
}
