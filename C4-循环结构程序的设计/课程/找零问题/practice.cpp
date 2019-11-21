/*
	现有1角、2角、5角若干枚硬币，凑出输入的5元以下的整数金额，要求
	每种硬币至少一枚，给出所有的组合方法 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int coin;
	printf("输入需找零金额：");
	scanf("%d", &coin);
	coin *= 10;
	for (int i = 1; i <= coin / 5; i++) {
		for (int j = 1; j <= (coin - i * 5) / 2; j++) {
			for (int k = 1; k <= (coin - i * 5 - j * 2); k++) {
				if (coin == i * 5 + j * 2 + k) {
					printf("找零方式：5角%d枚，2角%d枚，1角%d枚\n", i, j, k);
					break;
				}
			}
		}
	}
	
	system("PAUSE");
	return 0;
} 
