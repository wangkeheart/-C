#include "stdio.h"
int main()
{
	int a,b=0,c,k=0,n[81];
	for(c=1;c<=9;c++)
		for(a=1;a<=c;a++)
		{
			n[b]=c*a;
			b++;
		}
	for(c=1;c<=9;c++)
	{
		for(a=1;a<=c;a++)
		{
			printf("%d*%d=%-5d",c,a,n[k]);
			k++;
		}
		printf("\n");
	}

	return 0;
}






