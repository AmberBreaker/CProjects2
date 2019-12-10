/*
	输入一组整数，求方差 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5

int main(void) {
	int arr[N], sum = 0;
	double avg, varianceSum = 0;
	printf("请连续输入5个整数：");
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	avg = sum * 1.0 / N;

	for (int i = 0; i < N; i++) {
		varianceSum += pow(fabs(arr[i] - avg), 2);
	}

	printf("该组数据的方差为：%.2lf\n", sqrt(varianceSum / N));

	system("PAUSE");
	return 0;
}
