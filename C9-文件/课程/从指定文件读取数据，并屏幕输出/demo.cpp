/*
	1.	打开文件并判断是否成功
	2.	读取文件，输出
	3.	关闭文件
	样例文件目录：
		F:\\Workspace\\C\\C9-文件\\课程\\文件打开与关闭\\example.txt 
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

	char fileName[50];
	printf("请输入需要打开的文件：");
	scanf("%s", &fileName);

	FILE * f = fopen(fileName, "r");
	if (f == NULL) {
		printf("文件打开异常！\n");
		exit(0);
	}

	while (!feof(f)) {
		putchar(fgetc(f));
	}

	printf("\n");
	fclose(f);

	system("PAUSE");
	return 0;
}
