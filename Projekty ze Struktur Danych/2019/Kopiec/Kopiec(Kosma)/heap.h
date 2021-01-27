#ifndef HEAP_H
#define HEAP_H
struct heap;

typedef
struct heap
{
	int data[20];
	int lenght;
	int heap_size;
}Heap;

void heap_init(Heap *T, int *tab, int len);
void build_max_heap(Heap *T);
void write(Heap T);
void max_heap_insert(Heap *T, int x);
void write_heap_maximum(Heap T);
void write_heap_extract_max(Heap *T);
void heap_increase_key(Heap *T, int i, int x);
void heapsort(Heap *T);
#endif

