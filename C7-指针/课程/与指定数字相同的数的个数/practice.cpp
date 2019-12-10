/*
	输入一个整数作为数组的长度
	输入指定长度的整数数组
	输入一个整数作为校验数 
	输出数组中与校验数相同的数的个数 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int len, ver, num = 0;
	printf("请输入数组的长度：");
	scanf("%d", &len);
	printf("请分别输入%d个整数：", len);
	int * arr = (int *) malloc(sizeof(int) * len);
	if (arr == NULL) {
		exit(0);
	}
	for (int i = 0; i < len; i++) {
		scanf("%d", &arr[i]);
	}
	printf("请输入校验数：");
	scanf("%d", &ver);
	for (int i = 0; i < len; i++) {
		if (ver == arr[i]) {
			num++;
		}
	}
	free(arr); 
	printf("%d在数组中共有%d个\n", ver, num);
	system("PAUSE");
	return 0;
} 
