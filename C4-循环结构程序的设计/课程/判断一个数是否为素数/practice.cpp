/*
	����һ�������������ж����Ƿ�Ϊ���� 
*/
#include <stdio.h> 
#include <stdlib.h>

int main(void) {

	int i, num;
	printf("������һ����������");
	scanf("%d", &num);

	if (num <= 1) {
		printf("1�Ȳ���������Ҳ���Ǻ���\n");
		system("PAUSE");
		return 0;
	}

	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			break;
		}
	}

	if (i == num) {
		printf("%d��һ������\n", num);
	} else {
		printf("%d����һ������\n", num);
	} 

	system("PAUSE");
	return 0;
}
