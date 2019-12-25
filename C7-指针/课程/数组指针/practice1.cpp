/*
	逆向输出数组中的值
*/
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void) {
	printf("请连续输入%d个整数：", N);
	int arr[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	int * p = &arr[N - 1];
	while (p >= arr) {
		printf("%d ", *p);
		p--;
	}
	printf("\n");
	system("PAUSE");
	return 0;
}
