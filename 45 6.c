#include "stdio.h"
#include "math.h"
int fun(n)
{
	int h,i,k=1;
	for(h=2;h<n;h++)
	{
		for(i=2;i<n;i++)
		{
			if((h*i)==n)
			{
				k+=(int)(pow(h,2)+pow(i,2));
			}
		}
	}
	return (k=k/2);

}
int main()
{
	int n;
	int fun(n);
	scanf("%d",&n);
	printf("sum=%d",fun(n));
	return 0;

}