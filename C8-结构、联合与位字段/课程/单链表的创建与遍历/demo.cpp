/*
	单链表的创建与遍历
*/
#include <stdio.h>
#include <stdlib.h>
#define N 10 

struct node {
	int data;
	struct node * pNext;
};
typedef struct node Node;

int main(int argc, char * argv[]) {
	
	Node *head, *p, *q;
	
	p = (Node *) malloc(sizeof(Node));
	p->data = 10;
	head = p;
	
	for (int i = 1; i < N; i++) {
		q = (Node *) malloc(sizeof(Node));
		q->data = (i + 1) * 10;
		p->pNext = q;
		p = q;
	}
	p->pNext = NULL;
	
	system("PAUSE");
	return 0;
}
