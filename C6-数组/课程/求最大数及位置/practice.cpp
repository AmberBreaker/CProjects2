/*
	用数组实现：
	输入 n (n < 10) 及 n 个正整数，输出最大整数及其位序 
*/
#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(void) {
	printf("请输入不超过10个整数：");
	int arr[N], i, max = -1, maxk;
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < 0) {
			break;
		}
	}
	for (int j = 0; j < i; j++) {
		if (arr[j] > max) {
			max = arr[j];
			maxk = j + 1;
		}
	}
	printf("最大值为：%d，其下标为：%d\n", max, maxk);
	system("PAUSE");
	return 0;
} 
