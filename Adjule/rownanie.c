#include <stdio.h>
int main (void)
{
	int a,b, c, i;
	float x;
	for (i = 1; i<=10; i++)
	{
		scanf("%d %d %d %f", &a, &b, &c, &x);
		
		float rown = a * (x * x) + b * x + c;
		printf("%g\n", rown); 
	
		 
		 
		
	}
	return 0;
}
