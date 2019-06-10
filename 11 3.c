//11页第三题  修改后
#include "stdio.h"
int main(void)
{
	int lOperator,rOperator;
	int nResult1;
	printf("请输入两个整数，并计算它们的差：\n");
	scanf("%d,%d",&lOperator,&rOperator);
	nResult1=lOperator-rOperator;
	printf("%d-%d=%d",lOperator,rOperator,nResult1); //原来此行有误，更改
	return 0;
}
