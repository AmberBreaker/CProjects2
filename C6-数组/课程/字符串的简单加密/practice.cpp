/*
	输入一个长度小于80的字符串（可能包含空格）
	其中a ~ y、A ~ Y 的字母用其后续字母代替，
	z与Z分别用a与A代替，其他非字母字符不变 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 80

int main(void) {
	char str[N], len;
	printf("请输入要加密的字符串：");
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
