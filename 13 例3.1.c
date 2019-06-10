#include "stdio.h"
#include "math.h"
void main()
{
	float a,b,c,s,area,p;
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	p=s*(s-a)*(s-b)*(s-c);
	area=sqrt(p);//开根
	printf("a=%7.2f,b=%7.2f,c=%7.2f\n",a,b,c);
	printf("area=%8.3f\n",area);
}