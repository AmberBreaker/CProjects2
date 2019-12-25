/*
	数组指针访问二维数组
	求出二维数组中所有数的值的总和 
*/
#include <stdio.h>
#include <stdlib.h>

int sum(int (*p)[3]);

int main(void) {
	int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	printf("总和为：%d\n", sum(arr));
	system("PAUSE");
	return 0;
}

int sum(int (*p)[3]) {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum += *(*p + j);
		}
		p++;
	}
	return sum;
}
