/*
	const����ָ�볣������ 
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	
	int a = 1, b = 2;
	const int * d = &a;
	int * const e = &b;
	int const * f = &a;

	d = &b;
//	*d = 8; // ���� 
	*e = 34;
//	e = &a; // ���� 
//	f = 0x321f; // ���� 
	f = &a; 
	
	system("PAUSE");
	return 0;
}
