/*
	constָ�볣�� 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	system("PAUSE");
	return 0;
}

/*
	����ָ��
	����ָ�벻�����޸�����ָ���ڴ��е�ֵ
	����ָ���������ָ��һ���µ��ڴ�ռ� 
*/
void demo1(void) {
	int i = 10, j = 20;
	const int * p = &i;
// *p = 20; // ����
	p = &j; // ��ȷ����ʱpָ����j���ڵĿռ䡣 
}

/*
	����ָ�����
	����ָ����������޸�����ָ���ڴ��е�ֵ
	����ָ���������������ָ��һ���µ��ڴ�ռ� 
*/
void demo2(void) {
	int i = 10, j = 20;
	int * const p = &i;
	*p = 15; // ��ȷ����ʱpָ����ڴ�ռ��ֵΪ15
//	p = &j; // ���� 
}

/*
	ָ�볣��
	ָ�볣���ۺ��˳���ָ���볣��ָ����������� 
*/
void demo3(void) {
	int i = 10, j = 20;
	const int * const p = &i;
//	*p = 15; // ����assignment of read-only location '*(const int *) p' 
//	p = &j; // ����assignment of read-only variable 'p' 
} 
