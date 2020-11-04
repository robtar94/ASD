#include <stdio.h>
int main (void)
{

int a,b, c, d;
int i;
for (i = 1; i <=10; i++)
{
	int n;
	n = 3;
	scanf("%d %d", &a, &b);
	c = a;
	d = b;
	
	c = (c + d) - (d = c) + n - n;
	
	
	printf("%d %d\n", c, d);
	
}
return 0;

}

