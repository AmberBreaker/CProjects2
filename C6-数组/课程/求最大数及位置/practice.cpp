/*
	������ʵ�֣�
	���� n (n < 10) �� n ������������������������λ�� 
*/
#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(void) {
	printf("�����벻����10��������");
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
	printf("���ֵΪ��%d�����±�Ϊ��%d\n", max, maxk);
	system("PAUSE");
	return 0;
} 
