#include "stdio.h"
#define j 3.1415926f
int main()
{
	float r,l,s;
	printf("������Բ�뾶r:");
	scanf("%f",&r);
	l=r*2*j;
	s=r*r*j;
	printf("Բ�ܳ�Ϊ=%.2f\n",l);
	printf("Բ���Ϊ=%.2f",s);
	return 0;
}