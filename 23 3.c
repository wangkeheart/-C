#include "stdio.h"
void main()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		j=i*10+6; //刚开始这个地方打错了 j=j*10+6  
		if((i%3!=0)&&(i%10!=6)) //这道题出的不严谨。&&(i%10!=6)删除后
			                    //源程序输出不变。
		continue;
		printf("%4d",j);
	}
}