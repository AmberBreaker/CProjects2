/*
	ĳ����Աÿ���ܴ��N(10 <= N <= 50)��Ԫ����ϣ�����йش幫����һ��60ƽ�׵ķ��ӣ�
	���ڼ۸���200��Ԫ�����跿����ÿ��ٷ�֮K(1 <= K <= 20)���������Ҹó���Ա
	δ����н���䡣 ���ʵڼ����ܹ��������׷��ӡ� (������20�꣬�����Imposible)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int N, K, Y = 0;
	double sum = 200;
	printf("������ó���Աÿ��ɴ���(��Ԫ)��");
	scanf("%d", &N); 
	printf("�����뷿������(%%)��");
	scanf("%d", &K); 
	
	while (++Y <= 20) {
		sum = sum + 0.01 * K * sum;
		if (Y * N - sum > 0) {
			printf("��%d��������¸��׷��ӣ���������\n", Y, Y * N - sum);
			system("PAUSE");
			return 0;
		}
	}
	printf("Imposible!\n");
	system("PAUSE");
	return 0;
}
