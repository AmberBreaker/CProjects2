/*
	C99��׼�±�������Ϊ���鶨��ʱ�Ĵ�С 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	printf("���������鳤�ȣ�");
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
