//11页第四题
#include "stdio.h"
int main(void)
{
	float lOperator,rOperator;
	float nResult1,nResult2;
	scanf("%f%f",&lOperator,&rOperator);
	nResult1=lOperator+rOperator;
	nResult2=lOperator-rOperator;
	printf("%.3f+%.3f=%.2f\n",lOperator,rOperator,nResult1);
	printf("%.3f-%.3f=%.2f\n",lOperator,rOperator,nResult2);
	return 0;
}
