#include <stdio.h>
#include <stdlib.h>
#include "heap.h"


int main()
{
	Heap T;
	int tab[10] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
	heap_init(&T, tab, 10);
	build_max_heap(&T);
	write(T);
	max_heap_insert(&T, 15);
	write(T);
	write_heap_maximum(T);
	write(T);
	write_heap_extract_max(&T);
	write(T);
	heap_increase_key(&T, 4, 19);
	write(T);
	
	heapsort(&T);
	return 0;
}
