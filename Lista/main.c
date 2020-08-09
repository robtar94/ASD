#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
	/* Lista*/
	List L;

	init(&L);
	write(L);
	insert(&L, 1);
	insert(&L, 2);
	write(L);
	insert(&L, 3);
	list_search(L,2);
	list_search(L,4);
	insert_after(&L,4,2);
	write(L);
	delete(&L,2);
	write(L);
	delete(&L,5);
	write(L);
	insert_before(&L,5,3);
	
	

	return 0;
}
