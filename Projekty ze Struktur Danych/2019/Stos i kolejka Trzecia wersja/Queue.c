#include <stdlib.h>
#include <stdio.h>
#include "Queue.h"
void init_Q(Queue *Q)
{
 Q->length=10;
 Q->head=0;
 Q->tail=0;
}
 void Enqueue(Queue *Q, int k)
{
	Q->data[Q->tail]=k;
	
	if(Q->tail == Q->length)
	
		Q->tail = 0;
	
	else
		 Q->tail++;

}

 int Dequeue(Queue *Q)
{
    int q,i;
    if(Q->tail == Q->head)
    {
        printf("niedomiar\n");
        return 0;
    }
    else
    {
        q = Q->data[Q->head];

        for (i=0; i<(Q->tail); i++)
        {
            Q->data[i]=Q->data[i+1];
        }
        Q->tail--;

    }
    return q;
}
int Queue_Empty(Queue Q)
{
 if (Q.head == Q.tail)
 {
return 1;
 }
 else return 0;
}

int write_Q(Queue Q)
{
	if (Q.tail == Q.head)
    {
        return 0;
    }
	else
	{
		int i;
		i=Q.head;
		while (i != Q.tail)
		{
			printf ("%d ", Q.data[i]);
			if (i==Q.length)
			{
				i=0;
			}
			else
			{
				i++;
			}
		}
		printf("\n");
	}
return 0;
}
void write_Q_Empty(int x)
{
    if (x==1) printf("true\n");
    else printf("false\n");
}
void write_deq(int q)
{
    if (q==0) printf("\n");
    else printf("%d\n",q);
}
