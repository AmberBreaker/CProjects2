#include <stdio.h>
#include <stdlib.h>

int Isop(char);
int Priority(char);
int Compute(int, char, int);

int main(int argc, char * argv[]) {
	int a, b, c;
	char op1, op2;
	printf("输入表达式，以 = 结束：");
	a = 0;
	op1 = '+';
	scanf("%d", &b);
	while (1) {
		op2 = getchar();
		if (op2 == '=') {
			break;
		} else {
			scanf("%d", &c);
		}
		if (!Isop(op2)) {
			printf("Error\n");
			return 0;
		}
		if (Priority(op1) >= Priority(op2)) {
			a = Compute(a, op1, b);
			op1 = op2;
			b = c;
		} else {
			b = Compute(b, op2, c);
		}
	}

	a = Compute(a, op1, b);
	printf("表达式的值为：%d\n", a);

	system("PAUSE");
	return 0;
}
