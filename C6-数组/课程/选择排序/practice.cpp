/*
	利用选择排序法将n个整数排成递增序列 
*/
#include <stdio.h>
#include <stdlib.h>
#define N 10

int arrInput(int *);
void arrSort(int *, int);
void arrOutput(int *, int);

int main(void) {

	int arr[N];

	int i = arrInput(arr);

	arrSort(arr, i);

	arrOutput(arr, i);

	system("PAUSE");
	return 0;
} 
