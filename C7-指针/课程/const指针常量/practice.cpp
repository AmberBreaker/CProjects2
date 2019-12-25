/*
	const指针常量 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	system("PAUSE");
	return 0;
}

/*
	常量指针
	常量指针不可以修改其所指向内存中的值
	常量指针可以重新指向一个新的内存空间 
*/
void demo1(void) {
	int i = 10, j = 20;
	const int * p = &i;
// *p = 20; // 错误
	p = &j; // 正确，此时p指向了j所在的空间。 
}

/*
	常量指针变量
	常量指针变量可以修改其所指向内存中的值
	常量指针变量不可以重新指向一个新的内存空间 
*/
void demo2(void) {
	int i = 10, j = 20;
	int * const p = &i;
	*p = 15; // 正确，此时p指向的内存空间的值为15
//	p = &j; // 错误 
}

/*
	指针常量
	指针常量综合了常量指针与常量指针变量的限制 
*/
void demo3(void) {
	int i = 10, j = 20;
	const int * const p = &i;
//	*p = 15; // 错误：assignment of read-only location '*(const int *) p' 
//	p = &j; // 错误：assignment of read-only variable 'p' 
} 
