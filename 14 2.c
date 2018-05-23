//实验指导 14页第二题
#include "stdio.h"
int main(void)
{
	int a,b;
	float x,y;
	char cl,c2;
	scanf("a=%d b=%d",&a,&b);
	scanf("%f%e",&x,&y);
	scanf(" %c %c",&cl,&c2);//课本可能这行有误。
	printf("a=%d,b=%d,x=%f,y=%f,cl=%c,c2=%c",a,b,x,y,cl,c2);
	return 0;
}
//最终输出结果是两个都一样。