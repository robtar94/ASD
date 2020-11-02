#include <stdio.h>
int main (void)
{
	float a,b,c,d;
	int i;
	for (i = 1; i <=10; i++)
	{
		scanf ("%f %f", &a, &b);
		c = a;
		d = b;
		
		
		c = d / c * (d=c);
		
		printf("%g %g\n", c, d);
		
		
		
		
		
	}
	
	return 0;
	
	
	
	
}

