/*
	һλ����������һ����԰�ʱ�����漰���������ɷ�
	A��B��C��D�������ʣ����˷ֱ������£�
=================================== 
	A��"�ﷸ��B��C��D����֮�С�"
	B��"��û����������C͵�ġ�"
	C��"��A��D֮����һ�����ﷸ��"
	D��"B˵������ʵ��"
=================================== 
	������ֵ��飬֤ʵ������ֻ������˵���滰�������ﷸֻ��һ����
	��ȷ���������ﷸ�� 
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
							if (sa == 1) printf("A�ĳ����ǶԵģ�");
							if (sb == 1) printf("B�ĳ����ǶԵģ�");
							if (sc == 1) printf("C�ĳ����ǶԵģ�");
							if (sd == 1) printf("D�ĳ����ǶԵģ�");
							if (ra == 1) printf("A���ﷸ��\n");
							if (rb == 1) printf("B���ﷸ��\n");
							if (rc == 1) printf("C���ﷸ��\n");
							if (rd == 1) printf("D���ﷸ��\n");
						}
					}
				}
			}
		}
	}
	
	system("PAUSE");
	return 0;
}
