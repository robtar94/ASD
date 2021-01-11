#include <stdio.h>
#include <stdlib.h>

/* definicja struktury */

typedef struct node
{
int key;
struct node * prev;
struct node * next;

}Node;

typedef struct list
{
    Node * head;
    Node * tail;

}List;

/* prototypy funkcji */

void init(List *L);
void insert(List *L, int k);
void list_search(List L, int k);
void write(List L);
void insert_after (List * L, int k, int wsk);
void insert_before (List * L, int k, int wsk);
void delete (List *L, int k);
void clear (List  *L);


/* tresc funkcji */

void init(List * L)
{
	L->head = NULL;
	L->tail = NULL;
}

void insert(List * L, int k)
{
	Node * x;
	x = (Node*)malloc (sizeof(Node));
	x->key = k;

	if (L->head == NULL)
	{
		x -> next = NULL;
		x -> prev = NULL;
		L -> head = x;
		L -> tail = x;
	}
	else
	{
		x -> next = L -> head;
		L -> head -> prev = x;
		x -> prev = NULL;
		L -> head = x;
	}
}

void write(List L)
{
	Node * x = L.head;
	if (x == NULL)
	{
		printf("%c", '\n');
	}
	else
	{
		while (x != NULL)
		{
			printf ("%d ", x->key);
			x = x->next;
		}
		printf("%c", '\n');
	}
}

Node * search(List * L, int k)
{
	Node * x = L -> head;
	while (x != NULL && x->key != k)
	{
		x = x->next;
	}
	return x;
}

void list_search(List L, int k)
{
	Node * x = search(&L, k);
	if (x==NULL)
	{
		printf("-1\n");
	}
	else printf ("%d\n", x->key);
}

void insert_after(List * L, int k, int pos)
{
	Node * x = search(L, pos);
	Node * y;
	y = (Node*)malloc (sizeof(Node));
	y->key = k;

	if (x->next == NULL)
	{
		x->next = y;
		y->prev = x;
		y->next = NULL;
		L->tail = y;
	}
	else
	{
		x->next->prev = y;
		y->next = x->next;
		y->prev = x;
		x->next = y;
	}
}

void insert_before(List * L, int k, int pos)
{
	Node * x = search(L, pos);

	Node * y;
	y = (Node*)malloc (sizeof(Node));
	y->key = k;

	if (x!=NULL)
	{
		if (x->prev == NULL)
		{
			x->prev = y;
			y->next = x;
			y->prev = NULL;
			L->head = y;
		}
		else
		{
			x->prev->next = y;
			y->prev = x->prev;
			y->next = x;
			x->prev = y;
		}
	}
}

void delete(List * L, int k)
{
	Node * x = search(L, k);

	if(x != NULL)
	{
		if (x->prev != NULL)
		{
			x->prev->next = x->next;
		}
		else
		{
			L->head = x->next;
		}

		if (x->next != NULL)
		{
			x->next->prev = x->prev;
		}
		else
		{
			L->tail = x->prev;
		}
	}
	free(x);
}

void clear (List * L)
{
	Node * x = L->head;
	Node * y;

	while (x!=NULL)
	{
		y = x->next;
		free(x);
		x=y;
	}
	L->head = NULL;
	L->tail = NULL;

}

/* main */

int main (void)
{
    /* Lista*/
	List L;

	init(&L);
	write(L);
	insert(&L, 1);
	insert(&L, 2);
	write(L);
	insert(&L, 3);
	list_search(L,2);
	list_search(L,4);
	insert_after(&L,4,2);
	write(L);
	delete(&L,2);
	write(L);
	delete(&L,5);
	write(L);
	insert_before(&L,5,3);
	write(L);
	return 0;
}
