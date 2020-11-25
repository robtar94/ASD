#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    int n, i;
    void liniowe(float b, float c);
    void kwadratowe(float a, float b, float c);
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
    {
        scanf ("%f %f %f", &a, &b, &c);

    if (a != 0) kwadratowe(a,b,c);
    else liniowe(b,c);
    }

    return 0;
}

void liniowe (float b, float c)
{
    float x1;
    if ((b == 0) && (c == 0))
    {
            printf("%c\n", 'R');
    }
    else if((b == 0) && (c!= 0))
    {
        printf("%d\n", 0);
    }
    else if ((b!= 0) && (c!=0))
    {
        x1 = (-c)/b;
        printf("%d %g\n", 1, x1);
    }

    else if((b!=0) && (c==0))
    {
        x1 = 0;
        printf("%d %g\n", 1, x1);
    }

}

void kwadratowe (float a, float b, float c)
{
    float d,p,q, x1,x2;
    p = b/a;
    q = c/a;
    if((b== 0) && (c == 0))
    {
        x1 = 0;
        printf("%d %g\n", 1, x1);
    }
    else
    {

    d = p*p - 4 *q;
    if(d >=0)
    {
        if(d == 0)
        {
            x1 = (-b)/(2*a);
            x2 = x1;
            printf("%d %g\n",1,x1);
        }
        else
        {
            d = sqrt(d);
            if (p < 0)
            {
			
            	x1 = (-p+d)/2;
            	x2 = q/x1;
        	}
        	else
        	{
        		x2 = (-p - d)/2;
				x1 = q/x2;
			}

            if(x1 > x2) 
            {
                printf("%d %g %g\n", 2,x2,x1);
            }
            else
            {
                printf("%d %g %g\n", 2,x1,x2);  
            }

        }
    }
    else
    {
        printf("%d\n",0);
    }

    }
}
