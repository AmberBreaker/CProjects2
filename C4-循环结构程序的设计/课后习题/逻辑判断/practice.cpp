/*
	�˶�����4λ�����˶�Ա����ѵ�������Ƿֱ����Ի���ӡ����˶ӡ� 
	ɭ���Ƕӡ��������˶ӡ�һλ�����ʣ����Ƕ������ĸ����顣
		A��B��Ա���ǻ���ӵġ�
		B��C��Ա�ǿ������˶ӵġ�
		C��D��Ա����ɭ���Ƕӵġ�
		D�������������У�ֻ�п������˶ӵĶ�Ա˵��ʵ����
	��֪D�Ļ��ǿ��ŵģ�������Ƿֱ������ĸ����顣 
*/
#include <stdio.h>
#include <stdlib.h>

void printInfo(int); 

int main(void) {
	// 1:�����2:���ˣ�3:ɭ���ǣ�4:�������� 
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
							printf("����A��"); printInfo(A);
							printf("����B��"); printInfo(B);
							printf("����C��"); printInfo(C);
							printf("����D��"); printInfo(D);
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
		case 1 : printf("�����\n"); break;
		case 2 : printf("���˶�\n"); break;
		case 3 : printf("ɭ���Ƕ�\n"); break;
		case 4 : printf("�������˶�\n"); break;
	}
}
