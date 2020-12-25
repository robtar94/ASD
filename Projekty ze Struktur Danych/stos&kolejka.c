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
    int size[10];
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




int main(void)
{
    /* Stos */
    Stack S;
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

   /*Kolejka */

   Queue Q;


	return 0;
}






