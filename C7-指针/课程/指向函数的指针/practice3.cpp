/*
	使用qsort()函数完成数组排序
	void qsort(
		void * base,  // 排序数组的起始位置 
		size_t num,  // 排序的元素个数 
		size_t size, // 每个元素占的字节数 
		int (*compar)(const void *, const void *) // 函数指针，用来确定元素的顺序 
	);
	排序数组：1, 3, 4, 2, 5, 7, 9, 0, 6, 8
	目标输出：0 1 2 3 4 5 6 7 8 9
*/
#include <stdio.h>
#include <stdlib.h>

#define N 10

int compare(const void *, const void *); 

int main(void) {
	
	int values[] = {1, 3, 4, 2, 5, 7, 9, 0, 6, 8};
	
	qsort(values, N, sizeof(int), compare);
	
	for (int i = 0; i < N; i++) {
		printf("%d ", values[i]);
	}
	printf("\n");
	
	system("PAUSE");
	return 0;
}

int compare(const void * i, const void * j) {
	return *(int *) i - *(int *) j;
}
