/*
	利用命令行参数完成数制间的转换
	如：
		convert 234 8：以8进制输出整数234
		convert 234 16：以16进制输出整数234 
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	if (argc != 3) {
		printf("功能：数制间的转换\n");
		system("PAUSE");
		exit(0); 
	}

	int num = atoi(argv[1]);
	int in = atoi(argv[2]);
	
	switch (in) {
		case 8 :
			printf("%d转化为八进制之后结果为：%o\n", num, num);
			break;
		case 16 :
			printf("%d转化为十六进制之后的结果为：%X\n", num, num);
			break;
		default :
			printf("仅支持8进制与16进制转换\n");
	}

	system("PAUSE");
	return 0;
}
