#include <stdio.h>
#include <math.h>

int main(){
	
	int n;
	float d,x1,x2,a,b,c;
	scanf("%d", &n);
	
	while(n > 0){
		scanf("%f %f %f", &a, &b, &c);
	
		if(a == 0)
		{
			if((b == 0)&&(c == 0))
			{
				printf("R\n");
			}else if((b!= 0)&&(c!= 0))
			{
				x1 = (-c)/b;
				printf("%d %g\n",1,x1);
			}else if((b !=0)&&(c==0))
			{
				x1 = 0;
				printf("%d %g\n",1,x1);
			}else
			{
				printf("%d\n",0);
			}
			
		}else
		{
			if((b!=0))
			{
				if(c == 0)
				{
					x1 = 0;
					x2 = (-b)/a;
					if(x2 > 0)
					{
						printf("%d %g %g\n",2,x1,x2);	
					}else
					{
						printf("%d %g %g\n",2,x2,x1);	
					}

				}else
				{
					d = b*b - 4*a*c;
					if(d >=0)
					{
						if(d == 0)
						{
							x1 = (-b)/(2*a);
							x2 = x1;
							printf("%d %g\n",1,x1);
						}else
						{
							d = sqrt(d);
							a = 2*a;
							x1 = (-b+d)/a;
							x2 = (-b-d)/a;
							
							if(x1 > x2) 
							{
								printf("%d %g %g\n", 2,x2,x1);
							}else
							{
								printf("%d %g %g\n", 2,x1,x2);	
							}

						}
					}else
					{
						printf("%d\n",0);
					}
				}
			}else
			{
				x1 = 0;
				printf("%d %g\n",1,x1);	
			}
			
		}
		
		n = n-1;
		}	
	return 0;
}
