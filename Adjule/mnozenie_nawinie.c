#include <stdio.h>
int main(void)
{
	int d,i,j;
	int a,b,w;
	scanf("%d", &d);
	for(i = 1; i <= d; i++)
	{
		scanf("%d %d", &a, &b);
		w = 0;
		for(j = 1; j <= b; j++)
		{
			w = w + a;
		}
		
		printf("%d\n", w);
	}
	
	return 0;
}
