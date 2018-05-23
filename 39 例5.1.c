#include "stdio.h"
int main(void)
{
	int i,n;
	double fact(int n);
	double sum=0;
	printf("Input n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum=sum+fact(i);
	printf("1!+2!+бн+%d!=%f\n",n,sum);
	return 0;
}
double fact(int n)
{
	int i;
	double result=1;
	for(i=1;i<=n;i++)
		result*=i;
	return result;
}