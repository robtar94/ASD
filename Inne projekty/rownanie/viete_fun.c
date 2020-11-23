#include <stdio.h>
# include <math.h>
int main (void)
{
	/* prototypy funkcji */
	
	void liniowe (float b, float c);
	void kwadratowe (float a, float b, float c);
	
	float a,b,c;
	float x0;
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%f %f %f", &a, &b, &c);
		if(a == 0)
		liniowe(b,c);
		else if (a != 0)
		kwadratowe(a,b,c);
				
		 
   }
	return 0;
	
}



void liniowe (float b, float c)
{
	float x0;
	if ((b == 0) &&  (c== 0))
	{
		printf("R\n");
	}
	else if ( b == 0 && c != 0)
	{
		printf("0\n");
	}
	else if (b != 0)
	{
		x0 = (-c)/(2*b);
		printf("1 %g\n", x0);
	}
	
	
}

void kwadratowe (float a, float b, float c)
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
		
		else printf("%d %g x2: %g\n", 2, x1, x2);
	}
}
