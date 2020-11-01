#include <stdio.h>
#include <math.h>
int main(void)
{

	int a, b, c, d;
	
	
	
		scanf("%d %d", &a, &b);
		c = a;
		d = b;
		 /* metoda 1*/

		c = (c + d) - (d = c); /* tutaj jest ostrzezenie, ale jego usuniecie wymaga uzycia zmiennej pomocniczej co podwaza sens tej metody */
		
		printf("%d %d\n", c, d);
		
		/* metoda 2 - dobrze dziala na float (tetsowane na adjule) */
		scanf("%d %d", &a, &b);
		c = a;
		 d = b;
		c = (d / c) * (d=c); /* tutaj jest ostrzezenie, ale jego usuniecie wymaga uzycia zmiennej pomocniczej co podwaza sens tej metody */
		
		printf("%d %d\n", c, d);
		
		/* metoda 3 */
		scanf("%d %d", &a, &b);
		c = a;
		d = b;
		c=d-c+(d=c); /* tutaj jest ostrzezenie, ale jego usuniecie wymaga uzycia zmiennej pomocniczej co podwaza sens tej metody */
		
		printf("%d %d\n", c, d);
		
		/* metoda 4 */
		scanf("%d %d", &a, &b);
		c = a;
		d = b;
		c = d * c / (d=c); /* tutaj jest ostrzezenie, ale jego usuniecie wymaga uzycia zmiennej pomocniczej co podwaza sens tej metody */
		printf("%d %d\n", c, d);
		
		/*metoda 5 */
		scanf ("%d %d", &a, &b);
		c = a;
		d = b;
		c = d ^ c ^ (d=c); /* tutaj jest ostrzezenie, ale jego usuniecie wymaga uzycia zmiennej pomocniczej co podwaza sens tej metody */
		printf("%d %d\n", c, d);
		
		/*metoda 6 */
		scanf ("%d %d", &a, &b);
		c = a;
		d = b;
		
		c = c + d; 
	    d = c - d;  
	    c = c - d;
		
		printf("%d %d\n", c, d);
		
		/*metoda 7 */
		scanf ("%d %d", &a, &b);
		c = a;
		d = b;
		
		c = c * d; 
	    d = c / d; 
	    c = c / d; 
		
		printf("%d %d\n", c, d);
		
	/*metoda 8 */
		scanf ("%d %d", &a, &b);
		c = a;
		d = b;
		
		c = c / d;
		d = c * d;
		c = d / c;  
		
		printf("%d %d\n", c, d);
		
	/*metoda 9 */
		scanf ("%d %d", &a, &b);
		c = a;
		d = b;
		
		c = c ^ d;
		d = c ^ d; 
		c = c ^ d;  
		
		printf("%d %d\n", c, d);

	/*metoda 10 */
	scanf ("%d %d", &a, &b);
	c = a;
	d = b;
		
	c = c - d;
	d = c + d;
	c = d - c; 
	printf("%d %d\n", c, d);
	
	/*metoda 11 */
	scanf ("%d %d", &a, &b);
	c = a;
	d = b;
		
	c = d - c; 
	d = d - c;
	c = d + c; 
	printf("%d %d\n", c, d);
	
	/*metoda 12 */
	scanf ("%d %d", &a, &b);
	c = a;
	d = b;
		
	c = c*c + d*d; 
	d = sqrt(c - d*d); 
	c = sqrt(c - d*d); 
	printf("%d %d\n", c, d);
	
    /*metoda 12 */
	scanf ("%d %d", &a, &b);
	c = a;
	d = b;
		
	c = c*c + d*d; 
	d = sqrt(c - d*d); 
	c = sqrt(c - d*d); 
	printf("%d %d\n", c, d);
	
	/*metoda 13 */
	scanf ("%d %d", &a, &b);
	c = a;
	d = b;
		
	c = c + d;
	d = d - c; 
	c = c + d; 
	d = (-1) * d;
	 
	printf("%d %d\n", c, d);
	
	/*metoda 14 */
	scanf ("%d %d", &a, &b);
	c = a;
	d = b;
		
	c = ~(c ^ d);
	d = ~(c ^ d);
	c = ~(c ^ d);
	 
	printf("%d %d\n", c, d);
	
	/*metoda 15 */
	int n;
	n = 3;
	scanf ("%d %d", &a, &b);
	c = a;
	d = b;
		
	c = (c + d) - (d = c) + n - n;

	return 0;

}

