/*
	模块化编译链接
	步骤：
		1.	在c/cpp目录下进入DOS窗口
		2.	编译main.cpp：
				gcc -c main.cpp -o main.o
		3.	编译sum.cpp：
				gcc -c sum.cpp -o sum.o
		4.	链接：
				gcc main.o sum.o -o sum.exe
		5.	执行运行文件：
				sum.exe 
*/
#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(void) {
	printf("1 + 2 + ... + 10 = %d\n", sum(10));
	system("PAUSE");
	return 0;
} 
