/*
	用辗转相除法求最大公约数与最小公倍数 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, x, y, tmp;
	printf("请输入两个正整数：");
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

	printf("%d与%d的最大公约数为：%d，最小公倍数为：%d\n", x, y, b, (x * y) / b);
	
	system("PAUSE");
	return 0;
}
