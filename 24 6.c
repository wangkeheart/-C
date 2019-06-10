#include "stdio.h"
int main()
{
	int c,b;
	double a,d=0;
	a=1.1;
	printf("请输入n：");
	scanf("%d",&b);
	for(c=1;c<=b;c++)
	{
		d=d+c*a;
	}
	printf("%.1lf",d);
	return 0;
}
