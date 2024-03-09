#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node* prev;
	int data;
	struct node* next;
}node;

void create(node* p,int a)
{
	node* newp = (node*)malloc(sizeof(node));
	if (newp->prev != NULL)
	{
		newp->prev = p;
	}
	p->next = newp;
	p->data = a;
	p->prev = newp;
	newp->next = p;
}

int main()
{
	node* init,*p;
	int a, b;
	init = (node*)malloc(sizeof(node));
	init->prev = NULL;
	init->next = NULL;
	p = init;
	scanf("%d%d", &a, &b);
	for (int i = 0; i < b - a; i++)
	{
		p = p->next;
		create(p, i + 1);
	}
	p = p->prev;
	while (1)
	{
		if (p == init) break;
		printf("%d", p->data);
		printf(" ");
	}
	p = p->next;
	while (1)
	{
		if (p == init) break;
		node* q = p;
		free(q);
		p = p->next;
	}
	free(p);
	return 0;
}