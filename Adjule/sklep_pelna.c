#include <stdio.h>
int main()
{
	float a, suma;
	suma = 0;
	do
	{
		scanf("%f", &a);
		if (a > 0)
		suma = suma + a;
	
	} while (a != 0);
	printf("%g", suma);
	return 0;
	
}
