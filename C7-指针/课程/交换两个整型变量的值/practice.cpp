/*
	����ָ�뽻���������ͱ�����ֵ
	ͨ���������� 
*/
#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);

int main(void) {
	int i = 1, j = 2;
	printf("����ǰ: i = %d, j = %d\n", i, j);
	swap(&i, &j);
	printf("������: i = %d, j = %d\n", i, j); 
	
	system("PAUSE");
	return 0;
}

void swap(int * p, int * q) {
	int tmp = *p;
	*p = *q;
	*q = tmp;
} 
