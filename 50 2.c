#include "stdio.h"
int ttp(int k);
int main()
{
	int k;
	printf("Input k:");
	scanf("%d",&k);
	printf("The result is:%d",ttp(k));
}
int ttp(int k)
{
	int a;
	if(k==1)
		a=0;
	else if(k==2)
		a=0;
	else if(k==3)
		a=1;
	else
		a=ttp(k-1)+ttp(k-2)+ttp(k-3);
	return a;
}