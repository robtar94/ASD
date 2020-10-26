#include <stdio.h>
/* wersja bez zmiennej tymczasowej, sposob 2. */
int main (void)
{
	float a, b;
	int i;
	
	for (i = 1; i <= 10; i++)
	{
		scanf("%f %f", &a, &b);
		
		
		
		a = a + b; 
    	b = a - b; 
    	a = a - b; 
    	
    	printf("%g %g\n", a, b);
 
	}
	
	return 0;
}
