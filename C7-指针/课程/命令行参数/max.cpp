/*
	求输入的若干个整数中的最大者
	用命令行参数处理
	测试数据：12 34 89 99 22
	期望数据：99 
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

	if (argc <= 1) {
		printf("功能：求最大值\n");
	}

	int max = atoi(argv[1]);

	for (int i = 1; i < argc; i++) {
		int tmp = atoi(argv[i]);
		if (tmp > max) {
			max = tmp;
		}
	}

	printf("最大值为：%d\n");

	system("PAUSE");
	return 0;
}
