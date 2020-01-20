#include <stdio.h>
#include <math.h>
#include <time.h>

#define N 10
#define X 2
#define K 1e7

// CLK_TCK

clock_t start, end;
double dur;

void Ftick(double (*fp)(double *, int, double), double a[]) {
	double sum;
	start = clock();
	for (int i = 0; i < K; i++) {
		sum = fp(a, N, X);
	}
	end = clock();
	dur = (double) (end - start) / CLK_TCK / K;
	printf("f(x) = %f, time = %6.2e\n", sum, dur);
}

double Polyf1(double a[], int n, double x) {
	double p, term;
	p = a[0];
	for (int i = 0; i <= n; i++) {
		term = pow(x, i);
		p += a[i] * term;
	}
	return p;
}

double Polyf2(double a[], int n, double x) {
	double p = a[0];
	double term;
	for (int i = 1; i <= n; i++) {
		term = 1;
		for (int j = 1; j <= i; j++) {
			term *= x;
		}
		p += a[i] * term;
	}
	return p;
}

double Polyf3(double a[], int n, double x) {
	double p = a[0];
	double term = 1;
	for (int i = 1; i <= n; i++) {
		term *= x;
		p += a[i] * term;
	}
	return p;
}

double Polyf4(double a[], int n, double x) {
	double p = a[n];
	for (int i = n - 1; i >= 0; i--) {
		p = p * x + a[i];
	}
	return p;
}
