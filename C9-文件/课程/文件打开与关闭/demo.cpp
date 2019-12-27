/*
	文件打开与关闭
	输入文件路径与名称，判断是否打开成功
	可成功文件：
		F:\\Workspace\\C\\C9-文件\\课程\\文件打开与关闭\\example.txt 
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	
	char fileName[50];
	printf("请输入文件名称：");
	scanf("%s", fileName);
	
	FILE * f = fopen(fileName, "r");
	if (f == NULL) {
		printf("打开失败！\n");
	} else {
		printf("打开成功！\n");
	}
	
	fclose(f);
	
	system("PAUSE");
	return 0;
}
