/*
	����һ�����ݣ�ͳ�Ʋ�����ƽ�����ĸ��� 
*/
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void) {
	int arr[N], sum = 0, count = 0;
	double avg;
	printf("������һ��������");
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

	printf("�������������ݵ�ƽ�����ĸ���Ϊ��%d\n", count);

	system("PAUSE");
	return 0;
} 
