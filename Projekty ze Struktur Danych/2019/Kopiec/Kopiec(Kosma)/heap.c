#include <stdlib.h>
#include <stdio.h>
#include "heap.h"

void heap_init(Heap *T, int *tab, int len)
{
	int i;

	for(i=0; i<len; i++)
	{
		T->data[i] = tab[i];
	}
	T->lenght = len;
}

int parent(int i)
{
	int p;
	p = (i-1)/2;
	return p;
}

int left(int i)
{
	int l;
	l = 2*i+1;
	return l;
}

int right(int i)
{
	int r;
	r = 2*i+2;
	return r;
}

void max_heapify(Heap *T, int i)
{
	int l, r, max, temp;
	l = left(i);
	r = right(i);
	if(l < T->heap_size && T->data[l] > T->data[i])
	{
		max = l;
	}
	else
	{
		max = i;
	}
	if(r < T->heap_size && T->data[r] > T->data[max])
	{
		max = r;
	}
	if(max != i)
	{
		temp = T->data[i];
		T->data[i] = T->data[max];
		T->data[max] = temp;
		max_heapify(T, max);
	}
}

void build_max_heap(Heap *T)
{
	int i;
	T->heap_size = T->lenght;
	for(i = (T->lenght/2)-1; i >= 0; i--)
	{
		max_heapify(T, i);
	}
}

void write(Heap T)
{
	int i;
	for(i=0; i < T.heap_size; i++)
	{
		printf("%d ", T.data[i]);
	}
	putchar('\n');
}

void max_heap_insert(Heap *T, int x)
{
	int i;
	i = T->heap_size;
	while(i > 0 && T->data[parent(i)] < x)
	{
		T->data[i] = T->data[parent(i)];
		i = parent(i);
	}
	T->data[i] = x;
	T->heap_size += 1;
}

void write_heap_maximum(Heap T)
{
	printf("%d\n", T.data[0]);
}

void write_heap_extract_max(Heap *T)
{
	int max;
	if(T->heap_size < 1)
		printf("kopiec jest pusty\n");
	else
	{
		max = T->data[0];
		T->data[0] = T->data[T->heap_size - 1];
		T->heap_size -= 1;
		max_heapify(T, 0);
		printf("%d\n", max);
	}
	
}

void heap_increase_key(Heap *T, int i, int x)
{
	i--;
	T -> data[i] = x;
	build_max_heap(T);
}

void heapsort(Heap *T)
{
	int i, temp;
	
	printf("\ntablica przed posortowaniem:\n");
	for(i=0; i < T->lenght; i++)
	{
		printf("%d ", T->data[i]);
	}
	putchar('\n');
	
	build_max_heap(T);
	for(i = T->lenght - 1; i >= 1; i--)
	{
		temp = T->data[i];
		T->data[i] = T->data[0];
		T->data[0] = temp;
		T->heap_size--;
		max_heapify(T, 0);
	}
	
	printf("\nheapsort:\n");
	for(i=0; i < T->lenght; i++)
	{
		printf("%d ", T->data[i]);
	}
	putchar('\n');
}
