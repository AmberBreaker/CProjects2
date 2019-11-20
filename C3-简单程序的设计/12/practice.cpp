/*
	输入一个字符，判断它是否是一个小写字母，如果是，则将它
	转化为大写字母，如果不是，则不转换，然后输出所得到的字符 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char letter;
	printf("输入一个字母：");
	scanf("%c", &letter);

	int i = letter;
	if (i <= 90 && i >= 65) {
		printf("输入的值为大写字母：%c\n", letter);
	} else if (i <= 122 && i >= 97) {
		printf("输入的值为小写字母，其大写字母为：%c\n", i - 32);
	} else {
		printf("输入的值为非字母字符\n");
	}

	system("PAUSE");
	return 0;
}
