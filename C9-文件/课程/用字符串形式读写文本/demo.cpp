/*
	编程实现将一个字符串追加到指定文件中，并将文件
	的内容在屏幕上输出（使用字符串读写函数实现）
	F:\\Workspace\\files\\example2.txt
*/
#include <stdio.h>
#include <stdlib.h>

void writeFile(char *);
void readFile(char *);

int main(int argc, char * argv[]) {
	
	char fileName[50];
	printf("请输入文件名称：");
	scanf("%s", fileName);
	getchar();

	writeFile(fileName);
	readFile(fileName);

	system("PAUSE");
	return 0;
}

void writeFile(char * fileName) {
	FILE * f = fopen(fileName, "a");
	if (f == NULL) {
		printf("文件打开失败！\n");
		exit(0);
	}

	printf("请键入文件内容：\n");
	char str[100];
	gets(str);
	fputs(str, f);

	fclose(f);
}

void readFile(char * fileName) {
	printf("文件内容为：\n");
	char * str;
	FILE * f = fopen(fileName, "r");
	if (f != NULL) {
		while (fgets(str, 100, f)) {
			printf("%s\n", str);
		}
		fclose(f);
	}
}
