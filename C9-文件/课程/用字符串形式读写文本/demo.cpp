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
	printf("请键入文章内容：\n");
	char str[100];
	gets(str);
	FILE * f = fopen(fileName, "a");
	if (f == NULL) {
		printf("文件打开失败！\n");
		exit(0);
	}
	fputs(str, f);
	fclose(f);
}

void readFile(char * fileName) {
	printf("文章内容为：\n");
	FILE * f = fopen(fileName, "r");
	char * str;
	if (f != NULL) {
		while (fgets(str, sizeof(str), f)) {
			printf("%s", str);
		}
	}
	printf("\n");
}
