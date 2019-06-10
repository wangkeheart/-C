#include "stdio.h"
int main()
{
	int a,b,c,d,e,f;
	printf("请输入鸡的总数:\n");
	scanf("%d",&a);
	c=a*2;
	printf("请输入兔的总数:\n");
	scanf("%d",&b);
	d=b*4;
	e=c+d;
	f=a+b;
	printf("现有鸡和兔，头有%d,脚有:%d。问鸡兔分别是几只？",f,e);
	return 0;
}