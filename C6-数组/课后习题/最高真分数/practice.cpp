/*
	����5������������ȡ�������ֱ���Ϊ���Ӻͷ�ĸ�������������
	������м������������ 
*/
#include <stdio.h>
#include <stdlib.h>
#define N 5

int getMaxConventions(int a, int b);

int main(void) {
	int arr[N];
	printf("����������5����������");
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	printf("��������������\n"); 
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
