#include "stdio.h"
#include "math.h"
void main(void)
{
	int a,b,c,d;
	scanf("%d-%d-%d",&a,&b,&c);
	if((a%4==0&&a%100!=0)||a%400==0)
	{
		if(b<2)
		d=(c>31)?(printf("输入错误!")):c;
		else if(b==2)
		d=(c>29)?(printf("输入错误!")):(31+c);
		else if(b==3)
		d=(c>31)?(printf("输入错误!")):(31+29+c);
		else if(b==4)
		d=(c>30)?(printf("输入错误!")):(31+29+31+c);
		else if(b==5)
		d=(c>31)?(printf("输入错误!")):(31+29+31+30+c);
		else if(b==6)
		d=(c>30)?(printf("输入错误!")):(31+29+31+30+31+c);
		else if(b==7)
		d=(c>31)?(printf("输入错误!")):(31+29+31+30+31+30+c);
		else if(b==8)
		d=(c>31)?(printf("输入错误!")):(31+29+31+30+31+30+31+c);
		else if(b==9)
		d=(c>30)?(printf("输入错误!")):(31+29+31+30+31+30+31+31+c);
		else if(b==10)
		d=(c>31)?(printf("输入错误!")):(31+29+31+30+31+30+31+31+30+c);
		else if(b==11)
		d=(c>30)?(printf("输入错误!")):(31+29+31+30+31+30+31+31+30+31+c);
		else if(b==12)
		d=(c>31)?(printf("输入错误!")):(31+29+31+30+31+30+31+31+30+31+30+c);
	}
	else if(b<2)
	d=(c>31)?(printf("输入错误!")):c;
	else if(b<3)
	d=(c>28)?(printf("输入错误!")):(31+c);
	else if(b<4)
	d=(c>31)?(printf("输入错误!")):(31+28+c);
	else if(b<5)
	d=(c>30)?(printf("输入错误!")):(31+28+31+c);
	else if(b<6)
	d=(c>31)?(printf("输入错误!")):(31+28+31+30+c);
	else if(b<7)
	d=(c>30)?(printf("输入错误!")):(31+28+31+30+31+c);
	else if(b==7)
	d=(c>31)?(printf("输入错误!")):(31+28+31+30+31+30+c);
	else if(b==8)
	d=(c>31)?(printf("输入错误!")):(31+28+31+30+31+30+31+c);
	else if(b==9)
	d=(c>30)?(printf("输入错误!")):(31+28+31+30+31+30+31+31+c);
	else if(b==10)
	d=(c>31)?(printf("输入错误!")):(31+28+31+30+31+30+31+31+30+c);
	else if(b==11)
	d=(c>30)?(printf("输入错误!")):(31+28+31+30+31+30+31+31+30+31+c);
	else if(b==12)
	d=(c>31)?(printf("输入错误!")):(31+28+31+30+31+30+31+31+30+31+30+c);
	printf("第%d天。",d);
}





