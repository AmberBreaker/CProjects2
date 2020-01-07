/*
	青年歌手大赛计分程序，要求：
	（1）使用结构记录选手的相关信息。
	（2）使用链表或结构数组。
	（3）对选手成绩进行排序并输出结果。
	（4）利用文件记录初赛结果，在复赛时将其从文件中读出，
		 累加到复赛成绩中，并将比赛的最终结果写入文件中。
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
	printf("请输入歌手初赛文件：");
	scanf("%s", fileName1); 
	FILE * f1 = fopen(fileName1, "r+");
	if (f1 == NULL) {
		printf("初赛文件打开失败！\n");
		exit(0); 
	}

	int n;
	printf("输入参赛人数：");
	scanf("%d", &n);

	printf("****** 输入初赛选手信息 ******\n");
	for (int i = 0; i < n; i++) {
		printf("请输入第%d个选手的姓名：", i + 1);
		scanf("%s", player[i].name);
		printf("请输入第%d个选手的成绩：", i + 1);
		scanf("%d", &player[i].score);
		printf("\n");
	}

	qsort(player, n, sizeof(player[0]), cmp);
	for (int i = 0; i < n; i++) {
		fprintf(f1, "%s %d\n", player[i].name, player[i].score);
	}

	printf("****** 输入初复赛选手信息 ******\n");
	for (int i = 0; i < n; i++) {
		printf("请输入第%d个选手的姓名：", i + 1);
		scanf("%s", player[i].name);
		printf("请输入第%d个选手的成绩：", i + 1);
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
	printf("请输入歌手复赛文件：");
	scanf("%s", fileName2);
	FILE * f2 = fopen(fileName2, "r+");
	if (f2 == NULL) {
		printf("文件打开失败！\n");
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
