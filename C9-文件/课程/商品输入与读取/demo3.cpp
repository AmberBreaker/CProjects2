/*
	���������Ʒ��Ϣ��
	����Ʒ��Ϣ�ļ���������Ʒ��Ϣ������ٸ��������
	��Ʒ��¼�� m������� m ����Ʒ��Ϣ��
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

void readFile(FILE *);
void chsdFile(FILE *);

int main(int argc, char * argv[]) {
	
	char fileName[50];
	printf("�������ļ����ƣ�");
	scanf("%s", fileName);
	
	FILE * f = fopen(fileName, "r");
	if (f == NULL) {
		printf("�ļ���ʧ�ܣ�\n");
		exit(0);
	}

	readFile(f);
	chsdFile(f);

	fclose(f);
	system("PAUSE");
	return 0;
}

void readFile(FILE * f) {
	Pro record;
	int i = 1;
	while (fread(&record, sizeof(record), 1, f)) {
		printf("�� %d ����Ʒ��ţ�%s\n", i, record.id);
		printf("�� %d ����Ʒ���ƣ�%s\n\n", i++, record.name);
	}
}

void chsdFile(FILE * f) {
	Pro record;
	int m;
	printf("��ѡ����Ʒ���鿴����ϸ��Ϣ��");
	scanf("%d", &m);
	fseek(f, (m - 1) * sizeof(record), 0);
	fread(&record, sizeof(record), 1, f);
	printf("�� %d ����Ʒ��ţ�%s\n", m, record.id);
	printf("�� %d ����Ʒ���ƣ�%s\n", m, record.name);
	printf("�� %d ����Ʒ���ۣ�%.2f\n", m, record.price);
	printf("�� %d ����Ʒ������%d\n", m, record.count);
}
