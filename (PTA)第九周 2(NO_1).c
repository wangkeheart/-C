#include "stdio.h"
#include "math.h"
int main()
{
	double a,b,c,d,e,f,g,h;
	scanf("%lf%lf%lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(a==0&&b==0&&c==0)
	{
		printf("Zero Equation");
		return 0;
	}
	if(a==0&&b==0&&c!=0)
	{
		printf("Not An Equation");
		return 0;
	}
	else
	{
		if(a==0)
		{
			e=-c/b;
			printf("%.2lf",e);
		}
		else if(d>0)
		{
			e=(-b+sqrt(d))/(2*a);
			f=(-b-sqrt(d))/(2*a);
			printf("%.2lf\n%.2lf",e,f);
		}
		else if(d==0)
		{
			e=(-b+sqrt(d))/(2*a);
			printf("%.2lf",e);
		}
		else if(d<0)
		{
			g=((sqrt(-d))/(2*a));
			h=-b/2*a;
			printf("%.2lf+%.2lfi\n%.2lf-%.2lfi",h,g,h,g);
		}
	}
	return 0;
}