/*
	ʹ��fread, fwrite��� 
	F:\\Workspace\\files\\example4.txt
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Product {
	char id[10];
	char name[10];
	float price;
	int count;
} Pro;

void inputFile(FILE *);
void outputFile(FILE *);

int main(int argc, char * argv[]) {
	
	char fileName[50];
	printf("�������ļ����ƣ�");
	scanf("%s", fileName);
	FILE * f = fopen(fileName, "wb+");
	if (f == NULL) {
		printf("�ļ��򿪻򴴽�ʧ�ܣ�\n");
		exit(0);
	}
	
	inputFile(f);
	outputFile(f);
	
	fclose(f);
	system("PAUSE");
	return 0;
}

void inputFile(FILE * f) {
	printf("��������Ʒ������");
	int cnt;
	scanf("%d", &cnt);
	Pro record;
	printf("********** ��������Ʒ���� **********\n");
	for (int i = 1; i <= cnt; i++) {
		printf("������� %d ����Ʒ��ţ�", i);
		scanf("%s", record.id);
		printf("������� %d ����Ʒ���ƣ�", i);
		scanf("%s", record.name);
		printf("������� %d ����Ʒ���ۣ�", i);
		scanf("%f", &record.price);
		printf("������� %d ����Ʒ������", i);
		scanf("%d", &record.count);
		fwrite(&record, sizeof(record), 1, f);
		printf("\n");
	}
	rewind(f);
}

void outputFile(FILE * f) {
	printf("********** �����Ʒ���� **********\n");
	Pro record;
	int i = 1;
	while (fread(&record, sizeof(record), 1, f)) {
		printf("�� %d ����Ʒ��ţ�%s\n", i, record.id);
		printf("�� %d ����Ʒ���ƣ�%s\n", i, record.name);
		printf("�� %d ����Ʒ���ۣ�%.2f\n", i, record.price);
		printf("�� %d ����Ʒ������%d\n\n", i++, record.count);
	} 
}
