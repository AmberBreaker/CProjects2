/*
	�ļ�����ر�
	�����ļ�·�������ƣ��ж��Ƿ�򿪳ɹ�
	�ɳɹ��ļ���
		F:\\Workspace\\C\\C9-�ļ�\\�γ�\\�ļ�����ر�\\example.txt 
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	
	char fileName[50];
	printf("�������ļ����ƣ�");
	scanf("%s", fileName);
	
	FILE * f = fopen(fileName, "r");
	if (f == NULL) {
		printf("��ʧ�ܣ�\n");
	} else {
		printf("�򿪳ɹ���\n");
	}
	
	fclose(f);
	
	system("PAUSE");
	return 0;
}
