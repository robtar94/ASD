#include <stdio.h>
int main (void)
{

int a,b, c, d;
int i;
for (i = 1; i <=10; i++)
{
	scanf("%d %d", &a, &b);

/* metoda 2 */

	c = a;
	d = b;
	
	c=d-c+(d=c);

	printf("%d %d\n", c, d);
	
}
	return 0;

}




	

