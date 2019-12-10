/*
	输入一些整数，求最大值、最小值、平均数 
*/
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void) {
	printf("请输入5个整数：");
	int arr[N], max, min, sum = 0;
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	sum = max = min = arr[0]; 
	for (int i = 1; i < N; i++) {
		if (arr[i] > max) {
			max = arr[i];
		} else if (arr[i] < min) {
			min = arr[i];
		}
		sum += arr[i];
	}
	
	printf("最大值：%d，最小值：%d，平均值：%.2lf\n", max, min, sum * 1.0 / N);
	system("PAUSE");
	return 0;
} 
