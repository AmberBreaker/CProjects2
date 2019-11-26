/*
	#ÔËËã·û 
	##ÔËËã·û 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM(x) x##x##x
#define SAYHELLO(x) "HELLO, "#x

int main(void) {
	
	printf("%s\n"SAYHELLO(ABC));
	
	int nnn = 10;
	
	printf("%d\n", NUM(n));
	printf("%d\n", NUM(1)); 
	
	system("PAUSE");
	return 0; 
}
