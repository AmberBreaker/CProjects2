/*
	��д���򣬰���С�����˳��Ѱ��ͬʱ��������������������λ����
	������
		1.	����Ϊ��ȫƽ������
		2.	������������λ������ͬ��
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	for (int i = 100, j = 10, k = 0; i < 1000; i++) {
		for (; j * j <= i; j++) {
			if (i == j * j) {
				int sd = i % 10;
				int td = i / 10 % 10;
				int hd = i / 100;
				if (sd - td && sd - hd && td - hd) {
					continue;
				}
				printf("%5d", i);
				k++;
				if (k % 3 == 0) {
					printf("\n");
				}
			}
		}
	}
	printf("\n");

	system("PAUSE");
	return 0;
}
