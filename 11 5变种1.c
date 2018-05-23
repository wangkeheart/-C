#include "stdio.h"
int main()
{
	int a,b;
	int d;
	int c,e,f,g;
	scanf("%d%d",&a,&b);
	d=a+b;
	printf("%d+%d=%d,",a,b,d);
	c=a-b;
	printf("%d-%d=%d,",a,b,c);
	e=a*b;
	printf("%d*%d=%d,",a,b,e);
	f=a%b;
	printf("%d/%d=%d,",a,b,f);
	g=a%b;
	printf("%d%%%d=%d,",a,b,g);
	return 0;
}