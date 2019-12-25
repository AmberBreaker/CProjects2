/*
	ʹ��qsort()���������������
	void qsort(
		void * base,  // �����������ʼλ�� 
		size_t num,  // �����Ԫ�ظ��� 
		size_t size, // ÿ��Ԫ��ռ���ֽ��� 
		int (*compar)(const void *, const void *) // ����ָ�룬����ȷ��Ԫ�ص�˳�� 
	);
	�������飺1, 3, 4, 2, 5, 7, 9, 0, 6, 8
	Ŀ�������0 1 2 3 4 5 6 7 8 9
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
