#include <stdio.h>
int main(void)
{
	int i,d;
	int n;
	scanf("%d", &d);
	for (i = 1; i <= d;i++)
	{
		scanf("%d", &n);
		do
		{
			n = n - 2;
		 } while (n != 0 && n != 1);
		 
if (n == 0)
	printf("T\n");
else
	printf("N\n");
		 
		
	}
	return 0;
	
}
