//11页第5题
#include "stdio.h"
int main(void)
{
	int lOperator,rOperator;
	int nResult1,nResult2,nResult3,nResult4,nResult5;
	lOperator=4;
	rOperator=5;
	nResult1=lOperator+rOperator;
	nResult2=lOperator-rOperator;
	nResult3=lOperator*rOperator;
	nResult4=lOperator/rOperator;
	nResult5=lOperator%rOperator;
	printf("%d+%d=%d,",lOperator,rOperator,nResult1);
	printf("%d-%d=%d,",lOperator,rOperator,nResult2);
	printf("%d*%d=%d,",lOperator,rOperator,nResult3);
	printf("%d/%d=%d,",lOperator,rOperator,nResult4);
	printf("%d%%%d=%d,",lOperator,rOperator,nResult5);

	return 0;
}

