/*
	����һЩ�����������ֵ����Сֵ��ƽ���� 
*/
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void) {
	printf("������5��������");
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
	
	printf("���ֵ��%d����Сֵ��%d��ƽ��ֵ��%.2lf\n", max, min, sum * 1.0 / N);
	system("PAUSE");
	return 0;
} 
