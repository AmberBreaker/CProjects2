/*
	某程序员每年能存款N(10 <= N <= 50)万元，他希望在中关村公馆买一套60平米的房子，
	现在价格是200万元，假设房子以每年百分之K(1 <= K <= 20)增长，并且该程序员
	未来年薪不变。 请问第几年能够买下这套房子。 (若超过20年，输出：Imposible)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int N, K, Y = 0;
	double sum = 200;
	printf("请输入该程序员每年可存存款(万元)：");
	scanf("%d", &N); 
	printf("请输入房价涨率(%%)：");
	scanf("%d", &K); 
	
	while (++Y <= 20) {
		sum = sum + 0.01 * K * sum;
		if (Y * N - sum > 0) {
			printf("第%d年可以买下该套房子，购房后余额：\n", Y, Y * N - sum);
			system("PAUSE");
			return 0;
		}
	}
	printf("Imposible!\n");
	system("PAUSE");
	return 0;
}
