/*
	��������5����������ڶ����ֵ 
*/
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void) {
	int arr[N], fst = 0x80000000, snd = 0x80000000;

	printf("����������5��������");
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++) {
		if (arr[i] > fst) {
			snd = fst;
			fst = arr[i];
		} else if (arr[i] > snd) {
			snd = arr[i];
		}
	}

	printf("�ڶ������Ϊ��%d\n", snd);

	system("PAUSE");
	return 0;
}
