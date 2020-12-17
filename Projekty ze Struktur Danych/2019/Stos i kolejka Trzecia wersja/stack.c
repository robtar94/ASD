#include "stack.h"
#include <stdio.h>
#include<stdlib.h>

void init(Stack *S)
{
    S->top=0;
}

int stack_empty(Stack S)
{

    if (S.top==0)
    {

       return 1;
    }
    return 0;




}
int push(Stack *S, int k)
{
    if (S->top < 10)
    {
        S->data[S->top] = k;

    }

    else
    {
        printf("nadmiar\n");

    }
    return S->top++;

}
int pop(Stack * S)
 {
	int p;
	if(S->top > 0)
	{
		S->top--;
		p = S->data[S->top];
		S->data[S->top] = 0;
		return p;
	}
	else {
		printf("niedomiar\n");

	}
	return 0;
}

void write(Stack S)
{
    int i;
    if (S.top==0)
    {
        printf(" ");
    }
    else
    {
        for( i = 0; i < S.top; i++)
        {
            printf("%d ", S.data[i]);

        }
    }
    printf("\n");

}
void write_empty(int x)
{
    if (x==1)printf("true\n");
    else printf("false\n");
}
void write_pop(int p)
{
    if (p==0) printf(" ");
    else printf("%d\n",p);
}


