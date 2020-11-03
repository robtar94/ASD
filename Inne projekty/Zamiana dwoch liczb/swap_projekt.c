#include <stdio.h>
int main(void)
{

	int a, b, c, d;
	int n;
	
	scanf("%d %d", &a, &b);
	c = a;
	d = b;
	
	/* metoda 1*/
	c = (c + d) - (d = c); 
		
	printf("%d %d\n", c, d);
		
	/* metoda 2 - dobrze dziala tylko na float (testowane na adjule) */
	
	c = a;
	d = b;
	c = (d / c) * (d=c); 
		
	printf("%d %d\n", c, d);
		
	/* metoda 3 */
	
	c = a;
	d = b;
	c=d-c+(d=c); 
		
	printf("%d %d\n", c, d);
		
	/* metoda 4 */
	
	c = a;
	d = b;
	c = d * c / (d=c); 
	printf("%d %d\n", c, d);
		
	/*metoda 5 */
	c = a;
	d = b;
	c = d ^ c ^ (d=c); 
	printf("%d %d\n", c, d);
		
	/*metoda 6 */
	c = a;
	d = b;
		
	c = c + d; 
	d = c - d;  
	c = c - d;
		
	printf("%d %d\n", c, d);
		
	/*metoda 7 */
	c = a;
	d = b;
		
	c = c * d; 
	d = c / d; 
	c = c / d; 
		
	printf("%d %d\n", c, d);
		
	/*metoda 8 - dziala tylko na float (testowane na adjule) */
	c = a;
	d = b;
		
	c = c / d;
	d = c * d;
	c = d / c;  
		
	printf("%d %d\n", c, d);
		
	/*metoda 9 */
	c = a;
	d = b;
		
	c = c ^ d;
	d = c ^ d; 
	c = c ^ d;  
		
	printf("%d %d\n", c, d);

	/*metoda 10 */
	c = a;
	d = b;
		
	c = c - d;
	d = c + d;
	c = d - c; 
	printf("%d %d\n", c, d);
	
	/*metoda 11 */
	c = a;
	d = b;
		
	c = d - c; 
	d = d - c;
	c = d + c; 
	printf("%d %d\n", c, d);
	
	/*metoda 12 */
	c = a;
	d = b;
		
	c = d - ~c - 1;
	d = c + ~d + 1; 
	c = c + ~d + 1; 
	
	/*metoda 13 */
	c = a;
	d = b;
		
	c = c + d;
	d = d - c; 
	c = c + d; 
	d = (-1) * d;
	 
	printf("%d %d\n", c, d);
	
	/*metoda 14 */
	c = a;
	d = b;
		
	c = ~(c ^ d);
	d = ~(c ^ d);
	c = ~(c ^ d);
	 
	printf("%d %d\n", c, d);
	
	/*metoda 15 */
	
	n = 3;
	c = a;
	d = b;
		
	c = (c + d) - (d = c) + n - n; 

	return 0;

}

