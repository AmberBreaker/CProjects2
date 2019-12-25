#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char i:4;
	char j:4;
	unsigned short s:8;
	unsigned long l;
} test;

int main(int argc, char * argv[]) {

	printf("%d\n", sizeof(test));

	system("PAUSE");
	return 0;
}
