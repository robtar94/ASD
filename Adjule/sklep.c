#include <stdio.h>
int main (void)
{
	int n, i;
	float x, suma;
	suma = 0;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%f", &x);
		suma = suma + x;
	}
	
	printf("%g\n", suma);
	
	return 0;
	
	
}
