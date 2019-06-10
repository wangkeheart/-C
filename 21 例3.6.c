#include "stdio.h"
#include "math.h"
void main()
{
	int num,i;
	int sq;
	printf("请输入一个大于1的整数：");
	scanf("%d",&num);
	do
	{
		sq=(int)sqrt(num);
		for(i=2;i<=sq;i++)
		if(num%i==0)
		break;
		if(i<=sq)
		printf("%d不是素数。\n",num);
		else
		printf("%d是素数。 \n",num);
		printf("请输入一个正整数num(输入不大于的1的整数退出):");
		scanf("%d",&num);
	}
	while(num>1);
		printf("退出。\n");
}
