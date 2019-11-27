/*
	特殊符号处理 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	printf("当前文件绝对路径：%s\n", __FILE__); // 当前文件的绝对路径
	printf("当前行号：%d\n", __LINE__); // 表示当前行号的整数
	printf("当前日期：%d\n", __DATE__); // 包含当前日期的整数 
	printf("判断当前编译器是否遵循 ANSI C 标准：%d\n", __STDC__); // 若遵循，则非0
	printf("当前时间：%d\n", __TIME__); // 包含当前时间的整数 
	
	system("PAUSE");
	return 0;
}
