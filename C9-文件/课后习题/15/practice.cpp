/*
	��д����ʵ�ֵ��ʵĲ��ң������Ѵ򿪵��ı��ļ���
	ͳ�����а����󵥴ʵĸ�����
	F:\\Workspace\\files\\example6.txt
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char word[10];

int countWord(FILE *);

int main(int argc, char * argv[]) {
	
	printf("�������ļ�����");
	char fileName[50];
	scanf("%s", fileName);
	FILE * f = fopen(fileName, "r+");
	if (f == NULL) {
		printf("�ļ���ʧ�ܣ�\n");
		exit(0);
	}

	printf("��������Ҫ���ҵĵ��ʣ�");
	scanf("%s", word);

	int n = countWord(f);
	printf("%s���ĵ��е�����Ϊ��%d\n", word, n);

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
