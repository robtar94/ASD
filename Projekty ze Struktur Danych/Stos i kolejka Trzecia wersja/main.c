#include <stdio.h>
#include "stack.h"
#include<stdlib.h>
#include "Queue.h"


int main()
{
	Stack K;
	Queue Q;

    /* Stos */
    init(&K);
    push(&K,1);
    push(&K,2);
    write(K);
   push(&K,3);
   write(K);
   write_empty(stack_empty(K));
   write_pop(pop(&K));
   write_pop(pop(&K));
   write(K);
   write_pop(pop(&K));
   write_pop(pop(&K));
   write(K);
   write_empty(stack_empty(K));

   printf("\n\n");


  /* Kolejka */
  
 
    init_Q(&Q);
    Enqueue(&Q,1);
    Enqueue(&Q,2);
    write_Q(Q);
    Enqueue(&Q,3);
    write_Q(Q);
    write_Q_Empty(Queue_Empty(Q));
    write_deq(Dequeue(&Q));
    write_deq(Dequeue(&Q));
    write_Q(Q);
    write_deq(Dequeue(&Q));
    write_deq(Dequeue(&Q));
    write_Q(Q);
    write_Q_Empty(Queue_Empty(Q));













    return 0;
}
