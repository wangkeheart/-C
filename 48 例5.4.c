#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#define N 5
void fun(int a[][N])
{
	int b,c=0,d;
	for(b=0;b<N;b++)
	{
		for(d=0;d<=c;d++)
			a[b][d]=0;
		c++;
	}
	///////以下为课本答案解法////////
	/*
	int i,j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			if(i>=j)
				a[i][j]=0;
	*/

}
void main()
{
	int a[N][N],i,j;
	printf("*****The array*****\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			a[i][j]=rand()%10;
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	fun(a);
	printf("THE RESULT\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
}