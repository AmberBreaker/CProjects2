/*
	һ��ѧ���ļ�¼����ѧ�š������ͳɼ���ϢҪ��
	��1����ʽ��������ѧ����¼
	��2������fwrite��ѧ����Ϣ�������Ʒ�ʽд���ļ���
	��3������fread���ļ��ж����ɼ�����ƽ��ֵ 
	��4�����ļ��а��ɼ����򣬽��ɼ���д���ı��ļ���
	F:\\Workspace\\files\\example5.txt
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
	char id[10];
	char name[10];
	int score;
} Stu; 

void writeInfo(FILE *);
void readInfo(FILE *);
void orderInfo(FILE *);

int main(int argc, char * argv[]) {
	char fileName[50]; 
	printf("��������Ҫ�򿪵��ļ���");
	scanf("%s", fileName);
	FILE * f = fopen(fileName, "w+");
	if (f == NULL) {
		printf("�ļ��򿪻򴴽�ʧ�ܣ�\n");
		exit(0);
	}

	writeInfo(f);
	readInfo(f);
	orderInfo(f);

	fclose(f);
	system("PAUSE");
	return 0;
}

void writeInfo(FILE * f) {
	printf("������ѧ��������");
	int cnt;
	scanf("%d", &cnt);
	Stu record;
	printf("********** ������ѧ����Ϣ **********\n");
	for (int i = 1; i <= cnt; i++) {
		printf("�� %d ��ѧ��ѧ�ţ�", i);
		scanf("%s", record.id);
		printf("�� %d ��ѧ��������", i);
		scanf("%s", record.name);
		printf("�� %d ��ѧ���ɼ���", i);
		scanf("%d", &record.score);
		fwrite(&record, sizeof(record), 1, f);
		printf("\n");
	}
	rewind(f);
}

void readInfo(FILE * f) {
	printf("********** ����ѧ����Ϣ���� **********\n");
	Stu record;
	int i = 0;
	float avgscore = 0;
	while (fread(&record, sizeof(record), 1, f)) {
		printf("�� %d ��ѧ��ѧ�ţ�%s\n", ++i, record.id);
		printf("�� %d ��ѧ��������%s\n", i, record.name);
		printf("�� %d ��ѧ���ɼ���%d\n\n", i, record.score);
		avgscore += record.score;
	}
	avgscore /= i;
	printf("ƽ���ɼ�Ϊ��%.1f\n\n", avgscore);
}

void orderInfo(FILE * f) {
	// TODO
}
