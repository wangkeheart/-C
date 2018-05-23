#include "stdio.h"
#include "math.h"
void main()
{
	int x,c1,c3,y,c2;
	scanf("%d",&x);
	y=abs(x);
	c1=y/100;
	c2=x/10%10;
	c3=y%10;
	y=c3*100+c2*10+c1;
	if(x>=0)
	printf("%d\n",y);
	else
	printf("%d\n",-y);
}