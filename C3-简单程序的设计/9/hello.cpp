/*
	���ʵ���������������⣺����4����������������С�����˳������� 
*/ 
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, c, d, tmp;
	printf("����4�����������ÿո�ֿ���");
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
	printf("�����Ľ��Ϊ%d %d %d %d\n", a, b, c, d);
	system("PAUSE");
}
