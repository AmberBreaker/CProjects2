/*
	�Ӽ��̽���һ���ַ����������ĸ��������Ӧ��ASCII�룻
	��������֣���ԭ����������������ʾ��Ϣ��������� 
*/ 
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	printf("������һ���ַ���");
	scanf("%c", &ch);

	int i = ch;
	if ((i <= 90 && i >= 65) || (i <= 122 && i >= 97)) {
		printf("����ֵΪ��Ļ����ASCII��Ϊ��%d\n", i);
	} else if (i <= 57 && i >= 48) {
		printf("����ֵΪ���֣���ֵ��%c\n", ch);
	} else {
		printf("�������\n"); 
	}
	
	system("PAUSE");
	return 0;
}
