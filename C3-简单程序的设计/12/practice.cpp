/*
	����һ���ַ����ж����Ƿ���һ��Сд��ĸ������ǣ�����
	ת��Ϊ��д��ĸ��������ǣ���ת����Ȼ��������õ����ַ� 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char letter;
	printf("����һ����ĸ��");
	scanf("%c", &letter);

	int i = letter;
	if (i <= 90 && i >= 65) {
		printf("�����ֵΪ��д��ĸ��%c\n", letter);
	} else if (i <= 122 && i >= 97) {
		printf("�����ֵΪСд��ĸ�����д��ĸΪ��%c\n", i - 32);
	} else {
		printf("�����ֵΪ����ĸ�ַ�\n");
	}

	system("PAUSE");
	return 0;
}
