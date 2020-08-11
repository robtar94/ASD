#include "hash-open.h"
#include <stdio.h>
#include <stdlib.h>
int h1(int key);
void write (int tab[])  
{
	int i;
	for (i = 0; i < TAB_SIZE; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
}
void init (int tab[])
{
	int i;
	for (i = 0; i < TAB_SIZE; i++)
	{
	tab[i] = 0;
	}
}
void insert(int tab[], int key) 
{
	tab[h1(key)+1] = key;
}
 int h1(int key) 
 {
 	return key % TAB_SIZE;
 }
void search(int tab[], int key) 
{
	
}
