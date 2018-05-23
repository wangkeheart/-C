//11页第六题
#include "stdio.h"
int main()
{
	float a;
	float b;
	float c;
	float d;
	printf("请输入一个整数和一个浮点数，并求出二者的倒数:\n");
	scanf("%f,%f",&a,&b);
	c=1/a;
	d=1/b;
	printf("1/%2.0f=%.2f;",a,c);
	printf("1/%3.1f=%.2f",b,d);
	return 0;
}
