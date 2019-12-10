/*
	输入一组数据，统计不超过平均数的个数 
*/
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void) {
	int arr[N], sum = 0, count = 0;
	double avg;
	printf("请输入一组整数：");
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	avg = sum * 1.0 / N;
	for (int i = 0; i < N; i++) {
		if (arr[i] <= avg) {
			count++;
		}
	}

	printf("不超过改组数据的平均数的个数为：%d\n", count);

	system("PAUSE");
	return 0;
} 
