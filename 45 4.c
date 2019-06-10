#include "stdio.h"
float fun(int n)
{
	int a;
	float c=1.0;
	for(a=1;a<=n;a++)
		c=c*a;
	return c;
}
void main()
{
	int m,n;
	printf("Input m and n:");
	scanf("%d%d",&m,&n);
	printf("P=%.0f\n",fun(m)/(fun(n)*fun(m-n)));  //课本此行有误
}
