/*
	��շת����������Լ������С������ 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, x, y, tmp;
	printf("������������������");
	scanf("%d %d", &x, &y);

	if (x > y) {
		a = x;
		b = y;
	} else {
		a = y;
		b = x;
	}

	while (a % b) {
		tmp = a % b;
		a = b;
		b = tmp;
	}

	printf("%d��%d�����Լ��Ϊ��%d����С������Ϊ��%d\n", x, y, b, (x * y) / b);
	
	system("PAUSE");
	return 0;
}
