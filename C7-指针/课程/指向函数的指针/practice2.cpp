/*
	对用户输入的两个数字，进行加减乘除运算
	Add		sum
	Sub		Difference
	Mul		Product
	Div		Quotient
*/
#include <stdio.h>
#include <stdlib.h>

double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);

double (*funp[4])(double, double) = {Add, Sub, Mul, Div};
char * arr[4] = {"Sum", "Difference", "Product", "Quotient"};

int main(void) {
	
	printf("请输入两个数：");
	double x, y;
	scanf("%lf", &x);
	scanf("%lf", &y);
	
	for (int i = 0; i < 4; i++) {
		if (i == 3 && x == 0) {
			continue;
		}
		printf("%10s : %.2lf\n", arr[i], funp[i](x, y));
	}
	
	system("PAUSE");
	return 0;
}

double Add(double x, double y) {
	return x + y;
}

double Sub(double x, double y) {
	return x - y;
}

double Mul(double x, double y) {
	return x * y;
}

double Div(double x, double y) {
	return x / y;
}
