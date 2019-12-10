/*
	处理逻辑 
*/
#include <stdio.h>
#define N 10

int arrInput(int arr[]) {
	printf("请输入不超过10个正整数：\n");
	int i;
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] <= 0) {
			break;
		}
	}
	return i;
}

void arrSort(int arr[], int i) {
	for (int j = 0; j < i; j++) {
		int max = -1, maxk;
		for (int k = 0; k < i - j; k++) {
			if (arr[k] > max) {
				max = arr[k];
				maxk = k;
			}
		}
		int temp = arr[i - j - 1];
		arr[i - j - 1] = arr[maxk];
		arr[maxk] = temp;
	}
}

void arrOutput(int arr[], int i) {
	for (int j = 0; j < i; j++) {
		if (j % 3 == 0 && j != 0) {
			printf("\n");
		}
		printf("%3d", arr[j]);
	}
	printf("\n");
}
