/*
	��������m��n֮�䣨����m��n���ܱ�17���������ۼӣ�����
	0 < m < n < 1000�� 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int m, n, sum = 0;
	printf("����С����ֱ���������������");
	L: scanf("%d %d", &m, &n);

	if (m > n) {
		printf("��һ���������ڵڶ������������������룺");
		goto L; 
	}

	for (int i = m; i <= m + 17; i++) {
		if (i % 17 == 0) {
			sum += i;
			break;
		}
	}

	int tmp = sum;
	while ((tmp += 17) <= n) {
		sum += tmp;
	}
	printf("%d��%d֮���ܱ�17��������֮��Ϊ��%d\n", m, n, sum);

	system("PAUSE");
	return 0;
}
