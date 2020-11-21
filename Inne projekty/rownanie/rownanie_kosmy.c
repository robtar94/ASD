#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a, b, c, d, x1, x2;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	if (a==0 && b==0 && c==0) {
		printf("%c", 'R');
		return 0;
	}
	
	if (a==0 && b==0 && c!=0) {
		printf("%d", 0);
		return 0;
	}
	
	if (a==0 && b!=0) {
		x1 = -c/b;
		if (x1 == 0) {
				x1 = 0;
			}
		printf("%d %g", 1, x1);
		return 0;
	}
	
	d=(b*b)-(4*a*c);

	if (d>0) {
		d = sqrt(d);
		x1 = (-b-d)/(2*a);
		x2 = (-b+d)/(2*a);
		if (x1 > x2) {
			printf("%d %g %g", 2, x2, x1);	
		} else {
			printf("%d %g %g", 2, x1, x2);
		}
		
	} else {
		if (d==0) {
			x1 = (b*-1)/(2*a);
			if (x1 == 0) {
				x1 = 0;
			}
			printf("%d %g", 1, x1);
		} else {
			printf("%d", 0);		
		}
	}

	return 0;		
}
