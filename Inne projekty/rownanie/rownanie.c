#include<stdio.h>
#include <math.h>
int main(void)
{
	int n,i;
	float a,b,c,x1,x2,d;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		
	 
		scanf("%f %f %f", &a, &b, &c); 
		
		if (a == 0)
		{
			if (b == 0)
			{
				if (c == 0) printf("R\n"); 
				else printf("0\n");
				
			}
			else
			{
			x1 = (-c)/b;
			printf("1 %g\n", x1);	
			} 
		}
		else 
		{
			d = b * b - 4 * a * c; /* delta */
			
			if (d < 0) printf("0\n");
			
			else if (d == 0)
			{
				x1 = (-b)/(2*a);
				printf("1 %g\n", x1);	
			}
			
			else 
			{
				x1 = ((-b) - sqrt(d)) / (2*a);
				x2 = ((-b) + sqrt(d)) / (2*a);
				
				if (x1 >= x2)
					printf("2 %g %g\n", x2, x1);
				else
					printf("2 %g %g\n", x1, x2);
				
			
				  
				
			} 
		}
		
	
	}

return 0;	
	
}
