/*
	在数组中查找元素
	查找的功能另起方法 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int * getRandArr(void);
int search(int *, int);

int main(void) {
	int * p = getRandArr();

	int num;
	printf("请输入需要查找的数字：");
	scanf("%d", &num);

	int k = search(p, num);

	free(p);

	if (k == -1) {
		printf("查无数据\n");
	} else {
		printf("该数字在数组中首次出现的位置为：%d\n", k);
	}

	system("PAUSE");
	return 0;
}

int * getRandArr(void) {
	printf("随机生成一个数组：\n");
	int * arr = (int *) malloc(N * sizeof(int)); 
	srand(time(0));
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 10;
		printf("%d ", arr[i]);
	}
	printf("\n");
	return arr;
}

int search(int * p, int num) {
	int index = -1;
	for (int i = 0; i < N; i++) {
		if (*(p + i) == num) {
			index = i + 1;
			break;
		}
	}
	return index;
}
