/*
	连续输入5个整数，求第二大的值 
*/
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void) {
	int arr[N], fst = 0x80000000, snd = 0x80000000;

	printf("请连续输入5个整数：");
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

	printf("第二大的数为：%d\n", snd);

	system("PAUSE");
	return 0;
}
