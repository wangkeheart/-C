#include "stdio.h"
int main(void)
{
	int age(int n);
	printf("%d\n",age(5));
}
int age(int n)
{
	int c;
	if(n==1)
		c=10;
	else
		c=age(n-1)+2;
	return (c);
}
/*
ԭ �� �� �� ��age(5) = age(4) + 2   age(4) = age(3) + 2

              age(3) = age(2) + 1   age(2) = age(1) + 2

			  age(1) = 10;
			  �����ƻ�ȥ�� age(4)==16  �ټ��� 2  �͵�18.
			  Ҳ����age(5)��ֵ��
*/