/*
	
*/ 
#include <stdio.h>
#include <stdlib.h>

typedef union {
	long i;
	int k[5];
	char c;
} Date;

struct data {
	int cat;
	Date cow;
	double dog;
} too;


int main(int argc, char * argv[]) {
	
	Date max;
	int x[5];
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(x));
	printf("%d\n", sizeof(max));
	printf("%d\n", sizeof(struct data));
	
	system("PAUSE");
	return 0;
}
