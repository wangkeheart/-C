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
	t=n-a; //���Ӵ˾�ᵼ�� ��ʱ��������Ϊ���������
	/*
	��1 �����ã���ͷ��16����������44ֻ���ʣ������ø��ж���ֻ?
	*/
	printf("rabbit=%d,chicken=%d",t,a);
	return 0;


}