/*
	C99标准下变量可作为数组定义时的大小 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	printf("请输入数组长度：");
	scanf("%d", &i);
	int arr[i];
	for (int j = 0; j < i; j++) {
		arr[j] = j;
	}
	for (int j = 0; j < i; j++) {
		printf("%d ", arr[j]);
	}
	printf("\n");
	system("PAUSE");
	return 0;
} 
