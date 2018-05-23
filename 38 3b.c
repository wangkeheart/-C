#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"
int main()
{
	int b,c,d,e,f=0,g=1,a[7][7],h=0,sum=0;
	printf("Input m:");
	scanf("%d",&b);
	printf("Input n:");
	scanf("%d",&c);
	if(b>6||b<1||c>6||c<1)
	{
		printf("ERROR!!");
		return 0;
	}
	for(d=0;d<b;d++)
		for(e=0;e<c;e++)
		{
			scanf("%d",&a[d][e]);
			f++;
		}

	for(d=0;d<g;d++)
	{
		
		for(e=0;e<c;e++)
		{
			sum+=a[d][e];
		}
		printf("sum of row %d is %d\n",h,sum);
		g++;
		h++;
		sum=0;
		if(g>b)
			break;
	}
	return 0;
}