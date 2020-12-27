#include <stdio.h>
#include <stdlib.h>
/*struktura stosu */
typedef struct Stack
{
	int data[10];
	int top;
}Stack;

/* prototypy funkcji stosu */
void init (Stack *S);
int push(Stack *S, int k);
void write (Stack S);
int stack_empty(Stack S);
int pop(Stack *S);
void write_empty(int x);
void write_pop(int k);

/* tresc funkcji stosu */
void init (Stack *S)
{
	S->top = 0; /* poczatkowa wartosc stosu. 0 oznacza stos pusty. */
}

int stack_empty(Stack S)
{
	if(S.top == 0) /* pusty = 1, niepusty 0 */
	return 1;
	else
	return 0;
}

int push (Stack *S, int k)
{
	if(S->top < 10)
	{
		S->data[S->top] = k;
	}
	else
	{
		printf("overflow\n");
	}
	return S->top++;
}

int pop(Stack *S)
{
int p;
if (S->top > 0) /* stos niepusty */
{
S->top--;
p = S->data[S->top];
S->data[S->top] = 0;
return p;
}
else printf("underflow\n");
return 0;
}

void write(Stack S)
{
int i;
if(S.top == 0) printf("\n");
else
{
for (i = 0; i < S.top; i++)
{
printf("%d ", S.data[i]);
}
putchar('\n');

}


}

void write_empty(int x)
{
if (x == 1) printf("true\n");
else printf("false\n");
}

void write_pop(int k)
{
if(k == 0) printf(" ");
else printf("%d\n", k);
}

/* struktura kolejki */
typedef struct Queue
{
    int data[10];
    int length;
    int head;
    int tail;
}Queue;

/* prototypy funkcji kolejki */
void init_Q(Queue *Q);
int Queue_Empty(Queue Q);
void Enqueue(Queue *Q, int x);
int Dequeue (Queue *Q);
int write_Q(Queue Q);
void write_empty_Q(int k);
void write_dequeue(int d);

/* tresc funkcji kolejki */

void init_Q(Queue *Q)
{
    Q->head=10;
    Q->head=0;
    Q->tail=0;
}
void Enqueue(Queue *Q, int k)
{
  Q->data[Q->tail]=k;
  if (Q->tail == Q->length)
        Q->tail = 0;
  else
        Q->tail++;

}
int Dequeue(Queue *Q)
{
   int q, i;
   if (Q->tail == Q->head)
   {
    printf("underflow\n");
    return 0;
   }
    else
    {
        q = Q->data[Q->head];
        for(i=0;i<(Q->tail);i++)
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

/* --- Implementacja kolejki przy pomocy dwoch stosow --- */

typedef struct Queue2
{


Stack Data1;
Stack Data2;
int length;
int head;
int tail;

}Queue2;

/*prototypy funkcji */
void init2 (Queue2 *K);
void enqueue2(Queue2 *K, int k);
void write_queue2(Queue2 K);
int is_empty(Queue2 K);
int check_empty(int x);
int dequeue(Queue2 *K);

/*tresc funkcji */
void init2(Queue2 *K)
{
   init(&(K->Data1));
   init(&(K->Data2));
   K->length = 10;
   K->head = 0;
   K->tail = 0;

}

void enqueue2(Queue2 *K, int k)
{
push(&(K->Data1), k);
K->tail++;
}
void write_queue2(Queue2 K)
{
    write(K.Data1);
}

int is_empty(Queue2 K)
{
    if(K.head == K.tail)
        return 1;
    else
        return 0;
}

int check_empty(int x)
{
    write_empty(x);
}

int dequeue(Queue2 *K)
{
    int q,i;
    if(K->tail == K->head)
    {
        printf("underflow\n");
    }
    else
    {
        for(i = 0; i < (K->tail) - 1; i++) {
			push((&(K->Data2)), pop(&(K->Data1)));
		}

		q = pop(&(K->Data1));
		K->tail--;

		for(i = 0; i < (K->tail); i++) {
			push((&(K->Data1)), pop(&(K->Data2)));
		}
		return q;
	}

    }










int main(void)
{
	/* Queue Q; */

	Stack S;
	Queue2 K;







    /*Stos */

	init(&S);
    push(&S,1);
    push(&S,2);
    write(S);
   push(&S,3);
   write(S);
   write_empty(stack_empty(S));
   write_pop(pop(&S));
   write_pop(pop(&S));
   write(S);
   write_pop(pop(&S));
   write_pop(pop(&S));
   write(S);
   write_empty(stack_empty(S));


   putchar('\n');


   /*Kolejka


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
    */


    /* Kolejka przy pomocy dwoch stosow */

    init2(&K);
	enqueue2(&K,1);
	enqueue2(&K,2);
	write_queue2(K);
	enqueue2(&K,3);
	write_queue2(K);
	check_empty(is_empty(K));
	write_deq(dequeue(&K));
	write_deq(dequeue(&K));
	write_queue2(K);
	write_deq(dequeue(&K));
	write_deq(dequeue(&K));
	write_queue2(K);
	check_empty(is_empty(K));







	return 0;
}






