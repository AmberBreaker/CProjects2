/*
	����λ�ֶΣ�λ�ֶ��ڳ�ԱΪ���Ρ� 
	λ�ֶ�1�������з�������int�� 
	λ�ֶ�2�������޷������� unsigned int�� 
	Ϊλ�ֶθ�ֵ������������ 
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int i:2;
	int j:2;
	int k:1;
} test1;

typedef struct {
	unsigned int i:2;
	unsigned int j:2;
	unsigned int k:1;
} test2;

int main(int argc, char * argv[]) {

	test1 t1;
	t1.i = 1; t1.j = 3; t1.k = 1;

	test2 t2;
	t2.i = 1; t2.j = 3; t2.k = 1;

	printf("t1.i = %d\tt2.i = %d\n", t1.i, t2.i);
	printf("t1.j = %d\tt2.j = %d\n", t1.j, t2.j);
	printf("t1.k = %d\tt2.k = %d\n", t1.k, t2.k);

	system("PAUSE");
	return 0;
}
