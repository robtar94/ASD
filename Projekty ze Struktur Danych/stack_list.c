#include <stdio.h>
#include <stdlib.h>
 struct Node
{
    int data; /* zawartosc stosu */
    struct Node *next; /* wskaznik na nastepny element */

};

/*prototypy funkcji */

void init();
void push(int x);
int pop();
void write();
int stack_empty();
void write_empty(int x);
void write_pop(int k);


/*tresc funkcji */

void init()
{
    struct Node *top=NULL;;
}

void push(int x)
{
    struct Node *t;
    struct Node *top;
    t = (struct Node*)malloc(sizeof(struct Node));
    if (t==NULL)
    {
        printf("overflow\n");
    }
    else
    {
        t->data=x; /* ustawiam zawartosc wezla na x */
        t->next = top; /* wskaznik elementu nastepnego wskazuje na top */
        top = t; /* ustawiam wskaznik t jako obecny top */
    }

}
int pop()
{
    struct Node *t;
    struct Node *top;
    int x=-1;

    if (top == NULL)
    {
        printf("underflow\n");
    }
    else
    {
     t=top;
     t= top->next; /* top przenosi sie na nastepny element */
     x=t->data; /* zabieramy wartosc x z wierzcholka stosu */
     free(t); /* usuwamy ja */

    }
    return x;
}

void write()
{
    struct Node *p; /* nowy wskaznik p uzywany do przejscia calej listy */
    struct Node *top;

    while(p != NULL)
    {
        printf ("%d ",p->data);
        p=p->next; /* po wyswietleniu p przechodzi na kolejny element */
    }
    putchar('\n'); /* znak nowej linii na koncu */
}

int stack_empty()
{
    struct Node *top;
    if (top == NULL)
        return 1;
    else
        return 0;
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


int main (void)
{
    init();
    push(1);
    push(2);
    write();
    write_pop(pop());



    return 0;
}
