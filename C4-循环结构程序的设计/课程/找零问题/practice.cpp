/*
	����1�ǡ�2�ǡ�5������öӲ�ң��ճ������5Ԫ���µ�������Ҫ��
	ÿ��Ӳ������һö���������е���Ϸ��� 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int coin;
	printf("�����������");
	scanf("%d", &coin);
	coin *= 10;
	for (int i = 1; i <= coin / 5; i++) {
		for (int j = 1; j <= (coin - i * 5) / 2; j++) {
			for (int k = 1; k <= (coin - i * 5 - j * 2); k++) {
				if (coin == i * 5 + j * 2 + k) {
					printf("���㷽ʽ��5��%dö��2��%dö��1��%dö\n", i, j, k);
					break;
				}
			}
		}
	}
	
	system("PAUSE");
	return 0;
} 
