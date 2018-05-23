#include "stdio.h"
#include "stdlib.h"
#define N 5
void fun(int a[][N],int m)
{
	int b,c=0,d=N,temp;
	for(b=0;b<N;b++)
	{
		temp=c;
		for(c;c<d;c++)
			a[b][c]*=m;
		temp++;
		c=temp;
	}
	
}
void main()
{
	int a[N][N],m,i,j;
	printf("*****The array*****\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			a[i][j]=rand()%20;
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	do
	{
		m=rand()%10;
	}while(m>=3);
	printf("m = %4d\n",m);
	fun(a,m);
	printf("THE RESULT\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
}