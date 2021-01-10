#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int d,n,i,j,k;
	void bubble(int *A, int n);
	void swap(int *x, int *y);
	int *A = malloc(sizeof(int) *n); /*tablica dynamiczna o rozmiarze n elementow */
	scanf("%d", &d); /*liczba testow */


	for(i=0; i<d; i++){
		scanf("%d", &n); /* liczba cyfr w ciagu */
		for(j=0; j<n; j++) /*wypelnianie tablicy */
		{
			scanf("%d", &k); /* wczytanie liczby */
			A[j] = k; /*umieszczanie liczby w tablicy */
		}
		bubble(A,n);


		for(i=0; i<n; i++) /*wypelnianie tablicy */
		{
			printf("%d ", A[i]); /* wczytanie liczby */
		}
		printf("\n");
	}

	free(A);

	return 0;
}
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubble(int *A, int n)
{
	int i,j;
	for(i = 0; i < n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(A[j] > A[j+1])
			{
				swap(&A[j], &A[j+1]);
			}
		}
	}
}
