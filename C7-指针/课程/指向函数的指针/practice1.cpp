/*
	����ָ���ʾ��
	�ú���ָ��ʵ�������ӷ����� 
*/
#include <stdio.h>
#include <stdlib.h>

int add(int, int);

int main(void) {
	int i = 2, j = 3;
	int (*funp)(int, int) = add;
	printf("%d + %d = %d\n", i, j, funp(i, j));
	system("PAUSE");
	return 0; 
}

int add(int i, int j) {
	return i + j;
}
