#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int potega(int x, int y)
{
	int a;
	int wynik = 1;
	for (a=0; a<y; a++)
	{
		wynik *= x;
	}
	return(wynik);
}

void in_sort(int rozmiar, int* liczba)
{
	int i, j, temp;
	
	time_t stoper = time(NULL);
	
	for (i=0; i<rozmiar; ++i)
	{
		if (time(NULL) > stoper + 60)
		{
			break;
		}
		else
		{
			for (j = i + 1; j < rozmiar; j++)
			{
				if(*(liczba + j) < *(liczba + i))
				{
					temp = *(liczba + i);
					*(liczba + i) = *(liczba + j);
					*(liczba + j) = temp;
				}
			}
		}
	}
}

void bu_sort(int rozmiar, int* liczba)
{
	int i, j, temp;
	
	time_t stoper = time(NULL);
	
	for (i=0; i<rozmiar-1; i++)
	{
		if (time(NULL) > stoper + 60)
		{
			break;
		}
		else
		{
			for (j=0; j<rozmiar-1-i; j++)
			{
				if (*(liczba + j) > *(liczba + j + 1))
				{
					temp = *(liczba + j);
					*(liczba  + j) = *(liczba + j + 1);
					*(liczba + j + 1) = temp;
				}
			}
		}
	}
}

int main() 
{
	srand((unsigned)time(NULL));
	clock_t start, stop;
	double czas;
	int i, j, rozmiar;
	int *tab, *tab_c1;
	
	for (i=1; i<=7; i++)
	{
		rozmiar = potega(10, i);
		printf("rozmiar: 10^%d\n", i);
		
		/*TABLICA NIEMALEJACA*/
		
		tab = (int*) calloc(rozmiar, sizeof(int));
		
		for (j=0; j<rozmiar; j++)
		{
			tab[j] = j+1;
		}
		
		printf("niemalejaco:");
		
		if (i<2)
		{
			printf("\n");
			for (j=0; j<rozmiar; j++)
			{
				printf ("%d ", tab[j]);
			}
		}
		
		/*insert-sort*/
		
		if (i<6)
		{
			start = clock();
			in_sort(rozmiar, tab);
			stop = clock();
			czas = (stop - start)/(double)CLOCKS_PER_SEC;			
		}
		else
		{
			czas = 60;
		}
		
		if (czas < 60)
		{
			printf("\nINSERT-SORT: %.1f", czas);	
		}
		else
		{
			printf("\nINSERT-SORT: 60+");	
		}
		
		if (i<2)
		{
			printf("\n");
			for (j=0; j<rozmiar; j++)
			{
				printf ("%d ", tab[j]);
			}
		}
		
		/*bubble-sort*/
		
		if (i<6)
		{
			start = clock();
			bu_sort(rozmiar, tab);
			stop = clock();
			czas = (stop - start)/(double)CLOCKS_PER_SEC;			
		}
		else
		{
			czas = 60;
		}
		
		if (czas < 60)
		{
			printf("\nBUBBLE-SORT: %.1f", czas);	
		}
		else
		{
			printf("\nBUBBLE-SORT: 60+");	
		}
		
		if (i<2)
		{
			printf("\n");
			for (j=0; j<rozmiar; j++)
			{
				printf ("%d ", tab[j]);
			}
		}
		
		free(tab);
		printf ("\n");
		
		/*TABLICA LOSOWA*/
		
		tab = (int*) calloc(rozmiar, sizeof(int));
		tab_c1 = (int*) calloc(rozmiar, sizeof(int));
		
		for (j=0; j<rozmiar; j++)
		{
			tab[j] = rand() % 100 + 1;
		}
		
		/*kopiowanie tablicy*/
		
		for (j=0; j<rozmiar; j++)
		{
			tab_c1[j] = tab[j];
		}
		
		printf("losowo:");
		
		if (i<2)
		{
			printf("\n");
			for (j=0; j<rozmiar; j++)
			{
				printf ("%d ", tab[j]);
			}
		}
		
		/*insert-sort*/
		
		if (i<6)
		{
			start = clock();
			in_sort(rozmiar, tab);
			stop = clock();
			czas = (stop - start)/(double)CLOCKS_PER_SEC;			
		}
		else
		{
			czas = 60;
		}
		
		if (czas < 60)
		{
			printf("\nINSERT-SORT: %.1f", czas);	
		}
		else
		{
			printf("\nINSERT-SORT: 60+");	
		}
		
		if (i<2)
		{
			printf("\n");
			for (j=0; j<rozmiar; j++)
			{
				printf ("%d ", tab[j]);
			}
		}
		
		free(tab);
		
		/*bubble-sort*/
		
		if (i<6)
		{
			start = clock();
			bu_sort(rozmiar, tab_c1);
			stop = clock();
			czas = (stop - start)/(double)CLOCKS_PER_SEC;			
		}
		else
		{
			czas = 60;
		}
		
		if (czas < 60)
		{
			printf("\nBUBBLE-SORT: %.1f", czas);	
		}
		else
		{
			printf("\nBUBBLE-SORT: 60+");	
		}
		
		if (i<2)
		{
			printf("\n");
			for (j=0; j<rozmiar; j++)
			{
				printf ("%d ", tab_c1[j]);
			}
		}
		
		free(tab_c1);
		printf ("\n");
		
		/*TABLICA NIEROSNACA*/
				
		tab = (int*) calloc(rozmiar, sizeof(int));
		
		for (j=0; j<rozmiar; j++)
		{
			tab[j] = rozmiar - j;
		}
		
		printf("nierosnaco:");
		
		if (i<2)
		{
			printf("\n");
			for (j=0; j<rozmiar; j++)
			{
				printf ("%d ", tab[j]);
			}
		}
		
		/*insert-sort*/
		
		if (i<6)
		{
			start = clock();
			in_sort(rozmiar, tab);
			stop = clock();
			czas = (stop - start)/(double)CLOCKS_PER_SEC;			
		}
		else
		{
			czas = 60;
		}
		
		if (czas < 60)
		{
			printf("\nINSERT-SORT: %.1f", czas);	
		}
		else
		{
			printf("\nINSERT-SORT: 60+");	
		}
		
		if (i<2)
		{
			printf("\n");
			for (j=0; j<rozmiar; j++)
			{
				printf ("%d ", tab[j]);
			}
		}
		
		for (j=0; j<rozmiar; j++)
		{
			tab[j] = rozmiar - j;
		}
		
		/*bubble-sort*/
		
		if (i<6)
		{
			start = clock();
			bu_sort(rozmiar, tab);
			stop = clock();
			czas = (stop - start)/(double)CLOCKS_PER_SEC;			
		}
		else
		{
			czas = 60;
		}
		
		if (czas < 60)
		{
			printf("\nBUBBLE-SORT: %.1f", czas);	
		}
		else
		{
			printf("\nBUBBLE-SORT: 60+");	
		}
		

		if (i<2)
		{
			printf("\n");
			for (j=0; j<rozmiar; j++)
			{
				printf ("%d ", tab[j]);
			}
		}
		
		free(tab);
		printf ("\n");
	}
	return 0;
}
