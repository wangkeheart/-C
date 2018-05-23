#include "stdio.h"
int main()
{
	int a;
	for(a=1;a<100;a++)
	{	if((a%6!=0)&&(a%7!=0))
			printf("");
	else
			printf("%4d",a);
	}

		return 0;
}