/*
	�ж�������������Ƿ����5�ı���������7�ı�����
	���ǣ���� yes��������� no 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i;
	printf("������һ�����������ж��Ƿ�Ϊ5��7�ı�����");
	scanf("%d", &i);

	if (i % (5 * 7) == 0) {
		printf("yes\n");
	} else {
		printf("no\n");
	}

	system("PAUSE"); 
	return 0;
}
