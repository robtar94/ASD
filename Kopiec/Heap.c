#include "Heap.h"
#include <stdlib.h>
#include <stdio.h>

void heap_init(Heap *H, int tab[], int length)
{
    int i;
    for (i=1; i <= length; i++)
    {
        H->data[i] = tab[i-1];
    }
    H->length = length;
    H->heap_size = length;
}
void write(Heap H)
{
    int i;
    for(i= 1; i <= H.heap_size; i++)
    {
        printf("%d ", H.data[i]);
    }
    printf("%c", '\n');
}

int parent(int i)
{
    return i/2;
}

int left (int i)
{
    return 2*i;
}

int right (int i)
{
    return 2*i + 1;
}

void max_heapify( Heap *H, int i)
{
    int l, r, max;
    l = left(i);
    r = right(i);
    if (l <= H->heap_size && H->data[l] > H->data[i])
    {
        max = l;
    }
    else
    {
        max = i;
    }
    if (r <= H->heap_size && H->data[r] > H->data[max])
    {
        max = r;
    }
    if(max !=i)
    {
        int temp;
        temp = H->data[i];
        H->data[i] = H->data[max];
        H->data[max] = temp;
        max_heapify(H, max);
    }
}

void build_max_heap(Heap H)
{
 int i;
 for (i = H.heap_size/2; i > 0; i--)
 {
     max_heapify(H,i);
 }
}

void max_heap_insert(Heap *H, int k)
{
    H->heap_size++;
    H->data[H->heap_size]= k;
    build_max_heap(H);
}

int heap_max(Heap  H)
{
    return H.data[1];
}

void heap_extract_max(Heap H)
{
    int temp;
    if (H.heap_size < 1)
    {
        printf("%c", '\n');
    }
    else
    {
        printf("%d\n ", heap_max(H));
    }

    temp = H.data[1];
    H.data[1] = H.data[H.heap_size];
    H.data[H.heap_size] = temp;

    H.heap_size--;
    build_max_heap(H);
}

void heap_increase_key(Heap *H, int i, int k)
{
    H->data[i] = k;
    build_max_heap(H);
}











