/*
	�ֱ����õݹ�ͷǵݹ�ķ���������������������������ֽ⣬
	������8������� 8 = 2 * 2 * 2 
*/
#include <stdio.h>
#include <stdlib.h>

void withoutRecursive(int);
void withRecursive(int);

int main(void) {
	int n;
	printf("������һ����������");
	scanf("%d", &n);
	
//	withoutRecursive(n);
	withRecursive(n);
	
	system("PAUSE");
	return 0;
}

/*�ǵݹ鷽��*/
void withoutRecursive(int n) {
	int i;
	for (i = 1; i < n; i++) {
		if (i * i * i == n) {
			break;
		}
	}
	if (n == i) {
		printf("����������������������\n");
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
