#include "stdlib.h"
#include "stdio.h"
#include "llist.h"


static struct node *pHead = NULL;

void ll_init()
{
	pHead = NULL;
}

/*
* Aan de voorkant invoegen
*/
int ll_add(int data)
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

void ll_show()
{
	struct node *p = pHead;
	int i;
	int nr = ll_nrItems();

	for (i = 0; i < nr; i++)
	{
		printf("node nr: %d heeft data [%d]\n", i, p->data);
		p = p->next;
	}
}

void ll_reversePrint() 
{
	int nr = ll_nrItems();
	int i = 0;
	struct node* p = pHead;
	if (p == NULL) return; // empty list, exit
							  // Going to last Node
	while (p->next != NULL) 
	{
		p = p->next;
	}
	// Traversing backward using prev pointer
	printf("Reverse: ");

	for (i = 0; i < nr; i++)
	{
		printf("node nr: %d heeft data [%d]\n", i, p->data);
		p = p->last;
	}
	printf("\n");
}

int ll_nrItems()
{
	int i = 0;
	struct node *p = pHead;
	for (; NULL != p->next; p = p->next)
	{
		i++;
	}
	return i + 1;
}

int ll_excist(int data)
{
	int nr = ll_nrItems();
	int i = 0;
	struct node* p = pHead;

	for (i = 0; i < nr; i++)
	{
		if (p->data == data)
			return 1;
		p = p->next;
	}

	return 0;
}

void ll_remove(int index)
{
	struct node *p = pHead;
	struct node *currentNode = NULL;
	struct node *previousNode = NULL;
	struct node *nextNode = NULL;
	int nr = ll_nrItems();
	int i = 0;

	if (index == 0)
	{
		currentNode = p;
		nextNode = currentNode->next;
		pHead = nextNode;
		free(currentNode->last);
	}
	else if(index <= nr && index >= 1)
	{
		for (i = 0; i <= index; i++)
		{	
			if(!(p->last == NULL))
			{
				previousNode = p->last;
			}
			if (!(p->next == NULL))
			{
				nextNode = p->next;
			}
			currentNode = p;
			p = p->next;
		}
		previousNode->last = currentNode->last;
		nextNode->next = currentNode->next;
		free(currentNode->next);
	}
	free(currentNode);
}
