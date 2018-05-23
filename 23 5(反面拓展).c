#include "stdio.h"
int main()
{
	int a,b,c;
	int i,j,k;
	printf("«Î ‰»În:");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=7-b;c++)
			printf(" ");
		for(c=1;c<=2*b-1;c++)
		{
			printf("*");
		}
		printf("\n");
	}
    for(i=2;i<=a;i++)
    {
        for(j=1;j<=i+2;j++)
        printf(" ");
        for(k=i;k<=2*a-i;k++)
        {
            printf("*");
        }
        printf("\n");
    }

}
