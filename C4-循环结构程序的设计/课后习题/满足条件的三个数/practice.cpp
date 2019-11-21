/*
	编写程序，按从小到大的顺序寻找同时符合以下条件的所有三位数。
	条件：
		1.	该数为完全平方数。
		2.	该数至少有两位数字相同。
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
