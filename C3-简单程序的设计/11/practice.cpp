/*
	从键盘接受一个字符，如果是字母，输出其对应的ASCII码；
	如果是数字，则原样输出；否则给出提示信息：输入错误。 
*/ 
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	printf("请输入一个字符：");
	scanf("%c", &ch);

	int i = ch;
	if ((i <= 90 && i >= 65) || (i <= 122 && i >= 97)) {
		printf("输入值为字幕，其ASCII码为：%d\n", i);
	} else if (i <= 57 && i >= 48) {
		printf("输入值为数字，其值：%c\n", ch);
	} else {
		printf("输入错误\n"); 
	}
	
	system("PAUSE");
	return 0;
}
