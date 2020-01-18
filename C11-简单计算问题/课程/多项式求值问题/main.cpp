/*
	根据不同算法，体现算法设计的效率差别 
*/
#include <stdio.h>
#include <stdlib.h>

#define N 10

void Ftick(double (*fp)(double *, int, double), double a[]);
double Polyf1(double a[], int n, double x);
double Polyf2(double a[], int n, double x);
double Polyf2(double a[], int n, double x);
double Polyf2(double a[], int n, double x);

double a[N + 1];

int main(int argc, char * argv[]) {
	
	for (int i = 0; i <= N; i++) {
		a[i] = i;
	}

	Ftick(Polyf1, a);

	system("PAUSE");
	return 0;
}

