/* 
	计算两点间的距离 
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
	
	printf("请输入第一个点的坐标：");
	scanf("%d %d", &first.x, &first.y);
	
	printf("请输入第二个点的坐标：");
	scanf("%d %d", &second.x, &second.y);
	
	int xdis = first.x - second.x;
	int ydis = first.y - second.y;
	
	double dis = sqrt(xdis * xdis + ydis * ydis);
	
	printf("两点之间的距离为：%.2lf\n", dis);
	
	system("PAUSE");
	return 0;
} 
