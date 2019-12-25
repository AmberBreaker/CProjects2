/*
	Î»×Ö¶Î±à³ÌÊµÀý 
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Date {
	signed int year:22;
	unsigned int month:4;
	unsigned int day:5;
	_Bool isDST:1;
};

int main(int argc, char * argv[]) {
	
	struct Date birthday = {1993, 06, 29};
	
	printf("%d:%d\n", sizeof(Date), sizeof(birthday));
	
	struct Date today;
	today.year = 2019;
	today.month = 12;
	today.day = 24;
	today.isDST = 0;
	
	printf("today is %d-%d-%d\n", today.year, today.month, today.day);
	
	system("PAUSE");
	return 0;
}
