/*
	1.	���ļ����ж��Ƿ�ɹ�
	2.	��ȡ�ļ������
	3.	�ر��ļ�
	�����ļ�Ŀ¼��
		F:\\Workspace\\C\\C9-�ļ�\\�γ�\\�ļ�����ر�\\example.txt 
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

	char fileName[50];
	printf("��������Ҫ�򿪵��ļ���");
	scanf("%s", &fileName);

	FILE * f = fopen(fileName, "r");
	if (f == NULL) {
		printf("�ļ����쳣��\n");
		exit(0);
	}

	while (!feof(f)) {
		putchar(fgetc(f));
	}

	printf("\n");
	fclose(f);

	system("PAUSE");
	return 0;
}
