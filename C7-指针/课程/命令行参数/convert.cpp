/*
	���������в���������Ƽ��ת��
	�磺
		convert 234 8����8�����������234
		convert 234 16����16�����������234 
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	if (argc != 3) {
		printf("���ܣ����Ƽ��ת��\n");
		system("PAUSE");
		exit(0); 
	}

	int num = atoi(argv[1]);
	int in = atoi(argv[2]);
	
	switch (in) {
		case 8 :
			printf("%dת��Ϊ�˽���֮����Ϊ��%o\n", num, num);
			break;
		case 16 :
			printf("%dת��Ϊʮ������֮��Ľ��Ϊ��%X\n", num, num);
			break;
		default :
			printf("��֧��8������16����ת��\n");
	}

	system("PAUSE");
	return 0;
}
