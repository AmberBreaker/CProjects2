/*
	ģ�黯��������
	���裺
		1.	��c/cppĿ¼�½���DOS����
		2.	����main.cpp��
				gcc -c main.cpp -o main.o
		3.	����sum.cpp��
				gcc -c sum.cpp -o sum.o
		4.	���ӣ�
				gcc main.o sum.o -o sum.exe
		5.	ִ�������ļ���
				sum.exe 
*/
#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(void) {
	printf("1 + 2 + ... + 10 = %d\n", sum(10));
	system("PAUSE");
	return 0;
} 
