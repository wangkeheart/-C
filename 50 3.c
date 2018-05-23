#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"
int fun(int score[],int m,int below[])
{
	int i,j=0;
	float aver = 0.0;
	for(i=0;i<m;i++)
		aver+=score[i];
	aver/=m;
	for(i=0;i<m;i++)
		if(score[i]<aver)
			below[j++]=score[i];
		return j;
}
void main()
{
	int i,n,below[9];
	int score[9]={10,20,30,40,50,60,70,80,90};
	n=fun(score,9,below);
	printf("\nBelow the average score are:");
	for(i=0;i<n;i++)
		printf("%d ",below[i]);
}