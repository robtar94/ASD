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
	
	c = d - ~c - 1;
	d = c + ~d + 1; 
	c = c + ~d + 1;
	
	
	printf("%d %d\n", c, d);
	
}
return 0;

}

