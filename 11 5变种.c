#include "stdio.h"
int main()
{
	int lOperator,rOperator;
	char ch;
	int nResult1;
	int nResult2,nResult3,nResult4,nResult5;
	scanf("%d%c%d",&lOperator,&ch,&rOperator);
	if(ch=='+')
	{
		nResult1=lOperator+rOperator;
		printf("%d+%d=%d,",lOperator,rOperator,nResult1);
	}
	if(ch=='-')
	{
	    nResult2=lOperator-rOperator;
		printf("%d-%d=%d,",lOperator,rOperator,nResult2);
	}
	if(ch=='*')
	{
	nResult3=lOperator*rOperator;
	printf("%d*%d=%d,",lOperator,rOperator,nResult3);
	}
	if(ch=='/')
	{
		nResult4=lOperator%rOperator;
	printf("%d/%d=%d,",lOperator,rOperator,nResult4);
	}
	if(ch=='%%')
	{
		nResult5=lOperator%rOperator;
	printf("%d%%%d=%d,",lOperator,rOperator,nResult5);
	}

	return 0;
}