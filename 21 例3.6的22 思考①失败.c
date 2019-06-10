#include "stdio.h"
#include "math.h"
void main()
{
	int num,i;
	int sq;
	i=2;   //不加此句会导致 while 出现一个警告：即出现未初始的i。
	printf("请输入一个大于1的整数：");
	scanf("%d",&num);
	do
	{
		sq=(int)sqrt(num);
		while(i<=sq)  // while用于未知循环次数的循环，直到满足条件才会结束。
		//for(i=2;i<=sq;i++):for用于已知循环次数的循环,先用i=2和i<=sq比较
		//如果符合条件就向下执行(不满足就直接跳出循环了。)，循环一周之后，
		//将i放入i++中运算，再与i<=sq比较，满足向下执行，不满足跳出循环。
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
