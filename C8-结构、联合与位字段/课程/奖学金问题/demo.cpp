/*
	��ĩƽ���ɼ�		int avgScore;
	�༶����ɼ�		int classScore;
	�Ƿ���ѧ���ɲ�	 	char leader
	�Ƿ�������ʡ��ѧ��	char west
	�����������		int articles

	Ժʿ��ѧ��(8000)��avgScore > 80 && articles >= 1
	���Ľ�ѧ��(4000)��avgScore > 85 && classScore > 80
	�ɼ����㽱(2000)��avgScore > 90
	������ѧ��(1000)��avgScore > 85 && west == 'y'
	�༶���׽�(850 )��classScore > 80 && leader == 'y'

	�ҳ���ѧ������ѧ��������� 
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

	printf("������ѧ��������");
	scanf("%d", &stdnum);

	struct student std;
	
	for (int i = 0; i < stdnum; i++) {
		int allScola = 0;
		printf("�������%d��ѧ������Ϣ��", i + 1);
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

	printf("��߽�ѧ��ѧ����ţ�%d����%d\n", topIndex, topScola);

	system("PAUSE");
	return 0;
}
