#ifndef LLIST_DEF
#define LLIST_DEF

struct node
{
	int data;
	struct node *next;
	struct node *last;
};

void init();
int add(int data);
void show();
void reversePrint();
int excist(int data);
int nrItems();

#endif
#pragma once
