#include "stdio.h"
float fun(float r)
{
	return 3.14159*r*r/(2.0);
}
void main()
{
	float fun(float r),x;
	printf("Enter x:");
	scanf("%f",&x);
	printf("s = %f\n",fun(x));
}