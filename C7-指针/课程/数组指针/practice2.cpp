/*
	�������в���Ԫ��
	���ҵĹ������𷽷� 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int * getRandArr(void);
int search(int *, int);

int main(void) {
	int * p = getRandArr();

	int num;
	printf("��������Ҫ���ҵ����֣�");
	scanf("%d", &num);

	int k = search(p, num);

	free(p);

	if (k == -1) {
		printf("��������\n");
	} else {
		printf("���������������״γ��ֵ�λ��Ϊ��%d\n", k);
	}

	system("PAUSE");
	return 0;
}

int * getRandArr(void) {
	printf("�������һ�����飺\n");
	int * arr = (int *) malloc(N * sizeof(int)); 
	srand(time(0));
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 10;
		printf("%d ", arr[i]);
	}
	printf("\n");
	return arr;
}

int search(int * p, int num) {
	int index = -1;
	for (int i = 0; i < N; i++) {
		if (*(p + i) == num) {
			index = i + 1;
			break;
		}
	}
	return index;
}
