/*
	根据不同算法，体现算法设计的效率差别
	开启DOS
	gcc -c functions.cpp -o functions.o
	gcc -c main.cpp -o main.o
	gcc main.o functions.o -c main.exe
*/
#include <stdio.h>
#include <stdlib.h>

#define N 10

void Ftick(double (*fp)(double *, int, double), double a[]);
double Polyf1(double a[], int n, double x);
double Polyf2(double a[], int n, double x);
double Polyf3(double a[], int n, double x);
double Polyf4(double a[], int n, double x);

double a[N + 1];

int main(int argc, char * argv[]) {

	for (int i = 0; i <= N; i++) {
		a[i] = i;
	}

	Ftick(Polyf1, a); // 1.94e-007
	Ftick(Polyf2, a); // 1.07e-007
	Ftick(Polyf3, a); // 2.84e-008
	Ftick(Polyf4, a); // 2.94e-008

	system("PAUSE");
	return 0;
}

