/*
	使用fread, fwrite完成 
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
	printf("请输入文件名称：");
	scanf("%s", fileName);
	FILE * f = fopen(fileName, "wb+");
	if (f == NULL) {
		printf("文件打开或创建失败！\n");
		exit(0);
	}
	
	inputFile(f);
	outputFile(f);
	
	fclose(f);
	system("PAUSE");
	return 0;
}

void inputFile(FILE * f) {
	printf("请输入商品种数：");
	int cnt;
	scanf("%d", &cnt);
	Pro record;
	printf("********** 请输入商品数据 **********\n");
	for (int i = 1; i <= cnt; i++) {
		printf("请输入第 %d 件商品序号：", i);
		scanf("%s", record.id);
		printf("请输入第 %d 件商品名称：", i);
		scanf("%s", record.name);
		printf("请输入第 %d 件商品单价：", i);
		scanf("%f", &record.price);
		printf("请输入第 %d 件商品数量：", i);
		scanf("%d", &record.count);
		fwrite(&record, sizeof(record), 1, f);
		printf("\n");
	}
	rewind(f);
}

void outputFile(FILE * f) {
	printf("********** 输出商品数据 **********\n");
	Pro record;
	int i = 1;
	while (fread(&record, sizeof(record), 1, f)) {
		printf("第 %d 件商品序号：%s\n", i, record.id);
		printf("第 %d 件商品名称：%s\n", i, record.name);
		printf("第 %d 件商品单价：%.2f\n", i, record.price);
		printf("第 %d 件商品数量：%d\n\n", i++, record.count);
	} 
}
