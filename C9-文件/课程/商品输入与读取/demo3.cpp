/*
	输出所有商品信息：
	将商品信息文件中所有商品信息输出后，再根据输入的
	商品记录号 m，输出第 m 个商品信息。
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
	printf("请输入文件名称：");
	scanf("%s", fileName);
	
	FILE * f = fopen(fileName, "r");
	if (f == NULL) {
		printf("文件打开失败！\n");
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
		printf("第 %d 件商品序号：%s\n", i, record.id);
		printf("第 %d 件商品名称：%s\n\n", i++, record.name);
	}
}

void chsdFile(FILE * f) {
	Pro record;
	int m;
	printf("请选择商品，查看其详细信息：");
	scanf("%d", &m);
	fseek(f, (m - 1) * sizeof(record), 0);
	fread(&record, sizeof(record), 1, f);
	printf("第 %d 件商品序号：%s\n", m, record.id);
	printf("第 %d 件商品名称：%s\n", m, record.name);
	printf("第 %d 件商品单价：%.2f\n", m, record.price);
	printf("第 %d 件商品数量：%d\n", m, record.count);
}
