/*
	用fscanf与fprintf函数实现将商品信息输入到文件、
	将文件内容及这些商品的总价输出到显示器上。 
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
	printf("请输入文件名称：");
	scanf("%s", fileName);
	
	FILE * f = fopen(fileName, "w+");
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
	printf("请输入产品种数：");
	int cnt;
	scanf("%d", &cnt);
	Pro record;
	printf("****** 输入产品信息 ******\n");
	for (int i = 1; i <= cnt; i++) {
		printf("第 %d 件产品的序号为：", i);
		scanf("%s", record.id); 
		printf("第 %d 件产品的名称为：", i);
		scanf("%s", record.name);
		printf("第 %d 件产品的单价为：", i);
		scanf("%f", &record.price);
		printf("第 %d 件产品的数量为：", i);
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
	printf("****** 产品信息如下 ******\n");
	while (fscanf(f, "%s %s %f %d\n", record.id, record.name, &record.price, &record.count) != EOF) {
		printf("第 %d 件产品的序号为：%s\n", i, record.id);
		printf("第 %d 件产品的名称为：%s\n", i, record.name);
		printf("第 %d 件产品的单价为：%.2f\n", i, record.price);
		printf("第 %d 件产品的数量为：%d\n\n", i, record.count);
		sum += record.price * record.count;
	}
	printf("-----------------------\n");
	printf("总价为：%.2f\n", sum);
}
