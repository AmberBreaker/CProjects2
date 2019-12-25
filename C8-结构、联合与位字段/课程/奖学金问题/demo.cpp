/*
	期末平均成绩		int avgScore;
	班级评议成绩		int classScore;
	是否是学生干部	 	char leader
	是否是西部省份学生	char west
	发表的论文数		int articles

	院士奖学金(8000)：avgScore > 80 && articles >= 1
	五四奖学金(4000)：avgScore > 85 && classScore > 80
	成绩优秀奖(2000)：avgScore > 90
	西部奖学金(1000)：avgScore > 85 && west == 'y'
	班级贡献奖(850 )：classScore > 80 && leader == 'y'

	找出奖学金最多的学生及其序号 
*/ 
#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[10];
	int avgScore;
	int classScore;
	char leader;
	char west;
	int articles; 
};

int main(int argc, char * argv[]) {
	int stdnum, topIndex, topScola = 0;

	printf("请输入学生个数：");
	scanf("%d", &stdnum);

	struct student std;
	
	for (int i = 0; i < stdnum; i++) {
		int allScola = 0;
		printf("请输入第%d个学生的信息：", i + 1);
		scanf("%s %d %d %c %c %d", std.name, &std.avgScore, &std.classScore,
				&std.leader, &std.west, &std.articles);
		if (std.avgScore > 80 && std.articles >= 1) {
			allScola += 8000;
		}
		if (std.avgScore > 85 && std.classScore > 80) {
			allScola += 4000;
		}
		if (std.avgScore > 90) {
			allScola += 2000;
		}
		if (std.avgScore > 85 && std.west == 'y') {
			allScola += 1000;
		}
		if (std.classScore > 80 && std.leader == 'y') {
			allScola += 850;
		}
		if (allScola > topScola) {
			topScola = allScola;
			topIndex = i + 1;
		}
	}

	printf("最高奖学金学生序号：%d，金额：%d\n", topIndex, topScola);

	system("PAUSE");
	return 0;
}
