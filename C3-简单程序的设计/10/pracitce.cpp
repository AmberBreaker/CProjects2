/*
	计算邮资：根据邮件的重量和用户是否选择加急计算邮费。
	计算规则：重量在1000g以内（包括1000g），基本费8元；超过1000g的部分，
		每500g加收超重费4元；不足500g部分按500g计算；如果用户选择加急，多收5元。 
*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int weight, fees = 0;
	char isUrgent;

	printf("请输入邮件的重量：");
	scanf("%d", &weight);
	printf("是否加急(y/n)：");
	scanf(" %c", &isUrgent); // 前面需加空格，否则会被上一轮输入的回车占用 

	// 处理重量 
	if (weight <= 1000 && weight > 0) {
		fees = 8;
	} else if (weight > 1000) {
		fees = 8 + ((weight - 1000) / 500 + 1) * 4;
	} else {
		printf("输入重量有误");
	}

	// 处理是否加急 
	if (isUrgent == 'y') {
		fees += 5;
	}

	printf("请支付费用 %d 元\n", fees);

	system("PAUSE");
	return 0;
}
