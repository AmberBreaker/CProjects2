/*
	������ִ����Ʒֳ���Ҫ��
	��1��ʹ�ýṹ��¼ѡ�ֵ������Ϣ��
	��2��ʹ�������ṹ���顣
	��3����ѡ�ֳɼ�����������������
	��4�������ļ���¼����������ڸ���ʱ������ļ��ж�����
		 �ۼӵ������ɼ��У��������������ս��д���ļ��С�
	F:\\Workspace\\files\\example7.txt �����ļ� 
	F:\\Workspace\\files\\example8.txt �����ļ� 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct player {
	char name[10];
	int score;
} Player;

int cmp(const void * a, const void * b) {
	return ((Player *) b)->score - ((Player *) a)->score;
}

int main(int argc, char * argv[]) {
	
	printf("��򿪳����ļ���");
	char fileName1[50];
	scanf("%s", fileName1);
	
	FILE * f1 = fopen(fileName1, "w+");
	if (f1 == NULL) {
		printf("�����ļ���ʧ�ܣ�\n");
		exit(0);
	}
	
	Player p[10];
	printf("���������ѡ�ָ�����");
	int n;
	scanf("%d", &n);

	printf("****** ������������ ******\n");
	for (int i = 0; i < n; i++) {
		printf("������� %d ��ѡ��������", i + 1);
		scanf("%s", p[i].name);
		printf("������� %d ��ѡ�ֳɼ���", i + 1);
		scanf("%d", &p[i].score); 
		printf("\n");
		fprintf(f1, "%s %d\n", p[i].name, p[i].score);
	}

	printf("****** �����븴����� ******\n");
	for (int i = 0; i < n; i++) {
		rewind(f1);
		Player tmp;
		printf("������� %d ��ѡ��������", i + 1);
		scanf("%s", p[i].name);
		printf("������� %d ��ѡ�ֳɼ���", i + 1);
		scanf("%d", &p[i].score);
		printf("\n");
		while (!feof(f1)) {
			fscanf(f1, "%s %d", tmp.name, &tmp.score);
			if (!strcmp(tmp.name, p[i].name)) {
				p[i].score += tmp.score;
				break;
			}
		}
	}
	
	qsort(p, n, sizeof(Player), cmp);
	
	printf("��򿪳����ļ���");
	char fileName2[50];
	scanf("%s", fileName2);
	FILE * f2 = fopen(fileName2, "w+");
	if (f2 == NULL) {
		system("�����ļ���ʧ�ܣ�\n");
		exit(0);
	}

	for (int i = 0; i < n; i++) {
		fprintf(f2, "%s %d\n", p[i].name, p[i].score);
	}
	fclose(f2);
	fclose(f1); 
	system("PAUSE");
	return 0;
}
