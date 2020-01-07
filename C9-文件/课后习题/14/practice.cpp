/*
	一条学生的记录包括学号、姓名和成绩信息要求：
	（1）格式化输入多个学生记录
	（2）利用fwrite将学生信息按二进制方式写道文件中
	（3）利用fread从文件中读出成绩并求平均值 
	（4）对文件中按成绩排序，将成绩单写入文本文件中
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
	printf("请输入需要打开的文件：");
	scanf("%s", fileName);
	FILE * f = fopen(fileName, "w+");
	if (f == NULL) {
		printf("文件打开或创建失败！\n");
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
	printf("请输入学生数量：");
	int cnt;
	scanf("%d", &cnt);
	Stu record;
	printf("********** 请输入学生信息 **********\n");
	for (int i = 1; i <= cnt; i++) {
		printf("第 %d 个学生学号：", i);
		scanf("%s", record.id);
		printf("第 %d 个学生姓名：", i);
		scanf("%s", record.name);
		printf("第 %d 个学生成绩：", i);
		scanf("%d", &record.score);
		fwrite(&record, sizeof(record), 1, f);
		printf("\n");
	}
	rewind(f);
}

void readInfo(FILE * f) {
	printf("********** 所有学生信息如下 **********\n");
	Stu record;
	int i = 0;
	float avgscore = 0;
	while (fread(&record, sizeof(record), 1, f)) {
		printf("第 %d 个学生学号：%s\n", ++i, record.id);
		printf("第 %d 个学生姓名：%s\n", i, record.name);
		printf("第 %d 个学生成绩：%d\n\n", i, record.score);
		avgscore += record.score;
	}
	avgscore /= i;
	printf("平均成绩为：%.1f\n\n", avgscore);
}

void orderInfo(FILE * f) {
	// TODO
}
