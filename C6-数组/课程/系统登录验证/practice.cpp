/*
	开发一个登录系统，输入用户名与密码
	输入正确后输出：welcome，输入错误后提示重新输入。 
	最多可重新输入3次，超过三次后系统输出：BYE
	正确用户名密码：admin/password 
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
		printf("请输入用户名：");
		gets(username);
		if (strcmp(username, "admin") == 0) {
			printf("请输入密码：");
			gets(password);
			if (strcmp(password, "password") == 0) {
				printf("welcome!\n");
				break;
			} else {
				printf("密码输入错误，还有%d次输入机会\n", --i);
				continue;
			}
		} else {
			printf("该用户名不存在，请重新登录\n");
			continue;
		}
	}
	if (i == 0) {
		printf("BYE!\n");
	}

	system("PAUSE");
	return 0;
}
