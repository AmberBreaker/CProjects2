/*
	分别利用递归和非递归的方法将输入的正整数进行质因数分解，
	如输入8，则输出 8 = 2 * 2 * 2 
*/
#include <stdio.h>
#include <stdlib.h>

void withoutRecursive(int);
void withRecursive(int);

int main(void) {
	int n;
	printf("请输入一个正整数：");
	scanf("%d", &n);
	
//	withoutRecursive(n);
	withRecursive(n);
	
	system("PAUSE");
	return 0;
}

/*非递归方法*/
void withoutRecursive(int n) {
	int i;
	for (i = 1; i < n; i++) {
		if (i * i * i == n) {
			break;
		}
	}
	if (n == i) {
		printf("该正整数不存在质因数！\n");
	} else {
		printf("%d = %d * %d * %d\n", n, i, i, i);
	} 
}

void withRecursive(int n) {
	int i;
	for (i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			printf("%d * ", i);
			withRecursive(n / i);
			return;
		}
		printf("%d", n);
	}
} 
