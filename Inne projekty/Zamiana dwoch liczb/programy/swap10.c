#include <stdio.h>
int main (void)
{

int a,b, c, d;
int i;
for (i = 1; i <=10; i++)
{
	scanf("%d %d", &a, &b);
	c = a;
	d = b;
	
	c = d - c; 
	d = d - c;
	c = d + c;
	
	printf("%d %d\n", c, d);
	
}
return 0;

}

