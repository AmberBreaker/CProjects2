/*
	�ṹ���ڴ�ռ����� 
*/
#include <stdio.h>
#include <stdlib.h>

struct Sample {
	short s; // 2
	char c[10]; // 10
	float f; // 4
	double d; // 8
};

int main(int argc, char * argv[]) {
	
	struct Sample smp;
	printf("�ṹ���СΪ��%d\n", sizeof(smp));
	
	printf("s:\t%X\n", &smp.s);
	printf("c:\t%X\n", smp.c);
	printf("f:\t%X\n", &smp.f);
	printf("d:\t%X\n", &smp.d);
	
	system("PAUSE");
	return 0;
}
