/*
	��ÿ��4�����ݵ���ʽ������� 
*/
#include <stdio.h>
#include <stdlib.h>
#define N 20

int main(void) {
	int a[N];
	printf("����������20���ַ���\n");
	for (int i = 0; i < N; i++) {
		scanf("%d", a + i);
	}
	for (int i = 0; i < N; i++) {
		if (i % 4 == 0 && i != 0) printf("\n");
		printf("%3d", a[i]);
	}
	printf("\n");
	system("PAUSE");
	return 0;
}
