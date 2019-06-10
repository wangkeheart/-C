//实验指导 20页 第四题
#include "stdio.h"
int main()
{
	int mun1,mun2,a;
	char ch;
	scanf("%d%c%d",&mun1,&ch,&mun2);
	if(ch=='+')
	a=mun1+mun2;
	else if(ch=='-')
	a=mun1-mun2;
	else if(ch=='*')
	a=mun1*mun2;
	else if(ch=='/')
	a=(mun2==0)?(printf("输入错误")):(mun1/mun2);
	printf("%d%c%d=%d",mun1,ch,mun2,a);
	return 0;
}
