#include <stdio.h>
int main (void)
{
	int d, i;
	int n,b,r;
	scanf("%d", &d);
	b = 1;
	
	for (i = 1; i <= d; i++)
	{
	scanf("%d", &n);	
	do
	{
		b = b * 10;
	}while(10 * b <= n);
	do
	{
		r = n % b;
		b = b / 10;
	}while(b != 1);
printf("%d\n",n);
		
		
	}
	return 0;
}
