#include "stdio.h"
#include "stdlib.h"
void main()
{
	int i,j,x;
	for(j=4;j>0;j--)  //两个循环   满足第一个循环的值 在第二循环中直到全部执行
		//完成后跳出。接着第一个循环再赋第二个值再放到第二循环中直到全部执行
		//完成后跳出。
	{
		for(i=1;i<=4;i++) //第一次循环中，j就一直等于4.不变。所以输出四个值。
		{
			x=(j-1)*4+i;
			printf("%4d",x);
			system("pause");
		}
		printf("\n");
	}
}

