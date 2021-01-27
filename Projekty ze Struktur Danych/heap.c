#include <stdio.h>
/* definicja struktury stosu */

typedef struct Heap
{
 int data[20];
 int length;
 int heap_size;
}Heap;

/*prototypy funkcji */

void Heap_Init(Heap *T, int *tab, int n); /* inicjalizuje stos o dlugosci n dla podanej tablicy */
int parent (int i); /* oblicza indeks rodzica */
int left (int i); /*oblicza indeks lewego dziecka */
int right (int i); /* oblicza indeks prawego dziecka */
void Max_Heapify (Heap *T, int i); /* zamienia warto�c wez�a z dzieckiem je�li w�zel jest mniejszy od dziecka --> kopiec typu MAX */
void Build_Max_Heap(Heap *T); /* Buduje kopiec poprzez wywolanie haepify w kazdym w�le */
void Write(Heap T);
int Heap_Maximum(Heap *T); /*zwraca wartosc maks */
void Write_Heap_Maximum(int max);
int Heap_Extract_Max(Heap *T);
void Write_Heap_Extract_Max(int max);
void Max_Heap_Insert(Heap *T, int key);
void Heap_Increase_Key(Heap *T, int i, int key);




/*tresc funkcji */



void Heap_Init(Heap *T, int *tab, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        T->data[i] = tab[i];
    }
    T->length = n;
}

int parent(int i)
{
    int p;

    p = (i-1)/2;
    return p;

}
int left (int i)
{
    int l;

    l = 2 * i+1;
    return l;

}

int right (int i)
{
    int r;

    r = 2 *i + 2;
    return r;

}

void Max_Heapify(Heap *T, int i)
{
   	int l, r, max, temp;
	l = left(i);
	r = right(i);
	if(l < T->heap_size && T->data[l] > T->data[i])
	{
		max = l;
	}
	else
	{
		max = i;
	}
	if(r < T->heap_size && T->data[r] > T->data[max])
	{
		max = r;
	}
	if(max != i)
	{
		temp = T->data[i];
		T->data[i] = T->data[max];
		T->data[max] = temp;
		Max_Heapify(T, max);
}
}

void Build_Max_Heap(Heap *T)
{
    int i;
    T->heap_size = T->length;
    for(i = (T->length/2)-1; i >= 0; i--)
        Max_Heapify(T, i);
}

void Write(Heap T)
{
	int i;
	for(i=0; i < T.heap_size; i++)
	{
		printf("%d ", T.data[i]);
	}
	putchar('\n');
}

int Heap_Maximum(Heap *T)
{
    return T->data[0];
}

int Heap_Extract_Max (Heap *T)
{
    int max;
    if (T->heap_size < 1)
        printf("kopiec jest pusty\n");
    else
    {
        max = T->data[0];
        T->data[0] = T->data[T->heap_size-1];
        T->heap_size = T->heap_size-1;
        Max_Heapify(T, 0);
        return max;
    }
	
return 0;
}
void Write_Heap_Extract_Max(int max)
{
    printf("%d\n", max);
}

 void Write_Heap_Maximum (int max)
 {
     printf("%d\n", max);
 }
void Max_Heap_Insert(Heap *T, int key)
{
	int i;
	i = T->heap_size;
	while(i > 0 && T->data[parent(i)] < key)
	{
		T->data[i] = T->data[parent(i)];
		i = parent(i);
	}
	T->data[i] = key;
	T->heap_size = T->heap_size + 1;
}


void Heap_Increase_Key(Heap *T, int i, int key)
{
   	i--;
	T -> data[i] = key;
	Build_Max_Heap(T);


}















/* main */
int main (void)
{
    Heap T;
     int tab[10] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
     Heap_Init(&T,tab,10);
     Build_Max_Heap(&T);
     Write(T);
     Max_Heap_Insert(&T, 15);
     Write(T);
     Write_Heap_Maximum(Heap_Maximum(&T));
     Write(T);
     Write_Heap_Extract_Max(Heap_Extract_Max(&T));
     Write(T);
     Heap_Increase_Key(&T,4,19);
     Write(T);



    return 0;
}
