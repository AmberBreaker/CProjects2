/*
	����һ��������Ϊ����ĳ���
	����ָ�����ȵ���������
	����һ��������ΪУ���� 
	�����������У������ͬ�����ĸ��� 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int len, ver, num = 0;
	printf("����������ĳ��ȣ�");
	scanf("%d", &len);
	printf("��ֱ�����%d��������", len);
	int * arr = (int *) malloc(sizeof(int) * len);
	if (arr == NULL) {
		exit(0);
	}
	for (int i = 0; i < len; i++) {
		scanf("%d", &arr[i]);
	}
	printf("������У������");
	scanf("%d", &ver);
	for (int i = 0; i < len; i++) {
		if (ver == arr[i]) {
			num++;
		}
	}
	free(arr); 
	printf("%d�������й���%d��\n", ver, num);
	system("PAUSE");
	return 0;
} 
