//实验指导 20页 第四题
#include "stdio.h"
int main()
{
	int mun1,mun2,a;
	char ch;
	scanf("%d%c%d",&mun1,&ch,&mun2);
	switch(ch)
	{
	case '+':a=mun1+mun2;break;
	case '-':a=mun1-mun2;break;
	case '*':a=mun1*mun2;break;
	case '/':a=(mun2==0)?(goto k)):(mun1/mun2);break;
	}
	printf("%d%c%d=%d",mun1,ch,mun2,a);
k:
	return 0;
}
