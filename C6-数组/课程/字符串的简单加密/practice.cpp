/*
	����һ������С��80���ַ��������ܰ����ո�
	����a ~ y��A ~ Y ����ĸ���������ĸ���棬
	z��Z�ֱ���a��A���棬��������ĸ�ַ����� 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 80

int main(void) {
	char str[N], len;
	printf("������Ҫ���ܵ��ַ�����");
	gets(str);
	len = strlen(str);

	for (int i = 0; i < len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = (str[i] - 'a' + 1) % 26 + 'a';
		} else if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = (str[i] - 'A' + 1) % 26 + 'A';
		}
	}

	printf("%s\n", str);
	system("PAUSE");
	return 0;
}
