/*
	已知投资的复合年利率为R（0到20之间的整数）。约翰现有总值
	为M的钱（100-1000000） ，需要投资Y年（0-400）。计算约翰
	最终会有多少钱，并输出其整数部分。 
*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int R, M, Y;
	printf("请输入复合年利率：");
	scanf("%d", &R);
	printf("请输入约翰现有总金额：");
	scanf("%d", &M);
	printf("请输入约翰投资年数：");
	scanf("%d", &Y);
	double res = M * 1.0;
	for (int i = 0; i < Y; i++) {
		res = res * (1.0 * R / 100 + 1);
	}
	printf("%d年后约翰共有财产：%.0lf\n", Y, res);
	system("PAUSE");
	return 0;
}
