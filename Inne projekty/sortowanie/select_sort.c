#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int d,n,i,j,k;
	void select(int *A, int n);
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
		select(A,n);


		for(i=0; i<n; i++) /*wypelnianie tablicy */
		{
			printf("%d ", A[i]); /* wczytanie liczby */
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

void select(int *A, int n)

/*  k - oznacza najmniejszy element w tablicy
    j - oznacza miejsce w ktorym jest biezacy najmniejszy element
    i - oznacza poczatkowy indeks elementu najmniejszego */
{
	int i,j,k;
	for(i = 0; i < n-1;i++)
	{
		for(j=k=i;j<n;j++)
		{
			if(A[j] < A[k])
			{
				k = j;
			}
		}
		swap(&A[i], &A[k]);
	}
}
