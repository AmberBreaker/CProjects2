/*
	ʵ���ļ����� 
	Դ�ļ���F:\\Workspace\\files\\example2.txt
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

// ��Դ�ļ� 
FILE * getSrcFile(void) {
	printf("������Դ�ļ����ƣ�");
	char srcName[50];
	scanf("%s", srcName);
	getchar();
	FILE * srcf = fopen(srcName, "r");
	if (srcf == NULL) {
		printf("Դ�ļ���ʧ�ܣ�\n");
		exit(0);
	}
	return srcf;
}

// �򿪻򴴽�Ŀ���ļ� 
FILE * getTarFile(void) {
	printf("������Ŀ���ļ����ƣ�");
	char tarName[50];
	scanf("%s", tarName);
	getchar();
	FILE * tarf = fopen(tarName, "w");
	if (tarf == NULL) {
		printf("Ŀ���ļ��򿪻򴴽�ʧ�ܣ�\n");
		exit(0);
	}
	return tarf;
}

// ���� 
void pasteFile(FILE * srcf, FILE * tarf) {
	char str[256];
	while (fgets(str, sizeof(str), srcf)) {
		fputs(str, tarf);
	}
}
