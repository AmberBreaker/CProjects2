/*
	��fscanf��fprintf����ʵ�ֽ���Ʒ��Ϣ���뵽�ļ���
	���ļ����ݼ���Щ��Ʒ���ܼ��������ʾ���ϡ� 
	F:\\Workspace\\files\\example4.txt
*/
#include <stdio.h>
#include <stdlib.h>

void inputFile(FILE *);
void outputFile(FILE *);

typedef struct Product {
	char id[10];
	char name[10];
	float price;
	int count;
} Pro;

int main(int argc, char * argv[]) {
	
	char fileName[50];
	printf("�������ļ����ƣ�");
	scanf("%s", fileName);
	
	FILE * f = fopen(fileName, "w+");
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
	printf("�������Ʒ������");
	int cnt;
	scanf("%d", &cnt);
	Pro record;
	printf("****** �����Ʒ��Ϣ ******\n");
	for (int i = 1; i <= cnt; i++) {
		printf("�� %d ����Ʒ�����Ϊ��", i);
		scanf("%s", record.id); 
		printf("�� %d ����Ʒ������Ϊ��", i);
		scanf("%s", record.name);
		printf("�� %d ����Ʒ�ĵ���Ϊ��", i);
		scanf("%f", &record.price);
		printf("�� %d ����Ʒ������Ϊ��", i);
		scanf("%d", &record.count);
		fprintf(f, "%s %s %.2f %d\n", record.id, record.name, record.price, record.count);
		printf("\n"); 
	}
	rewind(f);
}

void outputFile(FILE * f) {
	Pro record;
	int i = 1;
	double sum = 0;
	printf("****** ��Ʒ��Ϣ���� ******\n");
	while (fscanf(f, "%s %s %f %d\n", record.id, record.name, &record.price, &record.count) != EOF) {
		printf("�� %d ����Ʒ�����Ϊ��%s\n", i, record.id);
		printf("�� %d ����Ʒ������Ϊ��%s\n", i, record.name);
		printf("�� %d ����Ʒ�ĵ���Ϊ��%.2f\n", i, record.price);
		printf("�� %d ����Ʒ������Ϊ��%d\n\n", i, record.count);
		sum += record.price * record.count;
	}
	printf("-----------------------\n");
	printf("�ܼ�Ϊ��%.2f\n", sum);
}
