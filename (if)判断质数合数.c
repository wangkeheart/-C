#include "stdio.h"
int main()
{
	int a,b,c;
	printf("请输入一个大于1数字:");
	scanf("%d",&a);
	if(a<=1)
	{
		printf("输入错误");
	}
	else
	{
		for(b=2;b<a;b++)
		{
			if(a%b==0||a==1)
			{
				c=1;
			}
		}
		if(c==1)
		{
			printf("是合数。");
		}
		else
		{
			printf("是质数。");
		}
	}
	return 0;
}
