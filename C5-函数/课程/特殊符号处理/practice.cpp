/*
	������Ŵ��� 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	printf("��ǰ�ļ�����·����%s\n", __FILE__); // ��ǰ�ļ��ľ���·��
	printf("��ǰ�кţ�%d\n", __LINE__); // ��ʾ��ǰ�кŵ�����
	printf("��ǰ���ڣ�%d\n", __DATE__); // ������ǰ���ڵ����� 
	printf("�жϵ�ǰ�������Ƿ���ѭ ANSI C ��׼��%d\n", __STDC__); // ����ѭ�����0
	printf("��ǰʱ�䣺%d\n", __TIME__); // ������ǰʱ������� 
	
	system("PAUSE");
	return 0;
}
