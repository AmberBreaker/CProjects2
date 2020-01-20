#include <stdio.h>

int Isop(char ch) {
	if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
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

int Compute(int x, char ch, int y) {
	int res;
	switch (ch) {
		case '+' : res = x + y; break;
		case '-' : res = x - y; break;
		case '*' : res = x * y; break;
		case '/' :
			if (y == 0) {
				printf("Divided by 0!\n");
				exit(0);
			}
			res = x / y;
			break;
			
	}
	return res;
}
