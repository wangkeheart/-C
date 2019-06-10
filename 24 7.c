#include "stdio.h"
int main()
{
	int a,b,c=0,d,e,f,g,h;
	scanf("%d",&a);
	b=a;
	while(b!=0)
	{
		c=c+1;
		b=b/10;
	}
	d=a/1000;
	e=(a/100)%10;
	f=(a/10)%10;
	g=(a)%10;
	h=g*1000+f*100+e*10+d;
	printf("%d位数\n",c);
	if(c==3)
	{
		printf("逆序:%-4d\n",h/10);
	}
	else if(c==4)
	{
		printf("逆序:%-4d\n",h);
	}
	return 0;

	
}
