#include <stdio.h>
int main(void)
{
	double a,b,c,d;
	int n;
	scanf("%lf %lf", &a,&b);
	
	c = a;
	d = b;
	
	c = (c + d) - (d = c);
	
	printf("%g %g\n", c, d);
	
	c = a;
	d = b;
	
	c = d / c * (d=c);
	
	printf("%g %g\n", c,d);
	
	c = a;
	d = b;
	
	c=d-c+(d=c);
	
	printf("%g %g\n", c,d);
	
	c = a;
	d = b;
	
	c = d * c / (d=c);
	
	printf("%g %g\n", c,d);
	
	c = a;
	d = b;
	
	c = (int)d ^ (int)c ^ (int)(d=c);
	
	printf("%d %d\n", (int)c,(int)d);

	c = a;
	d = b;
	
	c = c + d;
	d = c - d;
	c = c - d;
	
	printf("%g %g\n", c,d);
	
	
	c = a;
	d = b;
	
	c = c * d;
	d = c / d;
	c = c / d;
	
	printf("%g %g\n", c,d);
	
	
	c = a;
	d = b;
	
	c = c / d;
	d = c * d;
	c = d / c;
	
	printf("%g %g\n", c,d);
	
	
	c = a;
	d = b;
	
	c = (int)c ^ (int)d;
	d = (int)c ^ (int)d;
	c = (int)c ^ (int)d;
	
	printf("%d %d\n", (int)c, (int)d);
	
	
	c = a;
	d = b;
	
	c = c - d;
	d = c + d;
	c = d - c;
	
	printf("%g %g\n", c,d);
	
	
	c = a;
	d = b;
	
	c = d - c;
	d = d - c;
	c = d + c;
	
	printf("%g %g\n", c,d);
	
	c = a;
	d = b;
	
	c = (int)d - ~((int)c) - 1;
	d = (int)c + ~((int)d) + 1; 
	c = (int)c + ~((int)d) + 1;
	
	printf("%d %d\n", (int)c, (int)d);
	
	
	c = a;
	d = b;
	
	c = c + d; 
	d = d - c; 
	c = c + d; 
	d = (-1) * d; 
	
	printf("%g %g\n", c,d);
	
	
	c = a;
	d = b;
	
	c = ~((int)c ^ (int)d);
	d = ~((int)c ^ (int)d);
	c = ~((int)c ^ (int)d);
	
	printf("%d %d\n", (int)c, (int)d);
	
	
	c = a;
	d = b;
	n = 5;
	
	c = (c + d) - (d = c) + n - n;
	
	printf("%g %g\n", c,d);	
	
	return 0;
	
}
