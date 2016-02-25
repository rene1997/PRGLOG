#ifndef LLIST_DEF
#define LLIST_DEF

struct node
{
	int data;
	struct node *next;
	struct node *last;
};

<<<<<<< HEAD
void init();
int add(int data);
void show();
void reversePrint();
void excist();
=======
void ll_init();
int ll_add(int data);
void ll_show();
void ll_reversePrint();
int ll_excist(int data);
int ll_nrItems();
void ll_remove(int index);
>>>>>>> origin/master

#endif
#pragma once
