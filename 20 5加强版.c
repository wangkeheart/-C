#include "stdio.h"
#include "math.h"
#include "stdlib.h"
		int main()
{
		int a,b,c,d,o,zh,ch;
		zh=30;ch=31;
		while ("ture")//
{//
		printf("请输入有效的 年-月-日：\n");
		scanf("%d-%d-%d",&a,&b,&c);
		switch(b)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		o=31;
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		o=30;
		break;
		case 2:
		if((a%4==0&&a%100!=0)||a%400==0)
		o=29;
		else
		o=28;
		break;
		default:printf("输入错误!请重新输入\n");
		}
		if(b==2)	
		d=zh+c;
		else if(b==1)
		d=c;
		else if(b==3)
		d=zh+o+c;
		else if(b==4)
		d=zh*2+o+c;
		else if(b==5)
		d=2*zh+o+ch+c;
		else if(b==6)
		d=3*zh+o+ch+c;
		else if(b==7)
		d=3*zh+o+2*ch+c;
		else if(b==8)
		d=4*zh+o+2*ch+c;
		else if(b==9)
		d=5*zh+o+2*ch+c;
		else if(b==10)
		d=5*zh+o+3*ch+c;
		else if(b==11)
		d=6*zh+o+3*ch+c;
		else if(b==12)
		d=6*zh+o+4*ch+c;
		if(c>o)
		printf("输入错误\n");
		else
		printf("第%d天。\n",d);
	}//
	return 0;
}



