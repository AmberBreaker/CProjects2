/*
	��֪Ͷ�ʵĸ���������ΪR��0��20֮�����������Լ��������ֵ
	ΪM��Ǯ��100-1000000�� ����ҪͶ��Y�꣨0-400��������Լ��
	���ջ��ж���Ǯ����������������֡� 
*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int R, M, Y;
	printf("�����븴�������ʣ�");
	scanf("%d", &R);
	printf("������Լ�������ܽ�");
	scanf("%d", &M);
	printf("������Լ��Ͷ��������");
	scanf("%d", &Y);
	double res = M * 1.0;
	for (int i = 0; i < Y; i++) {
		res = res * (1.0 * R / 100 + 1);
	}
	printf("%d���Լ�����вƲ���%.0lf\n", Y, res);
	system("PAUSE");
	return 0;
}
