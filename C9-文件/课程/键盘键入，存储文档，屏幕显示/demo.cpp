/*
	�Ӽ��������ַ���������д��һ���ı��ļ���ֱ������ # �������룬
	Ȼ���ٴӸ��ļ���ȡ�ļ����ݣ�������Ļ�����
	F:\\Workspace\\files\\example1.txt
*/
#include <stdio.h>
#include <stdlib.h>

void writeFile(FILE *);
void readFile(FILE *);

int main(int argc, char * argv[]) {

	char fileName[50];
	printf("�������ļ����ƣ�");
	scanf("%s", fileName);

	FILE * f = fopen(fileName, "w+");
	if (f == NULL) {
		printf("�ļ��򿪻򴴽�ʧ�ܣ�\n");
		exit(0);
	}

	writeFile(f);
	readFile(f);

	fclose(f);
	system("PAUSE");
	return 0;
}

void writeFile(FILE * f) {
	printf("������ļ����ݣ�\n");
	char ch;
	while ((ch = getchar()) != '#') {
		fputc(ch, f);
	}
	rewind(f);
}

void readFile(FILE * f) {
	printf("�ļ�����Ϊ��\n");
	while (!feof(f)) {
		putchar(fgetc(f));
	}
	printf("\n");
}
