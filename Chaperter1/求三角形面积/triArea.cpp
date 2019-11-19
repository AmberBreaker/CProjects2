#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isValid(int, int, int);

int main(void) {
	double a, b, c;
	printf("请分别输入三角形的三条边，并用空格分隔：");
	scanf("%lf %lf %lf", &a, &b, &c);
	double s = (a + b + c) / 2;
	if (!isValid(a, b, c)) {
		printf("三角形两边之和需大于第三边\n");
		system("PAUSE");
		return 0;
	}
	s = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("该三角形的面积为：%.2lf\n", s);
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
