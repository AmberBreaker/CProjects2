/*
	一位法官在审理一起盗窃案时，对涉及的四名嫌疑犯
	A、B、C、D进行审问，四人分别供述如下：
=================================== 
	A："罪犯在B、C、D三人之中。"
	B："我没有作案，是C偷的。"
	C："在A和D之间有一个是罪犯。"
	D："B说的是事实。"
=================================== 
	经过充分调查，证实四人中只有两人说了真话，并且罪犯只有一个。
	请确定真正的罪犯。 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int ra, rb, rc, rd;
	int sa, sb, sc, sd;

	for (ra = 0; ra <= 1; ra++) {
		for (rb = 0; rb <= 1; rb++) {
			for (rc = 0; rc <= 1; rc++) {
				for (rd = 0; rd <= 1; rd++) {
					if (ra + rb + rc + rd == 1) {
						sa = rb || rc || rd;
						sb = !rb && rc;
						sc = ra || rd;
						sd = sb;
						if (sa + sb + sc + sd == 2) {
							if (sa == 1) printf("A的陈述是对的，");
							if (sb == 1) printf("B的陈述是对的，");
							if (sc == 1) printf("C的陈述是对的，");
							if (sd == 1) printf("D的陈述是对的，");
							if (ra == 1) printf("A是罪犯！\n");
							if (rb == 1) printf("B是罪犯！\n");
							if (rc == 1) printf("C是罪犯！\n");
							if (rd == 1) printf("D是罪犯！\n");
						}
					}
				}
			}
		}
	}
	
	system("PAUSE");
	return 0;
}
