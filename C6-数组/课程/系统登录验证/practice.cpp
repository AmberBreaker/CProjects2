/*
	����һ����¼ϵͳ�������û���������
	������ȷ�������welcome������������ʾ�������롣 
	������������3�Σ��������κ�ϵͳ�����BYE
	��ȷ�û������룺admin/password 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3
#define U 10
#define P 10

int main(void) {
	int i = N;
	char username[U], password[P];
	while (i > 0) {
		printf("�������û�����");
		gets(username);
		if (strcmp(username, "admin") == 0) {
			printf("���������룺");
			gets(password);
			if (strcmp(password, "password") == 0) {
				printf("welcome!\n");
				break;
			} else {
				printf("����������󣬻���%d���������\n", --i);
				continue;
			}
		} else {
			printf("���û��������ڣ������µ�¼\n");
			continue;
		}
	}
	if (i == 0) {
		printf("BYE!\n");
	}

	system("PAUSE");
	return 0;
}
