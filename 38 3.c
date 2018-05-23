#include "stdio.h"
int main()
{
	int m,n,b,c,e=0,f=0;
	int a[50][50];
	printf("Input m:\n");
	scanf("%d",&m);
	printf("Input n:");
	scanf("%d",&n);
	for(b=0;b<m;b++)
	{
		for(c=0;c<n;c++)
			scanf("%d",&a[b][c]);
	}
	for(b=0;b<m;b++)
	{
		for(c=0;c<n;c++)
		{
			e+=a[b][c];
		}
		printf("sum of row %d is %d\n",f,e);
		f++;
		e=0;
	}
}