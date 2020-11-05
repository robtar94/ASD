#include <stdio.h>
int main(void)
{

	int a, b, c, d;
	

	scanf("%d %d", &a, &b);
	
	/*metoda 1 */
	
	c = a;
	d = b;

	c = c + d;
	d = c - d;
	c = c - d;

	printf("%d %d\n", c, d);
	
	/*metoda 2 */
	c = a;
	d = b;

	c = c * d;
	d = c / d;
	c = c / d;

	printf("%d %d\n", c, d);
	
	/*metoda 3 */
	c = a;
	d = b;

	c = c ^ d;
	d = c ^ d;
	c = c ^ d;

	printf("%d %d\n", c, d);
	
	/*metoda 4 */
	c = a;
	d = b;

	c = c - d;
	d = c + d;
	c = d - c;
	
	printf("%d %d\n", c, d);
	
	/*metoda 5 */
	c = a;
	d = b;

	c = d - c;
	d = d - c;
	c = d + c;
	printf("%d %d\n", c, d);
	

	
 /*metoda 6 */
	c = a;
	d = b;

	c = c + d;
	d = d - c;
	c = c + d;
	d = (-1) * d;

	printf("%d %d\n", c, d);
	
 /*metoda 7 */ 
	c = a;
	d = b;

	c = ~(c ^ d);
	d = ~(c ^ d);
	c = ~(c ^ d);

	printf("%d %d\n", c, d);
	

	return 0; 
	
		
	
	
	
}


