/*
	����һЩ�������ж�����������ӽ� 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5

int main(void) {
	int arr[N], delta = 0x7FFFFFFF, num1, num2;
	printf("����������5��������");
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

	printf("�����������Ϊ��%d��%d����%d\n", num1, num2, delta);

	system("PAUSE");
	return 0;
} 
