/*
	Isop
	Compute
	Priority
*/
#include <stdio.h>

int Isop(char op) {
	if (op == '+' || op == '-' || op == '*' || op == '/') {
		return 1;
	}
	return 0;
}

int Priority(char op) {
	int res;
	switch (op) {
		case '+' :
		case '-' : res = 1; break;
		case '*' :
		case '/' : res = 2; break;
	}
	return res;
}

int Compute(int a, char op, int b) {
	int res;
	switch (op) {
		case '+' : res = a + b; break;
		case '-' : res = a - b; break;
		case '*' : res = a * b; break;
		case '/' : 
			if (b == 0) {
				printf("Devided by 0!\n");
				exit(1);
			}
			res = a / b;
	}
	return res;
}
