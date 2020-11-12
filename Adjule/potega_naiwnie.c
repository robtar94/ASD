#include <stdio.h>
#include <math.h>
int main(void)
{
	int d,i;
	double a,n;
	scanf("%d", &d);
	for(i = 1; i <= d; i++)
	{
		scanf("%lf %lf", &a, &n);
		printf("%d\n", (int)pow(a,n)); 
		
		
	}
	
	return 0;
}
