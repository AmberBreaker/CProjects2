/*
	Simple Calculator
*/
#include <stdio.h>
#include <stdlib.h>

int Isop(char);
int Priority(char);
int Compute(int, char, int);

int main(int argc, char * argv[]) {
	int a = 0, b, c;
	char op1 = '+', op2;
	printf("Please input the expression end with =\n");
	scanf("%d", &b);
	while (1) {
		op2 = getchar();
		if (op2 == '=') {
			break;
		} else {
			scanf("%d", &c);
		}
		if (!Isop(op2)) {
			printf("Error Expression!\n");
			return 0;
		} else {
			if (Priority(op1) >= Priority(op2)) {
				a = Compute(a, op1, b);
				op1 = op2;
				b = c;
			} else {
				b = Compute(b, op2, c);
			}
		}
	}
	a = Compute(a, op1, b);
	printf("Expression Result is %d\n", a);
	system("PAUSE");
	return 0;
}
