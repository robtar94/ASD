#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bst.h"
void init (Tree *T)
{
	T->root= NULL;
}
void make_tree (Tree *T, int key)
{
	Node *a;
	Node *b;
	int i, s;
		a = T->root;
		b = NULL;
		while (a != NULL)
		{
			s = rand()%1;
			b = a;
			if (s  == 0) 
			{
				a= a ->left;
			}
			else
			{
				a= a->right;
			}
		}
		
}

void insert (Tree *T, int key)
{
	Node *x;
	Node *parent;
	Node *child;
	
	child = (Node*)malloc(sizeof(Node));
	child -> key = key;
	child -> left = NULL;
	child -> right = NULL;
	
	if (T->root == NULL)
	{
		T->root = child;
		child ->p = NULL;
		return;
		
	}
	
	x = T->root;
	while (x!= NULL)
	{
		parent = x;
		if (key < x->key)
		{
			x = x->left;
		}
		else
		{
			x = x->right;
		}
	}
	child ->p = parent;
	if (key < parent->key)
	{
		parent->left = child;
	}
}

