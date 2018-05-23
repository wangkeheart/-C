#include "stdio.h"
void fun(int a[],int b[],int n)
{
	int c,d,g=0,h=0;
	for(d=0;d<6;d++)
		b[d]=0;
	//注释部分为课本答法。
	/*
	int i;
	for(i=0;i<6;i++)
		b[i]=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<100)             b[0]++;
		if(a[i]>=100&&a[i]<199)  b[1]++;
		if(a[i]>=200&&a[i]<299)  b[2]++;
		if(a[i]>=300&&a[i]<399)  b[3]++;
		if(a[i]>=400&&a[i]<499)  b[4]++;
		if(a[i]>500)             b[5]++; //个人觉得此条不妥，因为把 x99 排除在外了。
	*/
	for(d=0;d<n;d++)
	{
		c=a[h]/100;
		switch(c)
		{
			case 0:b[0]++;break;
			case 1:b[1]++;break;
			case 2:b[2]++;break;
			case 3:b[3]++;break;
			case 4:b[4]++;break;
			case 5:b[5]++;break;
			default:b[5]++;break;
		}
		h++;
	}
	h=0;
}
void main()
{
	int i,a[100]={90,180,270,380,590,530,140,750,380},b[6];
	fun(a,b,9);
	printf("The result is:");
	for(i=0;i<6;i++)
		printf("%d ",b[i]);
	printf("\n");
}