/*
	运动场有4位篮球运动员正在训练，他们分别来自火箭队、湖人队、 
	森林狼队、凯尔特人队。一位记者问：你们都来自哪个队伍。
		A：B球员不是火箭队的。
		B：C球员是凯尔特人队的。
		C：D球员不是森林狼队的。
		D：他们三个人中，只有凯尔特人队的队员说了实话。
	已知D的话是可信的，求出他们分别来自哪个队伍。 
*/
#include <stdio.h>
#include <stdlib.h>

void printInfo(int); 

int main(void) {
	// 1:火箭，2:湖人，3:森林狼，4:凯尔特人 
	int A, B, C, D;
	int la, lb, lc;
	for (A = 1; A <= 4; A++) {
		for (B = 1; B <= 4; B++) {
			for (C = 1; C <= 4; C++) {
				for (D = 1; D <= 4; D++) {
					if (B != A && C != A && C != B && D != A && D != B && D != C) {
						lb = (C == 4);
						lc = (D != 3);
						la = (B != 1);
						if ((A == 4 && la && !lb && !lc) + (B == 4 && lb && !la && !lc)
								+ (C == 4 && !la && !lb && lc)) {
							printf("来自A："); printInfo(A);
							printf("来自B："); printInfo(B);
							printf("来自C："); printInfo(C);
							printf("来自D："); printInfo(D);
						}
					} 
				}
			}
		}
	}
	 
	system("PAUSE");
	return 0;
}


void printInfo(int n) {
	switch (n) {
		case 1 : printf("火箭队\n"); break;
		case 2 : printf("湖人队\n"); break;
		case 3 : printf("森林狼队\n"); break;
		case 4 : printf("凯尔特人队\n"); break;
	}
}
