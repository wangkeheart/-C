#include "stdio.h"
#define j 3.1415926f
int main()
{
	float r,l,s;
	printf("请输入圆半径r:");
	scanf("%f",&r);
	l=r*2*j;
	s=r*r*j;
	printf("圆周长为=%.2f\n",l);
	printf("圆面积为=%.2f",s);
	return 0;
}