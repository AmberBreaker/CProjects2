/*
	实现文件复制 
	源文件：F:\\Workspace\\files\\example2.txt
*/
#include <stdio.h>
#include <stdlib.h>
#define N 50

FILE * getSrcFile(void);
FILE * getTarFile(void);
void pasteFile(FILE *, FILE *);

int main(int argc, char * argv[]) {

	FILE * srcf = getSrcFile();
	FILE * tarf = getTarFile();
	pasteFile(srcf, tarf); 

	fclose(tarf);
	fclose(srcf);

	system("PAUSE");
	return 0;
}

// 打开源文件 
FILE * getSrcFile(void) {
	printf("请输入源文件名称：");
	char srcName[50];
	scanf("%s", srcName);
	getchar();
	FILE * srcf = fopen(srcName, "r");
	if (srcf == NULL) {
		printf("源文件打开失败！\n");
		exit(0);
	}
	return srcf;
}

// 打开或创建目标文件 
FILE * getTarFile(void) {
	printf("请输入目标文件名称：");
	char tarName[50];
	scanf("%s", tarName);
	getchar();
	FILE * tarf = fopen(tarName, "w");
	if (tarf == NULL) {
		printf("目标文件打开或创建失败！\n");
		exit(0);
	}
	return tarf;
}

// 复制 
void pasteFile(FILE * srcf, FILE * tarf) {
	char str[256];
	while (fgets(str, sizeof(str), srcf)) {
		fputs(str, tarf);
	}
}
