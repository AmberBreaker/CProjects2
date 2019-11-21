/*
	考试刚刚结束，老师想知道最高的分数是多少
	因为人数比较多，他觉得这件事情交给计算机比价方便。请问如何解决
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, x, max;
	printf("请输入学生个数：");
	scanf("%d", &n);

	max = -1;
	while (n--) {
		printf("请输入学生成绩：");
		scanf("%d", &x);
		if (x > max) {
			max = x;
		}
	}
	printf("最高分为：1%d\n", max);
	system("PAUSE");
	return 0;
}
