#include <stdio.h>
#include <stdlib.h>
/*struktura stosu */
typedef struct Stack
{
	int data[10];
	int top;
}Stack;

/* prototypy funkcji */
void init (Stack *S);
int push(Stack *S, int k);
void write (Stack S);
int stack_empty(Stack S);
int pop(Stack *S);
void write_empty(int x);
void write_pop(int k);

/* tresc funkcji */
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
	if(S->data[S->top] < 10)
	{
		S->data[S->top] = k;
	}
	else
	{
		printf("overflow\n");
	}
	return S->top++;
}

int main(void)
{
	Stack S;
	return 0;
}






