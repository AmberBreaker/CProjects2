/*
	从键盘输入一个指定金额（元），然后输出支付该金额的各种面额
	的人民币数量，显示100元、50元、20元、10元、5元、1元个多少张，求 
	要求尽量使用大面额的钞票。
*/
#include <stdio.h>
#include <stdlib.h>

void lessNum(int);

int main(void) {
	int sum;
	printf("请输入需支付总金额：");
	scanf("%d", &sum);
	
	lessNum(sum);

	system("PAUSE");
	return 0;
}

void lessNum(int sum) {
	int tmp = sum;
	int a = tmp / 100;
	tmp %= 100;
	int b = tmp / 50;
	tmp %= 50;
	int c = tmp / 20;
	tmp %= 20;
	int d = tmp / 10;
	tmp %= 10;
	int e = tmp / 5;
	tmp %= 5;
	printf("100元：%d张\n", a); 
	printf("50元：%d张\n", b); 
	printf("20元：%d张\n", c); 
	printf("10元：%d张\n", d); 
	printf("5元：%d张\n", e); 
	printf("1元：%d张\n", tmp); 
}
