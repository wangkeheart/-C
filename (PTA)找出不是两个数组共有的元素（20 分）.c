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
int ttp1(int a[],int b,int c[],int d,int *p,int *q)//˫�������ͬʱ���á�
{
	int e,f,i=0,j=0,m=0,n=0;
	//��һ�μ���
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
	//�ڶ��μ�����
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
int ttp2(int x,int *p,int b)//�ڲ�������
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
7-7 �ҳ������������鹲�е�Ԫ�أ�20 �֣�
���������������飬����Ҫ���ҳ��������߹��е�Ԫ�ء�

�����ʽ:

����ֱ��������и��������������飬ÿ���ȸ���������N����20���������N������������Կո�ָ���

�����ʽ:

��һ���а������ָ�����˳��������������鹲�е�Ԫ�أ����ּ��Կո�ָ�������ĩ�����ж���Ŀո���Ŀ��֤���ٴ���һ�����������֡�ͬһ���ֲ��ظ������

��������:

10 3 -5 2 8 0 3 5 -15 9 100
11 6 4 8 2 6 -5 9 0 100 8 1
�������:

3 5 -15 6 4 1
*/
