/*
	���Ըոս�������ʦ��֪����ߵķ����Ƕ���
	��Ϊ�����Ƚ϶࣬������������齻��������ȼ۷��㡣������ν��
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, x, max;
	printf("������ѧ��������");
	scanf("%d", &n);

	max = -1;
	while (n--) {
		printf("������ѧ���ɼ���");
		scanf("%d", &x);
		if (x > max) {
			max = x;
		}
	}
	printf("��߷�Ϊ��1%d\n", max);
	system("PAUSE");
	return 0;
}
