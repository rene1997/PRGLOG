#include <stdio.h>
#include "Header.h"
#include "llist.h"

int main(){
	int idx;
	int testAmount;

	init();

	for (idx = 0; idx < 10; idx++)
	{
		add(idx);
	}

	show();
	reversePrint();

	testAmount = nrItems();
	printf("%d \n", testAmount);

	return 1;
}
