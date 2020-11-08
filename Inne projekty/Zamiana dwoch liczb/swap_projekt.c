#include <stdio.h>
int main(void)
{
	double a,b,c,d;
	int n;
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
	c = a;
	d = b;
	
	c=d-c+(d=c);
	
	printf("%g %g\n", c,d);
	
	printf("Metoda 4\n");
	
	c = a;
	d = b;
	
	c = d * c / (d=c);
	
	printf("%g %g\n", c,d);
	
	printf("Metoda 5\n");
	
	c = a;
	d = b;
	
	c = (int)d ^ (int)c ^ (int)(d=c);
	
	printf("%d %d\n", (int)c,(int)d);
	
	printf("Metoda 6\n");
	c = a;
	d = b;
	
	c = c + d;
	d = c - d;
	c = c - d;
	
	printf("%g %g\n", c,d);
	
	printf("Metoda 7\n");
	
	c = a;
	d = b;
	
	c = c * d;
	d = c / d;
	c = c / d;
	
	printf("%g %g\n", c,d);
	
	printf("Metoda 8\n");
	
	c = a;
	d = b;
	
	c = c / d;
	d = c * d;
	c = d / c;
	
	printf("%g %g\n", c,d);
	
	printf("Metoda 9\n");
	
	c = a;
	d = b;
	
	c = (int)c ^ (int)d;
	d = (int)c ^ (int)d;
	c = (int)c ^ (int)d;
	
	printf("%d %d\n", (int)c, (int)d);
	
	printf("Metoda 10\n");
	
	c = a;
	d = b;
	
	c = c - d;
	d = c + d;
	c = d - c;
	
	printf("%g %g\n", c,d);
	
	printf("Metoda 11\n");
	
	c = a;
	d = b;
	
	c = d - c;
	d = d - c;
	c = d + c;
	
	printf("%g %g\n", c,d);
	
	printf("Metoda 12\n");
	
	c = a;
	d = b;
	
	c = (int)d - ~((int)c) - 1;
	d = (int)c + ~((int)d) + 1; 
	c = (int)c + ~((int)d) + 1;
	
	printf("%d %d\n", (int)c, (int)d);
	
	printf("Metoda 13\n");
	
	c = a;
	d = b;
	
	c = c + d; 
	d = d - c; 
	c = c + d; 
	d = (-1) * d; 
	
	printf("%g %g\n", c,d);
	
	printf("Metoda 14\n");
	
	c = a;
	d = b;
	
	c = ~((int)c ^ (int)d);
	d = ~((int)c ^ (int)d);
	c = ~((int)c ^ (int)d);
	
	printf("%d %d\n", (int)c, (int)d);
	
	printf("Metoda 15\n");
	
	c = a;
	d = b;
	n = 5;
	
	c = (c + d) - (d = c) + n - n;
	printf("%g %g\n", c,d);	
	
	return 0;
	
}
