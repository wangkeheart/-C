#include "stdio.h"
#include "math.h"
#include "stdlib.h"
int ttp1(int a[],int b,int c[],int d,int *p,int *q);
int ttp2(int x,int *p,int b);
int main(int argc,char argv[])
{
	int a[30000],b[30000],c[30000];
	int d,e,f,h;
	scanf("%d",&d);
	for(e=0;e<d;e++) 
		scanf("%d",&a[e]);
	scanf("%d",&f);
	for(e=0;e<f;e++) 
		scanf("%d",&b[e]);
	if(ttp1(a,d,b,f,c,&h)==1)
	{
		for(d=0;d<h-1;d++)
			printf("%d ",c[d]);
		printf("%d",c[h-1]);
	}
	return 0;
}
int ttp1(int a[],int b,int c[],int d,int *p,int *q)//双向检索，同时调用。
{
	int e,f,i=0,j=0,m=0,n=0;
	//第一段检索
	for(e=0;e<b;e++)
	{
		for(f=0;f<d;f++)
			if(a[e]==c[f])
			{
				m=1;
				break;
			}
		if((m==0))
		{
			if((ttp2(a[e],p,i))==0)
			{
				*(p+i)=a[e];
				j=1;
				i++;
			}
		}
		m=0;
	}
	//第二段检索。
	for(f=0;f<d;f++)
	{
		for(e=0;e<b;e++)
			if(a[e]==c[f])
			{
				m=1;
				break;
			}
		if(m==0)
		{
			if(ttp2(c[f],p,i)==0)
			{
				*(p+i)=c[f];
				j=1;
				i++;
			}
		}
		m=0;
	}
	*q=i;
	return j;
}
int ttp2(int x,int *p,int b)//内部检索。
{
	int a,g=0;
	for(a=0;a<b;a++)
		if(*(p+a)==x)
		{
			g=1;
			break;
		}
	return g;
}
/*
7-7 找出不是两个数组共有的元素（20 分）
给定两个整型数组，本题要求找出不是两者共有的元素。

输入格式:

输入分别在两行中给出两个整型数组，每行先给出正整数N（≤20），随后是N个整数，其间以空格分隔。

输出格式:

在一行中按照数字给出的顺序输出不是两数组共有的元素，数字间以空格分隔，但行末不得有多余的空格。题目保证至少存在一个这样的数字。同一数字不重复输出。

输入样例:

10 3 -5 2 8 0 3 5 -15 9 100
11 6 4 8 2 6 -5 9 0 100 8 1
输出样例:

3 5 -15 6 4 1
*/
