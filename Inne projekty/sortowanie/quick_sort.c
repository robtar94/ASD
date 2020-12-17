#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int d,n,i,j,k;
	int partition (int *A, int l, int h);
	void QuickSort(int *A, int l, int h);
	void swap(int *x, int *y);
	int *A = malloc(sizeof(int) *n); /*tablica dynamiczna o rozmiarze n elementow */
	scanf("%d", &d); /*liczba testow */


	for(k=0; k<d; k++){
		scanf("%d", &n); /* liczba cyfr w ciagu */
		for(i=0; i<n; i++) /*wypelnianie tablicy */
		{
			scanf("%d", &j); /* wczytanie liczby */
			A[i] = j; /*umieszczanie liczby w tablicy */
		}
		QuickSort(A,0,n-1);


		for(i=0; i<n; i++) /*wypelnianie tablicy */
		{
			printf("%d ", A[i]); /* wypisanie liczby */

		}
		printf("\n");


	}

	return 0;
}
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int partition (int *A, int l, int h)
{
    int pivot = A[l]; /* element centralny do podzialu tablicy */
    int i = l, j = h; /* l wskazuje na najmniejszy, h na najwiekszy */

    do
    {
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);

        if (i < j)swap(&A[i], &A[j]);
    }while(i<j);

    swap(&A[l], &A[j]);
    return j;
}

void QuickSort(int *A, int l, int h)
{
    int j;
    if(l<h)
    {
        j = partition(A,l,h); /* wyznacza element centralny w tablicy */
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);

    }
}





