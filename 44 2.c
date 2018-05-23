#include "stdio.h"
long fun(long num)
{
	long k=1; // ¸³¸øËü³õÖµ¡£
	do{
		k*=num%10;
		num=num/10;
	}while(num);
	return (k);
}
void main()
{
	long n;
	printf("Please enter a number:");scanf("%ld",&n);
	printf("%ld",fun(n));
}
