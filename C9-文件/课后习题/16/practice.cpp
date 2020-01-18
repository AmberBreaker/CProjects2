/*
	青年歌手大赛计分程序，要求：
	（1）使用结构记录选手的相关信息。
	（2）使用链表或结构数组。
	（3）对选手成绩进行排序并输出结果。
	（4）利用文件记录初赛结果，在复赛时将其从文件中读出，
		 累加到复赛成绩中，并将比赛的最终结果写入文件中。
	F:\\Workspace\\files\\example7.txt 初赛文件 
	F:\\Workspace\\files\\example8.txt 复赛文件 
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
	
	printf("请打开初赛文件：");
	char fileName1[50];
	scanf("%s", fileName1);
	
	FILE * f1 = fopen(fileName1, "w+");
	if (f1 == NULL) {
		printf("初赛文件打开失败！\n");
		exit(0);
	}
	
	Player p[10];
	printf("请输入参赛选手个数：");
	int n;
	scanf("%d", &n);

	printf("****** 请输入初赛结果 ******\n");
	for (int i = 0; i < n; i++) {
		printf("请输入第 %d 个选手姓名：", i + 1);
		scanf("%s", p[i].name);
		printf("请输入第 %d 个选手成绩：", i + 1);
		scanf("%d", &p[i].score); 
		printf("\n");
		fprintf(f1, "%s %d\n", p[i].name, p[i].score);
	}

	printf("****** 请输入复赛结果 ******\n");
	for (int i = 0; i < n; i++) {
		rewind(f1);
		Player tmp;
		printf("请输入第 %d 个选手姓名：", i + 1);
		scanf("%s", p[i].name);
		printf("请输入第 %d 个选手成绩：", i + 1);
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
	
	printf("请打开初赛文件：");
	char fileName2[50];
	scanf("%s", fileName2);
	FILE * f2 = fopen(fileName2, "w+");
	if (f2 == NULL) {
		system("复赛文件打开失败！\n");
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
