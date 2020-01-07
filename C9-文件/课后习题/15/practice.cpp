/*
	编写程序实现单词的查找，对于已打开的文本文件，
	统计其中包含后单词的个数。
	F:\\Workspace\\files\\example6.txt
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char word[10];

int countWord(FILE *);

int main(int argc, char * argv[]) {
	
	printf("请输入文件名：");
	char fileName[50];
	scanf("%s", fileName);
	FILE * f = fopen(fileName, "r+");
	if (f == NULL) {
		printf("文件打开失败！\n");
		exit(0);
	}

	printf("请输入需要查找的单词：");
	scanf("%s", word);

	int n = countWord(f);
	printf("%s在文档中的数量为：%d\n", word, n);

	fclose(f);
	system("PAUSE");
	return 0;
}

int countWord(FILE * f) {
	char tmp[10];
	int i = 0, cnt = 0;
	while (!feof(f)) {
		char ch = fgetc(f);
		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <='z') {
			tmp[i++] = ch;
		} else {
			tmp[i] = '\0';
			i = 0;
			if (strcmp(word, tmp)) {
				cnt++;
			}
		}
	}
	return cnt;
}
