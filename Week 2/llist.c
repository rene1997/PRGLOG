#include "stdlib.h"
#include "stdio.h"
#include "llist.h"


static struct node *pHead = NULL;

void init()
{
	pHead = NULL;
}

/*
* Aan de voorkant invoegen
*/
int add(int data)
{
	struct node *pn = (struct node*)malloc(sizeof(struct node));

	if (NULL == pn)
	{
		printf("Out of memory ...");
	}
	else
	{
		if (NULL == pHead)
		{
			pn->data = data;
			pn->next = NULL;
			pn->last = NULL;
			pHead = pn;

		}
		else
		{
			pn->last = NULL;
			pn->data = data;
			pn->next = pHead;
			pHead->last = pn;
			pHead = pn;
		}
	}

	return 1;
}

void show()
{
	struct node *p = pHead;
	int nr = 0;

	for (; NULL != p->next; p = p->next)
	{
		printf("node nr: %d heeft data [%d]\n", nr++, p->data);
	}
}

void reversePrint() 
{
	int nr = 0;
	struct node* p = pHead;
	if (p == NULL) return; // empty list, exit
							  // Going to last Node
	while (p->next != NULL) 
	{
		p = p->next;
	}
	// Traversing backward using prev pointer
	printf("Reverse: ");

	for (; NULL != p->last; p = p->last)
	{
		printf("node nr: %d heeft data [%d]\n", nr++, p->data);
	}
	printf("\n");
}

int nrItems()
{
	int i = 0;
	struct node *p = pHead;
	for (; NULL != p->next; p = p->next)
	{
		i++;
	}
	return i;
}
