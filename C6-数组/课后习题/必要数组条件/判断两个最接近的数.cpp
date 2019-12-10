/*
	输入一些整数，判断哪两个数最接近 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5

int main(void) {
	int arr[N], delta = 0x7FFFFFFF, num1, num2;
	printf("请连续输入5个整数：");
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			int x = fabs(arr[i] - arr[j]);
			if (delta > fabs(arr[i] - arr[j])) {
				num1 = arr[i];
				num2 = arr[j];
				delta = fabs(arr[i] - arr[j]);
			}
		}
	}

	printf("最近的两个数为：%d与%d，相差：%d\n", num1, num2, delta);

	system("PAUSE");
	return 0;
} 
