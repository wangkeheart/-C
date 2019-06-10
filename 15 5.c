#include "stdio.h"
int main()
{
	int a,b,m,n,p,j,s,t;
	scanf("%d%d",&n,&m);
	p=4*n;
	j=-m;
	s=p+j;
	a=s/2;
	b=2-a;
	t=n-a; //不加此句会导致 有时兔子总数为负的情况。
	/*
	例1 鸡与兔，数头有16个，数脚有44只。问：鸡与兔各有多少只?
	*/
	printf("rabbit=%d,chicken=%d",t,a);
	return 0;


}