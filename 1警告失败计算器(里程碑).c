#include<stdio.h>
#include "stdlib.h"
#include "string.h"
int main(void)

{
	char ch;
	int g;
	int b;
	int c;
	int d;
	double f;
	
	
	printf("Please input two number\n");
	getchar("%d",&ch);
	scanf("%d%d",&g,&b);
//	scanf("%d%d",&b);

	

	if (ch=43)
	{
		
		c = g + b;
		printf("%d+%d=%d\n",g,b,c);
		system("pause");
		return 0;
	}
	else if (ch=45)
	{
		
		c = g - b;
		printf("%d-%d=%d\n",g,b,c); 
		system("pause");
		return 0;
	}
	else if(ch=42)
	{
		d = g*b;
		printf("%d*%d=%d\n",g,b,d);
		system("pause");
		return 0;
	}
	else
	{
		f = g / b;
		printf("%lf/%lf=%lf\n",g,b,f);
		system("pause");
		return 0;
	}
	system("pause");
	return 0;
}

