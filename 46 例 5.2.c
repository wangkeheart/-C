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
原 理 解 析 ：age(5) = age(4) + 2   age(4) = age(3) + 2

              age(3) = age(2) + 1   age(2) = age(1) + 2

			  age(1) = 10;
			  所以推回去得 age(4)==16  再加上 2  就得18.
			  也就是age(5)的值。
*/