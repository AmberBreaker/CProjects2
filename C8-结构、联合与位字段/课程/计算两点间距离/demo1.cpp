/* 
	���������ľ��� 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coord {
	int x;
	int y;
};

int main(int argc, char * argv[]) {
	
	struct coord first, second;
	
	printf("�������һ��������꣺");
	scanf("%d %d", &first.x, &first.y);
	
	printf("������ڶ���������꣺");
	scanf("%d %d", &second.x, &second.y);
	
	int xdis = first.x - second.x;
	int ydis = first.y - second.y;
	
	double dis = sqrt(xdis * xdis + ydis * ydis);
	
	printf("����֮��ľ���Ϊ��%.2lf\n", dis);
	
	system("PAUSE");
	return 0;
} 
