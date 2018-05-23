#include "stdio.h"
#define N 20
void fun(int a[],int n)
{
	int c,d,e,temp;
	for(c=0;c<n-1;c++)
	{
		d=c;
		for(e=c+1;e<n;e++)
			if(a[d]>a[e])
				d=e;
		temp=a[c];
		a[c]=a[d];
		a[d]=temp;
	}
	//举一反三 以下使用冒泡排序法。
	/*
	for(c=1;c<n;c++)
		for(e=0;e<n-c;e++)
			if(a[e]>a[e+1])
			{
				temp=a[e];
				a[e]=a[e+1];
				a[e+1]=temp;
			}
	*/
}
void main()
{
	int a[N]={9,6,8,3,-1},i,m=5;
	printf("排序前的数据:");
	for(i=0;i<m;i++)
		printf("%d ",a[i]);
	printf("\n");
	fun(a,m);
	printf("排序后的数据:");
	for(i=0;i<m;i++)
		printf("%d ",a[i]);
	printf("\n");
}