#include "stdio.h"
#include "math.h"
int main()
{
	double a,b,c,d,e,f,g,m,n;
	int i,j,k;
	scanf("%lf%lf%lf",&a,&b,&c);
	i=(int)a;
	j=(int)b;
	k=(int)c;
	if(a>0&&a<1)
	{
		i++;
	}
	if(b>0&&b<1)
	{
		j++;
	}
	if(c>0&&c<1)
	{
		k++;
	}
	
	d=b*b-4*a*c;
	f=((-b+sqrt(d))/(2*a));
	g=((-b-sqrt(d))/(2*a));
	m=(sqrt(-d)/(2*a));
	n=(-b/2*a);
	switch(i)
	{
		case 0:
		switch(j)
		{
			case 0:
				switch(k)
				{
					case 0:printf("Zero Equation");return 0;
					default:printf("Not An Equation");return 0;
				}
			default:
				e=-c/b;
				printf("%.2lf",e);return 0;	
		}
		default:
			if(d>0)
			{
				printf("%.2lf\n%.2lf",f,g);
				break;
			}
			else if(d==0)
			{
				printf("%.2lf",f);
				break;
			}
			else if(d<0)
			{
				
				printf("%.2lf+%.2lfi\n%.2lf-%.2lfi",n,m,n,m);
				break;
			}
	}

	return 0;
}
