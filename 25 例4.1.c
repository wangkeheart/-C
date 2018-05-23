#include "stdio.h"
#define N 10
int main()
{
	int a[N],i,j,index,temp;
	printf("please input %d numbers\n",N);
	for(i=1;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N-1;i++)
	{
		index=i;
		for(j=j+1;j<N;j++)
			if(a[j]<a[index])
				index=j;
			temp=a[index];
			a[index]=a[i];
			a[i]=temp;
	}
	printf("the array after sort:\n");
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	printf("\n");
	return 0;
}