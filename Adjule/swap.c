#include <stdio.h>
int main (void)
{
	float a,b,n;
	int i;
	n = 3;
	for (i = 1; i <=10; i++)
	{
		scanf ("%f %f", &a, &b);
		
		
		a = (a + b) - (b = a) + n - n;
		
		printf("%.0f %.0f\n", a, b);
		
		
		
		
		
	}
	
	return 0;
	
	
	
	
}
