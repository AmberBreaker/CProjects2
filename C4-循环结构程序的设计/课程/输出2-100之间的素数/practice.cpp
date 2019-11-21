/*
	输出2-100之间的素数 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int c = 0;
	printf("2-100之间的素数为：\n");
	for (int i = 2; i <= 100; i++) {
		for (int j = 2; j <= i; j++) {
			if (i % j) {
				continue;
			}
			if (i == j) {
				printf("%3d", i);
				if (++c % 5 == 0) {
					printf("\n");
				}
			}
			break;
		}
	}
	
	system("PAUSE");
	return 0;
} 
