#include "stdio.h"
double fun(int n)
{
	int a=1,b; double k=0;
	
		for(b=2;b<=n+1;b++)
		{
			k+=(1.0/(a*b)); // 也可以写成 k+=((1)/(a*b));
			a++;
		}
	return k;
}
void main()
{
	int n;
	printf("Input n:");
	scanf("%d",&n);
	printf("%f\n",fun(n));
}