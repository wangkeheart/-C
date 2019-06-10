#include "stdio.h"
#define pi 10
int main()
{
	int a[pi],c,d,e,f=0,h;
	float g;
	printf("请输入评委的评分:");
	for(c=0;c<pi;c++)
	{
		scanf("%d",&a[c]);
	}
	for(c=1;c<10;c++)
		for(h=0;h<10-c;h++)
			if(a[h]<a[h+1])
			{
				e=a[h];
				a[h]=a[h+1];
				a[h+1]=e;
			}
	printf("从高分到低分:");
	for(c=0;c<pi;c++)
	{
		printf("%3d",a[c]);
	}
	for(d=1;d<pi-1;d++)
	{	
		f=f+a[d];
	}
	g=(float)f/8;
	printf("\n");
	printf("该选手最后得分为:%.2f",g);
	printf("\n");
	return 0;
}
		
