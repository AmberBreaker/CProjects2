/*
	医院想统计一下某项疾病的获得是否与年龄有关，需要对以前的诊断记录进行整理。
	按照 0~18、19~35、36~60、61及以上四个年龄段统计患病比例。 
	精确到小数点后两位。
*/
#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(void) {
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
	printf("请分别输入患病者的年龄：");
	for (int i = 0; i < N; i++) {
		int age;
		scanf("%d", &age);
		if (0 < age && age <= 18) {
			a1++;
		} else if (19 <= age && age <= 35) {
			a2++;
		} else if (36 <= age && age <= 60) {
			a3++;
		} else if (age >= 61) {
			a4++;
		}
	}

	double r1, r2, r3, r4;
	r1 = a1 * 100.0 / N;
	r2 = a2 * 100.0 / N;
	r3 = a3 * 100.0 / N;
	r4 = a4 * 100.0 / N;

	printf("0~18：%.2lf%%\n", r1);
	printf("19~35：%.2lf%%\n", r2);
	printf("36~60：%.2lf%%\n", r3);
	printf("61以上：%.2lf%%\n", r4);

	system("PAUSE");
	return 0;
}
