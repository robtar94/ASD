#include <stdio.h>
#include <math.h>
int main (void)
{
float a,b,c;
void viete(float a, float b, float c);
scanf ("%f %f %f", &a, &b, &c);
viete(a,b,c);
return 0;	
}

void viete(float a, float b, float c)
{
	float p,q,x1,x2,d;
	p = b/a;
	q = c/a;
	d = (p * p)- (4 * q);
	if (d >= 0)
	{
		d = sqrt(d);
		if (p < 0)
		{
			x1 = (-p + d)/2;
			x2 = q/x1;
			
		}
		else
		{
			x2 = (-p - d)/2;
			x1 = q/x2;
		}
		if (x1 >= x2) printf("%d %g %g\n", 2, x2, x1);
		
		else printf("%d %g %g\n", 2, x1, x2);
	}
	
}
