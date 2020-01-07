/*
	������ִ����Ʒֳ���Ҫ��
	��1��ʹ�ýṹ��¼ѡ�ֵ������Ϣ��
	��2��ʹ�������ṹ���顣
	��3����ѡ�ֳɼ�����������������
	��4�������ļ���¼����������ڸ���ʱ������ļ��ж�����
		 �ۼӵ������ɼ��У��������������ս��д���ļ��С�
	F:\\Workspace\\files\\example7.txt
	F:\\Workspace\\files\\example8.txt
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Singer {
	char name[10];
	int score;
} singer;

int cmp(const void * a, const void * b) {
	return ((singer *) b)->score - ((singer *) a)->score;
}

int main(int argc, char * argv[]) {

	struct Singer player[10];

	char fileName1[50];
	printf("��������ֳ����ļ���");
	scanf("%s", fileName1); 
	FILE * f1 = fopen(fileName1, "r+");
	if (f1 == NULL) {
		printf("�����ļ���ʧ�ܣ�\n");
		exit(0); 
	}

	int n;
	printf("�������������");
	scanf("%d", &n);

	printf("****** �������ѡ����Ϣ ******\n");
	for (int i = 0; i < n; i++) {
		printf("�������%d��ѡ�ֵ�������", i + 1);
		scanf("%s", player[i].name);
		printf("�������%d��ѡ�ֵĳɼ���", i + 1);
		scanf("%d", &player[i].score);
		printf("\n");
	}

	qsort(player, n, sizeof(player[0]), cmp);
	for (int i = 0; i < n; i++) {
		fprintf(f1, "%s %d\n", player[i].name, player[i].score);
	}

	printf("****** ���������ѡ����Ϣ ******\n");
	for (int i = 0; i < n; i++) {
		printf("�������%d��ѡ�ֵ�������", i + 1);
		scanf("%s", player[i].name);
		printf("�������%d��ѡ�ֵĳɼ���", i + 1);
		scanf("%d", &player[i].score);
		printf("\n");
	}

	fseek(f1, 0L, 0);
	char last[20];
	while (!feof(f1)) {
		char oname[20];
		int oscore;
		fscanf(f1, "%s %d", oname, &oscore);
		if (strcmp(last, oname) == 0) {
			continue;
		}
		for (int i = 0; i < n; i++) {
			if (!strcmp(player[i].name, oname)) {
				player[i].score += oscore;
				break;
			}
		}
		strcpy(last, oname);
	}
	
	fclose(f1);
	
	char fileName2[50];
	printf("��������ָ����ļ���");
	scanf("%s", fileName2);
	FILE * f2 = fopen(fileName2, "r+");
	if (f2 == NULL) {
		printf("�ļ���ʧ�ܣ�\n");
		exit(0);
	}
	fseek(f2, 0L, 0);
	qsort(player, n, sizeof(player[0]), cmp);
	for (int i = 0; i < n; i++) {
		fprintf(f2, "%s %d\n", player[i].name, player[i].score);
	}
	fclose(f2);
	
	system("PAUSE");
	return 0;
}
