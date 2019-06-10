#include "stdio.h"
#include "stdlib.h"
void main()
{
	int a,i,sum=0;
	for(i=1;i<=3;i++)  //先用i=1 使用i++的运算循环，直到超过了i<=3则跳出循环。
	{
		printf("现在的I是：%d\n",i);
		system("pause");
		scanf("%d",&a);
		if(a%2==0) //a/2的余数。
		printf("是偶数。\n");
		else
		printf("是奇数。\n");
		sum=sum+a;
	}
	printf("现在的I是:%d,已经超出条件，跳出循环。\n",i);
	printf("sum=%d。\n",sum);
}