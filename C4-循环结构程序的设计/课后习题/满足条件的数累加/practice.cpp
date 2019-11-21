/*
	将正整数m和n之间（包括m和n）能被17整除的数累加，其中
	0 < m < n < 1000。 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int m, n, sum = 0;
	printf("请由小到大分别输入两个整数：");
	L: scanf("%d %d", &m, &n);

	if (m > n) {
		printf("第一个字数大于第二个字数，请重新输入：");
		goto L; 
	}

	for (int i = m; i <= m + 17; i++) {
		if (i % 17 == 0) {
			sum += i;
			break;
		}
	}

	int tmp = sum;
	while ((tmp += 17) <= n) {
		sum += tmp;
	}
	printf("%d与%d之间能被17整除的数之和为：%d\n", m, n, sum);

	system("PAUSE");
	return 0;
}
