/*
	���ԣ�memset����
	memset������������������Ԫ����0
	void * memset(void * s, int c, size_t n);
	@param s �������������׵�ַ�� 
	@param c ����ֵ 
	@param n ���÷�Χ 
*/
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main(void) {
	int arr1[] = {1, 2, 3, 4};
	printf("����ǰ���飺");
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr1[i]);
	}
	memset(arr1, 0, sizeof(arr1));
	printf("\n��������飺");
	for (int j = 0; j < 4; j++) {
		printf("%d ", arr1[j]);
	}

	printf("\n");
	system("PAUSE");
	return 0;
}
