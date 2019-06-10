#include "stdio.h"
int main()
{
	int a,b,c;     // a=n;b=i;c=j
	printf("请输入n:");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=4-b;c++)
			printf(" ");
		for(c=1;c<=2*a-1;c++)
		{
			printf("*");
		}
		printf("\n");
	}
}
