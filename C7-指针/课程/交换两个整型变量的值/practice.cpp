/*
	利用指针交换两个整型变量的值
	通过函数调用 
*/
#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);

int main(void) {
	int i = 1, j = 2;
	printf("交换前: i = %d, j = %d\n", i, j);
	swap(&i, &j);
	printf("交换后: i = %d, j = %d\n", i, j); 
	
	system("PAUSE");
	return 0;
}

void swap(int * p, int * q) {
	int tmp = *p;
	*p = *q;
	*q = tmp;
} 
