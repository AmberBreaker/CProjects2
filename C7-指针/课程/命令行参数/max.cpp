/*
	����������ɸ������е������
	�������в�������
	�������ݣ�12 34 89 99 22
	�������ݣ�99 
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

	if (argc <= 1) {
		printf("���ܣ������ֵ\n");
	}

	int max = atoi(argv[1]);

	for (int i = 1; i < argc; i++) {
		int tmp = atoi(argv[i]);
		if (tmp > max) {
			max = tmp;
		}
	}

	printf("���ֵΪ��%d\n");

	system("PAUSE");
	return 0;
}
