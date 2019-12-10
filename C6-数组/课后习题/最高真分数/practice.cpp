/*
	给出5个正整数，任取两个数分别作为分子和分母组成最简真分数，
	编程求共有几个这样的组合 
*/
#include <stdio.h>
#include <stdlib.h>
#define N 5

int getMaxConventions(int a, int b);

int main(void) {
	int arr[N];
	printf("请连续输入5个正整数：");
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	printf("最简真分数包含：\n"); 
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			int x;
			if (arr[i] < arr[j]) {
				x = getMaxConventions(arr[j], arr[i]);
				if (x == 1) {
					printf("%d/%d\n", arr[i], arr[j]);
				}
			} else if (arr[i] > arr[j]) {
				x = getMaxConventions(arr[i], arr[j]);
				if (x == 1) {
					printf("%d/%d\n", arr[j], arr[i]);
				}
			}
			
		}
	}
	
	system("PAUSE");
	return 0;
} 


int getMaxConventions(int a, int b) {
	while (1) {
		if (a % b == 0) {
			return b;
		}
		int tmp = b;
		b = a % b;
		a = tmp;
	}
}
