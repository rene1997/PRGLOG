#include <stdio.h>
#include "Header.h"
#include "llist.h"

int main(){
	int idx;
	int testAmount;

	ll_init();

	for (idx = 0; idx < 10; idx++)
	{
		ll_add(idx);
	}

//	ll_show();
//	ll_reversePrint();

//	testAmount = ll_excist(99);
	ll_remove(0);
	ll_show();
	ll_reversePrint();

	testAmount = ll_nrItems();
	printf("%d \n", testAmount);

	return 1;
}
