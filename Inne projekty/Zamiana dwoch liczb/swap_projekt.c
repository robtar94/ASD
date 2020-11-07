#include <stdio.h>
int main(void)
{
	double a,b,c,d;
	scanf("%lf %lf", &a,&b);
	
	printf("Metoda 1:\n");
	
	c = a;
	d = b;
	c = (c + d) - (d = c);
	printf("%g %g\n", c, d);
	
	printf("Metoda 2:\n");
	
	c = a;
	d = b;
	c = d / c * (d=c);
	printf("%g %g\n", c,d);
	
	printf("Metoda 3:\n");
	c = d;
	d = b;
	c=d-c+(d=c);
	printf("%g %g\n", c,d);
	
	printf("Metoda 4\n");
	c = d;
	d = b;
	c = d * c / (d=c);
	printf("%g %g\n", c,d);
	
	
	
	
	
	
	return 0;
	
}
