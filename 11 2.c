//课本11页 第二小题

#include "stdio.h"
#include "stdlib.h" 
void main()
{
	double a,b,c,sum;
	printf("Enter three double nums:\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	sum=a+b+c;
	printf("average=%lf\n",sum/3);
}
