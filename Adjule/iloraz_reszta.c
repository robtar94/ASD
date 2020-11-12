#include <stdio.h>
int main(void)
{
	int i,d;
	int a,b,q,r,n;
	scanf("%d", &d);
	for (i = 1; i <= d; i++)
	{
		scanf("%d %d", &a, &b);
		r = a;
		q = 0;
		do
		{
			r = r - b;
			q = q + 1;
			
		}while(r >= b);
		
	printf("%d %d\n", q,r);
		
	}
	return 0;
	
}
