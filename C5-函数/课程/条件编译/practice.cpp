#include <stdio.h>
#include <stdlib.h>
#define FIRST 1

int main(void) {
	
	#ifdef FIRST
		#if FIRST
			printf("FIRST = 1\n");
		#else
			printf("FIRST = 0\n");
		#endif
	#elif defined SECOND
		printf("second\n");
	#endif
	
	system("PAUSE");
	return 0;
}
