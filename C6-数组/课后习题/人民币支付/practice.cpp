/*
	�Ӽ�������һ��ָ����Ԫ����Ȼ�����֧���ý��ĸ������
	���������������ʾ100Ԫ��50Ԫ��20Ԫ��10Ԫ��5Ԫ��1Ԫ�������ţ��� 
	Ҫ����ʹ�ô����ĳ�Ʊ��
*/
#include <stdio.h>
#include <stdlib.h>

void lessNum(int);

int main(void) {
	int sum;
	printf("��������֧���ܽ�");
	scanf("%d", &sum);
	
	lessNum(sum);

	system("PAUSE");
	return 0;
}

void lessNum(int sum) {
	int tmp = sum;
	int a = tmp / 100;
	tmp %= 100;
	int b = tmp / 50;
	tmp %= 50;
	int c = tmp / 20;
	tmp %= 20;
	int d = tmp / 10;
	tmp %= 10;
	int e = tmp / 5;
	tmp %= 5;
	printf("100Ԫ��%d��\n", a); 
	printf("50Ԫ��%d��\n", b); 
	printf("20Ԫ��%d��\n", c); 
	printf("10Ԫ��%d��\n", d); 
	printf("5Ԫ��%d��\n", e); 
	printf("1Ԫ��%d��\n", tmp); 
}
