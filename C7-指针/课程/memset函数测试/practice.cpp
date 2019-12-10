/*
	测试：memset方法
	memset函数常被用来对数组元素清0
	void * memset(void * s, int c, size_t n);
	@param s 数组名（数组首地址） 
	@param c 设置值 
	@param n 设置范围 
*/
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main(void) {
	int arr1[] = {1, 2, 3, 4};
	printf("清零前数组：");
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr1[i]);
	}
	memset(arr1, 0, sizeof(arr1));
	printf("\n清零后数组：");
	for (int j = 0; j < 4; j++) {
		printf("%d ", arr1[j]);
	}

	printf("\n");
	system("PAUSE");
	return 0;
}
