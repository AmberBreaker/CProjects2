#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isValid(int, int, int);

int main(void) {
	double a, b, c;
	printf("��ֱ����������ε������ߣ����ÿո�ָ���");
	scanf("%lf %lf %lf", &a, &b, &c);
	double s = (a + b + c) / 2;
	if (!isValid(a, b, c)) {
		printf("����������֮������ڵ�����\n");
		system("PAUSE");
		return 0;
	}
	s = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("�������ε����Ϊ��%.2lf\n", s);
	system("PAUSE");
	return 0;
}

int isValid(int a, int b, int c) {
	double s = (a + b + c) / 2;
	if ((s - a) * (s - b) * (s - c) < 0) {
		return 0;
	}
	return 1;
}
