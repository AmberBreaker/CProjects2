/*
	�������ָ�����ȵ��ַ��� 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int len;
	char * buffer = NULL;
	srand(time(0));
	printf("�������ַ����ĳ��ȣ�");
	scanf("%d", &len);
	
	buffer = (char *) malloc(len + 1);
	if (buffer == NULL) {
		exit (1);
	}
	for (int i = 0; i < len; i++) {
		buffer[i] = rand() % 26 + 'a';
	}
	buffer[len] = '\0';
	printf("�������%s\n", buffer);
	free(buffer);
	system("PAUSE");
	return 0;
}
