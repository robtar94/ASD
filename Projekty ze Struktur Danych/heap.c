#include <stdio.h>
#include <stdlib.h>

/*struktura kopca */

typedef struct Heap
{
int data[20];
int length;
int heap_size;
}Heap;





/*prototypy funkcji */
void swap(int *x, int *y);
void Heap_init(Heap T,  int tab[], int tab_length);
int parent(int i);
int left(int i);
int right(int i);
void Max_Heapify(Heap T, int i);
void Build_Max_Heap(Heap T);
int Heap_Maximum(Heap T);
int Heap_Extract_Max(Heap T);
void Heap_Increase_Key(Heap T, int i, int key);
void Max_Heap_Insert(Heap T, int key);

/*tresc funkcji */

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

//-*****************************/*


void Heap_init(Heap T,  int tab[], int tab_length) /* wypelnia kopiec wartosciami z tablicy tab */
{
    int i;
    for(i=1; i < tab_length; i++)
    {
        T.data[i]=tab[i-1];
        T.length = tab_length;
        T.heap_size = tab_length;


    }

}
int parent (int i)
{
    return i/2;
}

int left(int i)
{
    return 2 * i;
}

int right(int i)
{
    return 2 * i + 1;

}

void Max_Heapify(Heap T, int i) /* przywracanie wlasnosci kopca typu max */
{
    int l, r, largest;
    l = left(i);
    r = right(i);
    if ((l <=  T.heap_size) && (T.data[l] > T.data[i]))
    {
        largest = l;
    }
    else
    {
        largest = i;

    }
    if ((r <= T.heap_size) && (T.data[r] > T.data[largest]))
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(&T.data[i],&T.data[largest]);
        Max_Heapify(T,largest);
    }



}

void Build_Max_Heap(Heap T)
{
    int i;
    T.heap_size = T.length;
    for (i = T.length/2; i >= 1; i--)
    {
        Max_Heapify(T,i);
    }



}



int main(void)
{
    return 0;
}
