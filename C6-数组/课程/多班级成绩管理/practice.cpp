/*
	现有三个班级，每个班级10个学生： 
	输入这3个班级某门课程的成绩；
	求：
		各班级的平均成绩、最高分以及最高分学生的序号； 
		最高分学生的班级、该学生在班级的序号以及最高分；
		平均成绩最高的班级及最高的平均成绩 
*/

#include <stdio.h>
#include <stdlib.h>
#define CN 3
#define SN 10

int main(void) {
	int arr[CN][SN];

	for (int i = 0; i < CN; i++) {
		for (int j = 0; j < SN; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < CN; i++) {
		int sum = 0, max = -1, maxk;
		for (int j = 0; j < SN; j++) {
			sum += arr[i][j];
			if (arr[i][j] > max) {
				max = arr[i][j];
				maxk = j + 1;
			}
		}
		printf("%d班平均分：%.2lf，最高分：%d，该学生序号：%d\n", i + 1, sum * 1.0 / SN, max, maxk);
	}

	int max = -1, maxk, maxc;
	for (int i = 0; i < CN; i++) {
		for (int j = 0; j < SN; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				maxk = j;
				maxc = i;
			}
		}
	}
	printf("最高分学生的班级：%d，学生序号：%d，最高分：%d\n", maxc + 1, maxk + 1, max);

	double maxavg = -1;
	int maxavgc;
	for (int i = 0; i < CN; i++) {
		int sum = 0;
		for (int j = 0; j < SN; j++) {
			sum += arr[i][j];
		}
		double avg = sum * 1.0 / SN;
		if (maxavg < avg) {
			maxavg = avg;
			maxavgc = i + 1;
		}
	}
	printf("平均成绩最高的班级为：%d，最高的平均成绩：%.2lf\n", maxavgc, maxavg);
 
	system("PAUSE");
	return 0;
}


