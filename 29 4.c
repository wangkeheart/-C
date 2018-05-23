#include "stdio.h"
#include "stdlib.h"
int main()
{
	int a[20],b,c,d,e,f,g,h,i,k[20],temp,l;
	printf("Input n:");
	scanf("%d",&b);
	printf("Input %d integers:",b);
	for(c=0;c<b;c++)
	{
		scanf("%d",&a[c]);
	}
	for(d=1;d<b;d++)
		for(e=0;e<b-d;e++)
			if(a[e]>a[e+1])
			{
				temp=a[e];
				a[e]=a[e+1];
				a[e+1]=temp;
			}
	printf("Input x:");
	scanf("%d",&f);
	for(l=0;l<b;l++)
	{
		if(f==a[l])
		{
			temp=l;
			for(d=0;d<temp;d++)
			{
				k[d]=a[d];
			}
			for(d=temp+1;d<b;d++)
			{
				k[d-1]=a[d];
			}
			for(d=0;d<b-1;d++)
			{
				printf("%2d",k[d]);	
			}
			return 0;
		}
	}
	for(l=0;l<b;l++)
	{
		if(f!=a[l])
		{
			g=1;
		}
	}
	if(g==1)
	{
		a[b]=f;
	}
	h=b+1;
	for(d=1;d<h;d++)
		for(e=0;e<h-d;e++)
			if(a[e]>a[e+1])
			{
				temp=a[e];
				a[e]=a[e+1];
				a[e+1]=temp;
			}
	for(i=0;i<h;i++)
	{
		printf("%2d",a[i]);
	}
	
	return 0;
}

	