#include <stdio.h>
#include <stdlib.h>
#include "Heap.h"

int main()
{
    Heap H;
    int tab[] = {4,1,3,2,16,9,10,14,8,7};
    int length = 10;

    heap_init(&H, tab, length);
    build_max_heap(&H);
    write(H);
    max_heap_insert(&H, 15);
    write(H);
    printf("%d\n", heap_max(&H));
    write(H);
    heap_extract_max(&H);
    write(H);
    heap_increase_key(&H,4,19);
    write(H);

    return 0;

}
