/*
	const定义指针常见问题 
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	
	int a = 1, b = 2;
	const int * d = &a;
	int * const e = &b;
	int const * f = &a;

	d = &b;
//	*d = 8; // 错误 
	*e = 34;
//	e = &a; // 错误 
//	f = 0x321f; // 错误 
	f = &a; 
	
	system("PAUSE");
	return 0;
}
