/*
	从键盘输入字符，并将其写入一个文本文件，直到遇到 # 结束输入，
	然后再从该文件读取文件内容，并在屏幕上输出
	F:\\Workspace\\files\\example1.txt
*/
#include <stdio.h>
#include <stdlib.h>

void writeFile(FILE *);
void readFile(FILE *);

int main(int argc, char * argv[]) {

	char fileName[50];
	printf("请输入文件名称：");
	scanf("%s", fileName);

	FILE * f = fopen(fileName, "w+");
	if (f == NULL) {
		printf("文件打开或创建失败！\n");
		exit(0);
	}

	writeFile(f);
	readFile(f);

	fclose(f);
	system("PAUSE");
	return 0;
}

void writeFile(FILE * f) {
	printf("请键入文件内容：\n");
	char ch;
	while ((ch = getchar()) != '#') {
		fputc(ch, f);
	}
	rewind(f);
}

void readFile(FILE * f) {
	printf("文件内容为：\n");
	while (!feof(f)) {
		putchar(fgetc(f));
	}
	printf("\n");
}
