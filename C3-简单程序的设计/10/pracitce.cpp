/*
	�������ʣ������ʼ����������û��Ƿ�ѡ��Ӽ������ʷѡ�
	�������������1000g���ڣ�����1000g����������8Ԫ������1000g�Ĳ��֣�
		ÿ500g���ճ��ط�4Ԫ������500g���ְ�500g���㣻����û�ѡ��Ӽ�������5Ԫ�� 
*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int weight, fees = 0;
	char isUrgent;

	printf("�������ʼ���������");
	scanf("%d", &weight);
	printf("�Ƿ�Ӽ�(y/n)��");
	scanf(" %c", &isUrgent); // ǰ����ӿո񣬷���ᱻ��һ������Ļس�ռ�� 

	// �������� 
	if (weight <= 1000 && weight > 0) {
		fees = 8;
	} else if (weight > 1000) {
		fees = 8 + ((weight - 1000) / 500 + 1) * 4;
	} else {
		printf("������������");
	}

	// �����Ƿ�Ӽ� 
	if (isUrgent == 'y') {
		fees += 5;
	}

	printf("��֧������ %d Ԫ\n", fees);

	system("PAUSE");
	return 0;
}
