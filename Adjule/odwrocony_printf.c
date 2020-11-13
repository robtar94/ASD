#include <stdio.h>
int main(void)
{
	int d,i;
	int n,r;
	scanf("%d", &d);
	for (i = 1; i <= d; i++)
	{
		scanf("%d", &n);
		do
		{
			r = n % 10;
			printf("%d ", r);
			n = n / 10;
		}while(n != 0);
		

	}
	

	
	return 0;
}
	
