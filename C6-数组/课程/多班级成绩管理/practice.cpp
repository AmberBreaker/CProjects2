/*
	���������༶��ÿ���༶10��ѧ���� 
	������3���༶ĳ�ſγ̵ĳɼ���
	��
		���༶��ƽ���ɼ�����߷��Լ���߷�ѧ������ţ� 
		��߷�ѧ���İ༶����ѧ���ڰ༶������Լ���߷֣�
		ƽ���ɼ���ߵİ༶����ߵ�ƽ���ɼ� 
*/

#include <stdio.h>
#include <stdlib.h>
#define CN 3
#define SN 10

int main(void) {
	int arr[CN][SN];

	for (int i = 0; i < CN; i++) {
		for (int j = 0; j < SN; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < CN; i++) {
		int sum = 0, max = -1, maxk;
		for (int j = 0; j < SN; j++) {
			sum += arr[i][j];
			if (arr[i][j] > max) {
				max = arr[i][j];
				maxk = j + 1;
			}
		}
		printf("%d��ƽ���֣�%.2lf����߷֣�%d����ѧ����ţ�%d\n", i + 1, sum * 1.0 / SN, max, maxk);
	}

	int max = -1, maxk, maxc;
	for (int i = 0; i < CN; i++) {
		for (int j = 0; j < SN; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				maxk = j;
				maxc = i;
			}
		}
	}
	printf("��߷�ѧ���İ༶��%d��ѧ����ţ�%d����߷֣�%d\n", maxc + 1, maxk + 1, max);

	double maxavg = -1;
	int maxavgc;
	for (int i = 0; i < CN; i++) {
		int sum = 0;
		for (int j = 0; j < SN; j++) {
			sum += arr[i][j];
		}
		double avg = sum * 1.0 / SN;
		if (maxavg < avg) {
			maxavg = avg;
			maxavgc = i + 1;
		}
	}
	printf("ƽ���ɼ���ߵİ༶Ϊ��%d����ߵ�ƽ���ɼ���%.2lf\n", maxavgc, maxavg);
 
	system("PAUSE");
	return 0;
}


