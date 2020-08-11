#ifndef HEAP_H
#define HEAP_H
typedef struct heap
{
    int data [20];
    int length;
    int heap_size;

}Heap;

void heap_init(Heap *H, int tab[], int length);
void write(Heap H);
void build_max_heap(Heap H);
void max_heap_insert(Heap *H, int k);
int heap_max(Heap H);
void heap_extract_max(Heap H);
void heap_increase_key(Heap *H, int i, int k);




#endif // HEAP_H
