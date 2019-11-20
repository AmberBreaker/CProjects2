/*
	编程实现少量数排序问题：输入4个任意整数，按从小到大的顺序输出。 
*/ 
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, c, d, tmp;
	printf("输入4个整数，并用空格分开：");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a > b) {
		tmp = a;
		a = b;
		b = tmp; 
	}
	if (a > c) {
		tmp = a;
		a = c;
		c = tmp;
	}
	if (a > d) {
		tmp = a;
		a = d;
		d = tmp;
	}
	if (b > c) {
		tmp = b;
		b = c;
		c = tmp;
	}
	if (b > d) {
		tmp = b;
		b = d;
		d = tmp;
	}
	if (c > d) {
		tmp = c;
		c = d;
		d = tmp;
	}
	printf("排序后的结果为%d %d %d %d\n", a, b, c, d);
	system("PAUSE");
}
