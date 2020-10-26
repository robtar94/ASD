/* wersja ze zmienna tymczasowa */
#include <stdio.h>
int main (void)
{
	float a, b, temp;
	int i;
	
	for (i = 1; i <= 10; i++)
	{
		scanf("%f %f", &a, &b);
		
		
		/* zamiana */
		temp = a;
		a = b;
		b = temp;
    	
    	printf("%g %g\n", a, b);
 
	}
	
	return 0;
}
