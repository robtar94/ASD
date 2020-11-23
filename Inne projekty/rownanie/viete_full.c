#include <stdio.h>
# include <math.h>
int main (void)
{
	/* prototypy funkcji */
	
	void liniowe (float a, float b, float c);
	void kwadratowe (float a, float b, float c);
	void nieoznaczone (float a, float b, float c);
	
	float a,b,c;
	float x0;
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%f %f %f", &a, &b, &c);
		
		if ((a == 0 && b == 0 && c == 0) || (a == 0 && b == 0 && c != 0))
			nieoznaczone(a,b,c);
		else if(a == 0 && b != 0)
		liniowe(a,b,c);
		else
		kwadratowe(a,b,c);	
				
		 
   }
	return 0;
	
}
void nieoznaczone (float a, float b, float c)
{
	
	
	if (a==0 && b==0 && c==0) {
		printf("%c\n", 'R');
		
	}
	
	if (a==0 && b==0 && c!=0) {
		printf("%d\n", 0);
		
	}
			
}


void liniowe (float a, float b, float c)
{
	float x0;
	if ((a == 0) &&  (c!= 0))
	{
		x0 = (-c)/(b);
		printf("%d %g\n", 1, x0);
	}
	else if (c == 0)
	{
		c = 0;
		x0 = c/b;
		printf("%d %g\n", 1, x0);
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
		if (x1 >= x2) printf("%d  x2: %g  x1: %g\n", 2, x2, x1);
		
		else printf("%d x1: %g x2: %g\n", 2, x1, x2);
	}
}
