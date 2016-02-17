#include <stdio.h>
#include "Header.h"
#include "llist.h"

int main(){
	int idx;

	init();

	for (idx = 0; idx < 10; idx++)
	{
		add(idx);
	}
	show();
	reversePrint();

	return 1;
}
