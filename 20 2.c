#include "stdio.h"
#include "math.h"
int main()
{
	double x;
	double b;
	printf("ÇëÊäÈëXµÄÖµ:");
	scanf("%lf",&x);
	if(x>=0)
	b=sqrt(x);
	else if(x<0)
	b=(x+1)*(x+1)+2*x+1/x;
	printf("%.2lf",b);
	return 0;
}