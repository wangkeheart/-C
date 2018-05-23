#include "stdio.h"
long fun(int k)
{
	if(k==0)
		k=1;
	else if(k>0)
		k=k*fun(k-1);
	return k;
}
main()
{
	int k;
	printf("Input k:");
	scanf("%d",&k);
	printf("%d!=%ld\n",k,fun(k));
}