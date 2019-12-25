/*
	联合union编程实例 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Data {
	int i;
	double x;
	char str[16];
};

int main(int argc, char * argv[]) {
	union Data data;
	int size = sizeof(Data);
	printf("联合体Data在内存中所占的大小为：%d\n", size);
	
	data.i = 5;
	data.x = 1.25;
	
	for (int i = size - 1; i >= 0; i--) {
		printf("%02X ", (unsigned char) data.str[i]);
	}
	printf("\n%d\n", data.i);
	
	system("PAUSE");
	return 0;
}
