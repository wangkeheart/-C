#include "stdio.h"
#include "math.h"
#include "stdlib.h"
double ttp(double *p,double *b);
int main()
{
	double a,b,j,k;
	printf("Input payment:");
	scanf("%lf",&a);
	b = fmod(a,100);
	k = ttp(&b,&a);
	j = a-a*k;
	printf("price = %.1lf\n",j);
	return 0;
}
double ttp(double *p,double *b)
{
	double a;
	int d;
	d=(int)((*b)/100);
	switch(d)
	{
		case 0:a=0/100;break;
		case 1:a=5.0/100;break;
		case 2:
		case 3:
		case 4:a=8.0/100;break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:a=10.0/100;break;
		default:a=15.0/100;break;
	}
	return a;
}
/*
4网购打折商品V2.0（5分）
题目内容：
某网上购物网站对用户实行优惠，买家购物货款p越多，则折扣越多。
标准如下：
p<100元         没有折扣
100元≤p<200元       5%折扣
200元≤p<500元  8%折扣
500元≤p<1000元          10%折扣
1000元≤p               15%折扣

【提示】：从题意可以看出，折扣的变化是有规律的。当购物金额达到“100元”的2倍、5倍、10倍时，折扣值就会发生变化。假如一个变量c代表100的倍数，则当c<1时，无折扣；当1≤c<2时，折扣d=5%；当2≤c<5时，折扣d=8%；当5≤c<10时，折扣d=10%；当10≤c时，折扣d=15%。
注：程序中与价格相关的数据类型为float
程序运行结果示例1：
Input payment:90↙
price = 90.0
程序运行结果示例2：
Input payment:100↙
price = 95.0
程序运行结果示例3：
Input payment:300↙
price = 276.0
程序运行结果示例4：
Input payment:1000↙
price = 850.0

程序运行结果示例5：
Input payment:650.5↙
price = 585.5
输入提示："Input payment:"
输入格式: "%f" 
输出格式："price = %.1f\n"  (注：等号左右均有空格)
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：31kb
*/