/*
	���ʵ�ֽ�һ���ַ���׷�ӵ�ָ���ļ��У������ļ�
	����������Ļ�������ʹ���ַ�����д����ʵ�֣�
	F:\\Workspace\\files\\example2.txt
*/
#include <stdio.h>
#include <stdlib.h>

void writeFile(char *);
void readFile(char *);

int main(int argc, char * argv[]) {
	
	char fileName[50];
	printf("�������ļ����ƣ�");
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
		printf("�ļ���ʧ�ܣ�\n");
		exit(0);
	}

	printf("������ļ����ݣ�\n");
	char str[100];
	gets(str);
	fputs(str, f);

	fclose(f);
}

void readFile(char * fileName) {
	printf("�ļ�����Ϊ��\n");
	char * str;
	FILE * f = fopen(fileName, "r");
	if (f != NULL) {
		while (fgets(str, 100, f)) {
			printf("%s\n", str);
		}
		fclose(f);
	}
}
