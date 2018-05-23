#include "stdio.h"
#include "math.h"
void main()
{
	int num;
	printf("请输入一个大于1的整数：");
	scanf("%d",&num);
	do
	{
		if((num==2)||(num==3)||(num==11)||(num==13)||(num==5)||(num==7))
		printf("%d是素数.\n",num);
		else 
		{
			if((num%2==0)||(num%11==0)||(num%7==0)||(num%13==0)||(num%9==0)||(num%3==0)||(num%10==0)||(num%5==0))
			printf("%d不是素数。\n",num);
		else
			printf("%d是素数。 \n",num);
		}
			printf("请输入一个正整数num(输入不大于的1的整数退出):");
			scanf("%d",&num);
	}
	while(num>1);
	printf("退出。\n");
}
